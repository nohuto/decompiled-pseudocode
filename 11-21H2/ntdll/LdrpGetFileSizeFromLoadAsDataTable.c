/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x18003A8EC
 * Callers:
 *     LdrpGetImageSize @ 0x18003A4FC (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x18003F8A0 (LdrpResGetMappingSize.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18001DA80 (RtlInitializeCriticalSectionEx.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     ZwDelayExecution @ 0x1800A46F0 (ZwDelayExecution.c)
 */

__int64 __fastcall LdrpGetFileSizeFromLoadAsDataTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v9; // [rsp+40h] [rbp+8h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !a1 )
    return 0LL;
  v9 = 0LL;
  v10 = -1000000LL;
  while ( _InterlockedCompareExchange(&DataLoadLockCount, 1, 0) )
  {
    v5 = DataLoadLockCount;
    if ( DataLoadLockCount == 1 )
    {
      ZwDelayExecution(0LL, &v10);
      v5 = DataLoadLockCount;
    }
    if ( v5 == 2 )
      goto LABEL_7;
  }
  RtlInitializeCriticalSectionEx((__int64)&LoadAsDataCrits, 0LL, 0LL, a4);
  DataLoadLockCount = 2;
LABEL_7:
  RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
  v6 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    while ( v6 > 0 )
    {
      v7 = 48LL * --v6;
      if ( *(_QWORD *)(v7 + LoadAsDataTable) == a1 )
      {
        v9 = *(_QWORD *)(v7 + LoadAsDataTable + 16);
        break;
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v9;
}

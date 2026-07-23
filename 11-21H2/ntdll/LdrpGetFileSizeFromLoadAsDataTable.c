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

__int64 __fastcall LdrpGetFileSizeFromLoadAsDataTable(__int64 a1)
{
  int v2; // eax
  int v3; // ecx
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+8h]
  LARGE_INTEGER DelayInterval; // [rsp+48h] [rbp+10h] BYREF

  if ( !a1 )
    return 0LL;
  v6 = 0LL;
  DelayInterval.QuadPart = -1000000LL;
  while ( _InterlockedCompareExchange(&DataLoadLockCount, 1, 0) )
  {
    v2 = DataLoadLockCount;
    if ( DataLoadLockCount == 1 )
    {
      ZwDelayExecution(0, &DelayInterval);
      v2 = DataLoadLockCount;
    }
    if ( v2 == 2 )
      goto LABEL_7;
  }
  RtlInitializeCriticalSectionEx(&LoadAsDataCrits, 0, 0);
  DataLoadLockCount = 2;
LABEL_7:
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v3 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    while ( v3 > 0 )
    {
      v4 = 48LL * --v3;
      if ( *(_QWORD *)((char *)LoadAsDataTable + v4) == a1 )
      {
        v6 = *(_QWORD *)((char *)LoadAsDataTable + v4 + 16);
        break;
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v6;
}

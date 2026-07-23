/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x1800270A0
 * Callers:
 *     LdrpResGetMappingSize @ 0x180022810 (LdrpResGetMappingSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023A40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetImageSize @ 0x180088608 (LdrpGetImageSize.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x180021D60 (RtlpEnterCriticalSectionContended.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005FC80 (RtlInitializeCriticalSectionEx.c)
 *     Feature_Servicing_CritsecInit__private_IsEnabled @ 0x18009E30C (Feature_Servicing_CritsecInit__private_IsEnabled.c)
 *     LdrpInitMuiCritsRtlInitOnce @ 0x18009E3DC (LdrpInitMuiCritsRtlInitOnce.c)
 *     ZwDelayExecution @ 0x18009F470 (ZwDelayExecution.c)
 */

__int64 __fastcall LdrpGetFileSizeFromLoadAsDataTable(__int64 a1)
{
  int v3; // eax
  struct _TEB *v4; // rcx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // [rsp+40h] [rbp+8h]
  LARGE_INTEGER DelayInterval; // [rsp+48h] [rbp+10h] BYREF

  if ( !a1 )
    return 0LL;
  v7 = 0LL;
  if ( (unsigned int)Feature_Servicing_CritsecInit__private_IsEnabled() )
  {
    LdrpInitMuiCritsRtlInitOnce();
  }
  else
  {
    DelayInterval.QuadPart = -1000000LL;
    while ( _InterlockedCompareExchange(&DataLoadLockCount, 1, 0) )
    {
      v3 = DataLoadLockCount;
      if ( DataLoadLockCount == 1 )
      {
        ZwDelayExecution(0, &DelayInterval);
        v3 = DataLoadLockCount;
      }
      if ( v3 == 2 )
        goto LABEL_12;
    }
    RtlInitializeCriticalSectionEx(&LoadAsDataCrits, 0, 0);
    DataLoadLockCount = 2;
  }
LABEL_12:
  v4 = NtCurrentTeb();
  if ( _interlockedbittestandreset(&LoadAsDataCrits.LockCount, 0) )
  {
    LoadAsDataCrits.OwningThread = v4->ClientId.UniqueThread;
    LoadAsDataCrits.RecursionCount = 1;
  }
  else if ( LoadAsDataCrits.OwningThread == v4->ClientId.UniqueThread )
  {
    ++LoadAsDataCrits.RecursionCount;
  }
  else
  {
    RtlpEnterCriticalSectionContended((__int64)&LoadAsDataCrits);
  }
  v5 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    while ( v5 > 0 )
    {
      v6 = 48LL * --v5;
      if ( *(_QWORD *)((char *)LoadAsDataTable + v6) == a1 )
      {
        v7 = *(_QWORD *)((char *)LoadAsDataTable + v6 + 16);
        break;
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v7;
}

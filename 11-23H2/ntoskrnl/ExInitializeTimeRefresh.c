/*
 * XREFs of ExInitializeTimeRefresh @ 0x140B394EC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     KeSetTimer2 @ 0x140250150 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x14031E51C (KiInitializeTimer2.c)
 *     ZwLockProductActivationKeys @ 0x14041CFC0 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x14080FC84 (ExGetExpirationDate.c)
 */

__int64 *ExInitializeTimeRefresh()
{
  __int64 *result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  ZwLockProductActivationKeys(0LL, 0LL);
  if ( !ExpSystemSetupInProgress )
  {
    if ( (int)ExGetExpirationDate(&ExpNtExpirationDate) < 0 )
      ExpNtExpirationDate.QuadPart = 0LL;
    ExpShuttingDown = 0;
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 712) = ExpNtExpirationDate;
  }
  LODWORD(ExpTimeRefreshDpc) = 275;
  qword_140C31978 = (__int64)ExpTimeRefreshDpcRoutine;
  qword_140C31998 = 0LL;
  qword_140C31980 = (__int64)&ExpOkToTimeRefresh;
  qword_140C31970 = 0LL;
  ExpTimeRefreshWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeRefreshWork;
  ExpTimeRefreshWorkItem.Parameter = 0LL;
  ExpTimeRefreshWorkItem.List.Flink = 0LL;
  word_140C319C2 = 0;
  KiInitializeTimer2((unsigned __int64)&ExpTimeRefreshTimer, (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v1[1] = -1LL;
  v1[0] = 0LL;
  ExpTimeRefreshInterval = -36000000000LL;
  KeSetTimer2((__int64)&ExpTimeRefreshTimer, -36000000000LL, 0LL, (__int64)v1);
  ExInitializeResourceLite(&ExpTimeRefreshLock);
  result = &ExpTimerResolutionListHead;
  qword_140C31A98 = (__int64)&ExpTimerResolutionListHead;
  ExpTimerResolutionListHead = (__int64)&ExpTimerResolutionListHead;
  return result;
}

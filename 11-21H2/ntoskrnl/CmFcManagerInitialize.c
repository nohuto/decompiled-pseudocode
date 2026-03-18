/*
 * XREFs of CmFcManagerInitialize @ 0x140B15B24
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140B15450 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     CmFcpInitializeSectionState @ 0x1406EBB3C (CmFcpInitializeSectionState.c)
 *     CmSiRWLockInitialize @ 0x1407F3B30 (CmSiRWLockInitialize.c)
 *     CmpWorkItemInitialize @ 0x140833748 (CmpWorkItemInitialize.c)
 *     RtlInitializeSwapReference @ 0x140834418 (RtlInitializeSwapReference.c)
 */

__int64 *CmFcManagerInitialize()
{
  void *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 *result; // rax

  memset(CmFcSystemManager, 0, 0x368uLL);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&RunOnce);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140C49450);
  v0 = &unk_140C49468;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (void *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset(qword_140C494B0, 0, 0xB8uLL);
  RtlInitializeSwapReference(qword_140C494B0);
  memset(&unk_140C494C8, 0, 0x90uLL);
  RtlInitializeSwapReference(qword_140C49570);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140C49588);
  stru_140C495A8.TargetInfoAsUlong = 275;
  stru_140C495A8.DpcData = 0LL;
  stru_140C495A8.ProcessorHistory = 0LL;
  stru_140C495A8.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerDrainUsageNotificationsDpc;
  stru_140C495A8.DeferredContext = CmFcSystemManager;
  CmpWorkItemInitialize(
    (struct _EX_RUNDOWN_REF *)&stru_140C495E8,
    4,
    (unsigned __int64)CmFcpManagerDrainUsageNotificationsWorker,
    (unsigned __int64)CmFcSystemManager);
  CmpWorkItemInitialize(
    (struct _EX_RUNDOWN_REF *)&unk_140C49630,
    4,
    (unsigned __int64)CmFcpManagerRetryUsageNotificationsWorker,
    (unsigned __int64)CmFcSystemManager);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140C49670);
  result = &qword_140C49678;
  qword_140C49680 = (__int64)&qword_140C49678;
  qword_140C49678 = (__int64)&qword_140C49678;
  return result;
}

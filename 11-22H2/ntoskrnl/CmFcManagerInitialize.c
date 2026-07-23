/*
 * XREFs of CmFcManagerInitialize @ 0x140B3BCA0
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140B3BF64 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x1402BF970 (KeInitializeDpc.c)
 *     memset @ 0x140435400 (memset.c)
 *     CmFcpInitializeSectionState @ 0x1407EB254 (CmFcpInitializeSectionState.c)
 *     CmSiRWLockInitialize @ 0x1408106D0 (CmSiRWLockInitialize.c)
 *     CmpWorkItemInitialize @ 0x140810B4C (CmpWorkItemInitialize.c)
 *     RtlInitializeSwapReference @ 0x140810B80 (RtlInitializeSwapReference.c)
 */

void CmFcManagerInitialize()
{
  void *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rdx
  int v3; // edx
  __int64 v4; // r9
  int v5; // edx
  __int64 v6; // r9
  int v7; // edx
  __int64 v8; // r9

  memset(CmFcSystemManager, 0, 0x6D8uLL);
  CmSiRWLockInitialize(&RunOnce);
  CmSiRWLockInitialize(&stru_140C14030);
  v0 = &unk_140C14048;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (void *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset(qword_140C14090, 0, 0xB8uLL);
  RtlInitializeSwapReference(qword_140C14090);
  memset(&unk_140C140A8, 0, 0x90uLL);
  RtlInitializeSwapReference(qword_140C14150);
  CmSiRWLockInitialize(&stru_140C14168);
  KeInitializeDpc(
    (PRKDPC)&stru_140C14188,
    (PKDEFERRED_ROUTINE)CmFcpManagerDrainUsageNotificationsDpc,
    CmFcSystemManager);
  CmpWorkItemInitialize(
    (__int64)&stru_140C141C8,
    4,
    (__int64)CmFcpManagerDrainUsageNotificationsWorker,
    (__int64)CmFcSystemManager);
  CmpWorkItemInitialize((__int64)&unk_140C14210, v3, (__int64)CmFcpManagerRetryUsageNotificationsWorker, v4);
  CmSiRWLockInitialize(&stru_140C14250);
  qword_140C14260 = (__int64)&qword_140C14258;
  qword_140C14258 = (__int64)&qword_140C14258;
  qword_140C14538 = (__int64)&qword_140C14530;
  qword_140C14530 = (__int64)&qword_140C14530;
  CmSiRWLockInitialize(&stru_140C143A0);
  KeInitializeDpc(
    &stru_140C14570,
    (PKDEFERRED_ROUTINE)CmFcpManagerArmFeatureUsageProviderFlushTimerDpc,
    CmFcSystemManager);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc, CmFcSystemManager);
  RtlInitializeSwapReference(qword_140C14388);
  xmmword_140C14550 = 0LL;
  CmSiRWLockInitialize(&stru_140C14568);
  CmpWorkItemInitialize(
    (__int64)&stru_140C14600,
    4,
    (__int64)CmFcpManagerFlushFeatureUsageDataWorker,
    (__int64)CmFcSystemManager);
  CmpWorkItemInitialize((__int64)&unk_140C14640, v5, (__int64)CmFcpManagerPublishFeatureUsageDataBuffersWorker, v6);
  CmpWorkItemInitialize(
    (__int64)&stru_140C14680,
    v7,
    (__int64)CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker,
    v8);
  qword_140C14560 = 0LL;
  qword_140C14548 = (__int64)&qword_140C14540;
  qword_140C14540 = (__int64)&qword_140C14540;
  KeInitializeEvent(&stru_140C146D0, NotificationEvent, 0);
}

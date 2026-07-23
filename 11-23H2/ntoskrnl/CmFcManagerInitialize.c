/*
 * XREFs of CmFcManagerInitialize @ 0x140B385A8
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140B3886C (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x1402BFC30 (KeInitializeDpc.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmFcpInitializeSectionState @ 0x1407EAFA4 (CmFcpInitializeSectionState.c)
 *     CmSiRWLockInitialize @ 0x14080E420 (CmSiRWLockInitialize.c)
 *     CmpWorkItemInitialize @ 0x14080E89C (CmpWorkItemInitialize.c)
 *     RtlInitializeSwapReference @ 0x14080E8D0 (RtlInitializeSwapReference.c)
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
  CmSiRWLockInitialize(&stru_140C13FF0);
  v0 = &unk_140C14008;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (void *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset(qword_140C14050, 0, 0xB8uLL);
  RtlInitializeSwapReference(qword_140C14050);
  memset(&unk_140C14068, 0, 0x90uLL);
  RtlInitializeSwapReference(qword_140C14110);
  CmSiRWLockInitialize(&stru_140C14128);
  KeInitializeDpc(
    (PRKDPC)&stru_140C14148,
    (PKDEFERRED_ROUTINE)CmFcpManagerDrainUsageNotificationsDpc,
    CmFcSystemManager);
  CmpWorkItemInitialize(
    (__int64)&stru_140C14188,
    4,
    (__int64)CmFcpManagerDrainUsageNotificationsWorker,
    (__int64)CmFcSystemManager);
  CmpWorkItemInitialize((__int64)&unk_140C141D0, v3, (__int64)CmFcpManagerRetryUsageNotificationsWorker, v4);
  CmSiRWLockInitialize(&stru_140C14210);
  qword_140C14220 = (__int64)&qword_140C14218;
  qword_140C14218 = (__int64)&qword_140C14218;
  qword_140C144F8 = (__int64)&qword_140C144F0;
  qword_140C144F0 = (__int64)&qword_140C144F0;
  CmSiRWLockInitialize(&stru_140C14360);
  KeInitializeDpc(
    &stru_140C14530,
    (PKDEFERRED_ROUTINE)CmFcpManagerArmFeatureUsageProviderFlushTimerDpc,
    CmFcSystemManager);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)CmFcpManagerPublishFeatureUsageDataIfNearCapacityDpc, CmFcSystemManager);
  RtlInitializeSwapReference(qword_140C14348);
  xmmword_140C14510 = 0LL;
  CmSiRWLockInitialize(&stru_140C14528);
  CmpWorkItemInitialize(
    (__int64)&stru_140C145C0,
    4,
    (__int64)CmFcpManagerFlushFeatureUsageDataWorker,
    (__int64)CmFcSystemManager);
  CmpWorkItemInitialize((__int64)&unk_140C14600, v5, (__int64)CmFcpManagerPublishFeatureUsageDataBuffersWorker, v6);
  CmpWorkItemInitialize(
    (__int64)&stru_140C14640,
    v7,
    (__int64)CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker,
    v8);
  qword_140C14520 = 0LL;
  qword_140C14508 = (__int64)&qword_140C14500;
  qword_140C14500 = (__int64)&qword_140C14500;
  KeInitializeEvent(&stru_140C14690, NotificationEvent, 0);
}

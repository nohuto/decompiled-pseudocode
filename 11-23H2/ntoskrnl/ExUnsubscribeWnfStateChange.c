/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x1407E1360
 * Callers:
 *     EtwpUnsubscribeContainerStateWnf @ 0x1405FCE00 (EtwpUnsubscribeContainerStateWnf.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     RtlpCtContextFree @ 0x1409C22BC (RtlpCtContextFree.c)
 *     SshInitialize @ 0x140B51B2C (SshInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x14076CBEC (ExpWnfDeleteSubscription.c)
 */

_QWORD *__fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, PsInitialSystemProcess);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

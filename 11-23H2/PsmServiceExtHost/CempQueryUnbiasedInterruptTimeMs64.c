/*
 * XREFs of CempQueryUnbiasedInterruptTimeMs64 @ 0x180011964
 * Callers:
 *     CrmRegistrationReadyQueueRemove @ 0x1800138C0 (CrmRegistrationReadyQueueRemove.c)
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 *     CrmPeriodicNotifierSleepOnRegistry @ 0x18004B750 (CrmPeriodicNotifierSleepOnRegistry.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180050628 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 CempQueryUnbiasedInterruptTimeMs64()
{
  unsigned __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  RtlQueryUnbiasedInterruptTime(&v1);
  return v1 / 0x2710;
}

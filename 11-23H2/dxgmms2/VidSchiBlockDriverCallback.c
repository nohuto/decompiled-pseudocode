/*
 * XREFs of VidSchiBlockDriverCallback @ 0x1C010A08C
 * Callers:
 *     VidSchiReportHwHang @ 0x1C00474B8 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C0107150 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C0108850 (VidSchTerminateAdapter.c)
 *     VidSchPrepareForRecovery @ 0x1C0109EA0 (VidSchPrepareForRecovery.c)
 *     VidSchQueryDmaData @ 0x1C0109ECC (VidSchQueryDmaData.c)
 *     VidSchQueryDmaHeader @ 0x1C0109FC0 (VidSchQueryDmaHeader.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiBlockDriverCallback(__int64 a1)
{
  __int64 v1; // r9
  char v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 32);
  v3 = 0;
  DpSynchronizeExecution(*(_QWORD *)(a1 + 24), VidSchiBlockInterruptCallbackAtISR, a1, v1, &v3);
  KeFlushQueuedDpcs();
  DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL), 0LL);
  KeFlushQueuedDpcs();
}

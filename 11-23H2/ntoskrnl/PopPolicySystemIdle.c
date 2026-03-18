/*
 * XREFs of PopPolicySystemIdle @ 0x14099BED0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140361D90 (PopPolicyWorkerThread.c)
 * Callees:
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411374 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __noreturn PopPolicySystemIdle()
{
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  KeBugCheckEx(0xA0u, 0xAuLL, 3uLL, 0LL, 0LL);
}

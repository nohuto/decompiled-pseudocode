/*
 * XREFs of PoEnergyEstimationEnabled @ 0x1402F6160
 * Callers:
 *     NtCreateJobObject @ 0x140681CB0 (NtCreateJobObject.c)
 *     PspFoldProcessAccountingIntoJob @ 0x140683FE0 (PspFoldProcessAccountingIntoJob.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406BCB64 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1406BED60 (PspQueryProcessAccountingInformationCallback.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     PsQueryProcessEnergyValues @ 0x1407A8280 (PsQueryProcessEnergyValues.c)
 *     AlpcpCaptureAttributes @ 0x1407AB790 (AlpcpCaptureAttributes.c)
 *     PpmCheckReInit @ 0x14081A3AC (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1409663D0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 PoEnergyEstimationEnabled()
{
  return (unsigned __int8)PopEnergyEstimationEnabled;
}

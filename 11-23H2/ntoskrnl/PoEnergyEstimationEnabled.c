/*
 * XREFs of PoEnergyEstimationEnabled @ 0x1402C0B50
 * Callers:
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1406A0FA0 (PspQueryProcessAccountingInformationCallback.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140737EEC (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspAllocateThread @ 0x1407409D0 (PspAllocateThread.c)
 *     PsQueryProcessEnergyValues @ 0x140741FD0 (PsQueryProcessEnergyValues.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1407DC1B0 (PspFoldProcessAccountingIntoJob.c)
 *     PpmCheckReInit @ 0x14082CAEC (PpmCheckReInit.c)
 *     PpmEventTraceControlCallback @ 0x140864C90 (PpmEventTraceControlCallback.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978AA0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 PoEnergyEstimationEnabled()
{
  return (unsigned __int8)PopEnergyEstimationEnabled;
}

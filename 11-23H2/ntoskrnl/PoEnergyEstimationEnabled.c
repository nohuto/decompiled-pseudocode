/*
 * XREFs of PoEnergyEstimationEnabled @ 0x1402C0DE0
 * Callers:
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1406A0FA0 (PspQueryProcessAccountingInformationCallback.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1407380DC (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 *     PsQueryProcessEnergyValues @ 0x1407421C0 (PsQueryProcessEnergyValues.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1407DC480 (PspFoldProcessAccountingIntoJob.c)
 *     PpmCheckReInit @ 0x14082CDEC (PpmCheckReInit.c)
 *     PpmEventTraceControlCallback @ 0x140864ED0 (PpmEventTraceControlCallback.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978CA0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 PoEnergyEstimationEnabled()
{
  return (unsigned __int8)PopEnergyEstimationEnabled;
}

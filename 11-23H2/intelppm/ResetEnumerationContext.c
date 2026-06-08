/*
 * XREFs of ResetEnumerationContext @ 0x1C0003474
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0006EE0 (ComputeProcessorEnergyMsrEx.c)
 *     InitLegacyPccInternal @ 0x1C000C7D0 (InitLegacyPccInternal.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002A4D4 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C002A5BC (RetrieveEfficiencyClassInformation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002A6D4 (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x1C002AB4C (InitCpcStatesInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C002EE50 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C0037788 (CpcHighestNotifyWorker.c)
 *     InitPerfFeedbackInternal @ 0x1C003E658 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003E964 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C003FEC0 (RegisterKernelPepPerf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetEnumerationContext(__int64 *a1)
{
  __int64 result; // rax

  if ( a1[2] )
  {
    *((_BYTE *)a1 + 24) = 0;
  }
  else
  {
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}

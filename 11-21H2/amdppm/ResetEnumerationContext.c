/*
 * XREFs of ResetEnumerationContext @ 0x1C00027D4
 * Callers:
 *     InitLegacyPccInternal @ 0x1C00082C8 (InitLegacyPccInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C0020C40 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C00233A4 (CpcHighestNotifyWorker.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002F054 (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00316E0 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C00319E4 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0033D20 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00391D4 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C00394B0 (RetrieveEfficiencyClassInformation.c)
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

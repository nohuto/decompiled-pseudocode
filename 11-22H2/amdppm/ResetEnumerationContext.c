/*
 * XREFs of ResetEnumerationContext @ 0x1C0002394
 * Callers:
 *     InitLegacyPccInternal @ 0x1C00088F0 (InitLegacyPccInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C00217C0 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C0024014 (CpcHighestNotifyWorker.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002FE84 (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x1C0031044 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0032524 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003282C (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0034BA0 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C003A168 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C003A450 (RetrieveEfficiencyClassInformation.c)
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

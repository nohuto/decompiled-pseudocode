/*
 * XREFs of EnumerateNextDevice @ 0x1C0001850
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

__int64 __fastcall EnumerateNextDevice(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  __int64 *v5; // rdx
  __int64 v6; // rax

  v2 = a1[2];
  *a2 = 0LL;
  if ( v2 )
  {
    if ( *((_BYTE *)a1 + 24) )
      return 3221226021LL;
    *((_BYTE *)a1 + 24) = 1;
  }
  else
  {
    v4 = *a1;
    if ( !*a1 )
      return 3221226021LL;
    v5 = (__int64 *)a1[1];
    v6 = *v5;
    a1[1] = *v5;
    if ( v6 == v4 )
      return 3221226021LL;
    v2 = v6 - *((unsigned int *)a1 + 6);
  }
  *a2 = v2;
  return 0LL;
}

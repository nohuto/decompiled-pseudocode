/*
 * XREFs of InitializeEnumerationContext @ 0x1C0001BA0
 * Callers:
 *     GetPerfDomain @ 0x1C002478C (GetPerfDomain.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0026AB4 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0026B9C (RetrieveEfficiencyClassInformation.c)
 *     ProcLibTraceControlCallback @ 0x1C002DCD0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeEnumerationContext(__int64 a1, int a2, __int64 a3)
{
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)(a3 + 24) = a2;
}

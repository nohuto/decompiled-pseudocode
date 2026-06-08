/*
 * XREFs of InitializeEnumerationContext @ 0x1C0001E64
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002A4D4 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C002A5BC (RetrieveEfficiencyClassInformation.c)
 *     GetPerfDomain @ 0x1C002CA14 (GetPerfDomain.c)
 *     ProcLibTraceControlCallback @ 0x1C002EE50 (ProcLibTraceControlCallback.c)
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

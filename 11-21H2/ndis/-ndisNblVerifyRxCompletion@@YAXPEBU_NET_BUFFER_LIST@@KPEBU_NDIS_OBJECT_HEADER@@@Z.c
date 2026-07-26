/*
 * XREFs of ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006D410
 * Callers:
 *     NdisReturnNetBufferLists @ 0x1C0005660 (NdisReturnNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0006A00 (NdisFReturnNetBufferLists.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C006D1B0 (datapathVerifierReportProblem.c)
 *     verifySingleRxNbl @ 0x1C006DBF4 (verifySingleRxNbl.c)
 */

void __fastcall ndisNblVerifyRxCompletion(ULONG_PTR BugCheckParameter4, unsigned int a2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rdi
  KIRQL CurrentIrql; // al
  ULONG_PTR v7; // r14
  __int16 v8; // bp
  __int16 i; // bx
  __int16 v10; // ax

  v3 = a2;
  if ( (a2 & 1) != 0 && KeGetCurrentIrql() != 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    datapathVerifierReportProblem(0x20uLL, BugCheckParameter3, CurrentIrql);
  }
  if ( (v3 & 0xFFFFFFF8) != 0 )
    datapathVerifierReportProblem(1uLL, BugCheckParameter3, v3);
  v7 = BugCheckParameter4;
  v8 = 0;
  for ( i = 0; v7; i |= ~v10 )
  {
    verifySingleRxNbl(v7, BugCheckParameter3);
    v10 = *(_WORD *)(v7 + 258);
    v7 = *(_QWORD *)v7;
    v8 |= v10;
  }
  if ( (v3 & 2) != 0 && v8 != ~i )
    datapathVerifierReportProblem(0x23uLL, BugCheckParameter3, BugCheckParameter4);
}

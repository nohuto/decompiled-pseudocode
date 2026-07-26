/*
 * XREFs of ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0072AE0
 * Callers:
 *     NdisFSendNetBufferListsComplete @ 0x1C0004B10 (NdisFSendNetBufferListsComplete.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0013430 (NdisMSendNetBufferListsComplete.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C0072570 (datapathVerifierReportProblem.c)
 *     verifySingleTxNbl @ 0x1C0072FE0 (verifySingleTxNbl.c)
 */

void __fastcall ndisNblVerifyTxCompletion(ULONG_PTR BugCheckParameter4, unsigned int a2, ULONG_PTR BugCheckParameter3)
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
    verifySingleTxNbl(v7, BugCheckParameter3);
    v10 = *(_WORD *)(v7 + 258);
    v7 = *(_QWORD *)v7;
    v8 |= v10;
  }
  if ( (v3 & 2) != 0 && v8 != ~i )
    datapathVerifierReportProblem(0x23uLL, BugCheckParameter3, BugCheckParameter4);
}

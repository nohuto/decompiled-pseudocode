/*
 * XREFs of verifySingleTxNbl @ 0x1C0072FE0
 * Callers:
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0072AE0 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0072BCC (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C0072570 (datapathVerifierReportProblem.c)
 *     verifySingleNb @ 0x1C0072DBC (verifySingleNb.c)
 *     verifySingleNbl @ 0x1C0072F00 (verifySingleNbl.c)
 */

void __fastcall verifySingleTxNbl(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  _QWORD *i; // rbx

  if ( !*(_QWORD *)(BugCheckParameter4 + 8) )
    datapathVerifierReportProblem(0x30uLL, BugCheckParameter3, BugCheckParameter4);
  verifySingleNbl(BugCheckParameter4, BugCheckParameter3);
  for ( i = *(_QWORD **)(BugCheckParameter4 + 8); i; i = (_QWORD *)*i )
    verifySingleNb((ULONG_PTR)i, BugCheckParameter3);
}

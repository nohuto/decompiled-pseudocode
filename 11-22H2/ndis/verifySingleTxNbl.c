/*
 * XREFs of verifySingleTxNbl @ 0x1C0072FC0
 * Callers:
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0072AC0 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0072BAC (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C0072550 (datapathVerifierReportProblem.c)
 *     verifySingleNb @ 0x1C0072D9C (verifySingleNb.c)
 *     verifySingleNbl @ 0x1C0072EE0 (verifySingleNbl.c)
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

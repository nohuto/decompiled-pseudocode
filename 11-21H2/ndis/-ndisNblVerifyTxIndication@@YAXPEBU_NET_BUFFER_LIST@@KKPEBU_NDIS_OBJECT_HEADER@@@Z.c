/*
 * XREFs of ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006D80C
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00049F0 (NdisSendNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C0007AD0 (NdisFSendNetBufferLists.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C006D1B0 (datapathVerifierReportProblem.c)
 *     verifySingleTxNbl @ 0x1C006DC28 (verifySingleTxNbl.c)
 */

void __fastcall ndisNblVerifyTxIndication(
        ULONG_PTR BugCheckParameter4,
        unsigned int a2,
        unsigned int a3,
        ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v4; // rsi
  KIRQL CurrentIrql; // al
  ULONG_PTR v8; // r14
  __int16 v9; // bp
  __int16 i; // bx
  __int16 v11; // ax

  v4 = a3;
  if ( a2 > 0x1000000 )
    datapathVerifierReportProblem(0x10uLL, BugCheckParameter3, a2);
  if ( (v4 & 1) != 0 && KeGetCurrentIrql() != 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    datapathVerifierReportProblem(0x20uLL, BugCheckParameter3, CurrentIrql);
  }
  if ( (v4 & 0xFFFFFFC8) != 0 )
    datapathVerifierReportProblem(1uLL, BugCheckParameter3, v4);
  v8 = BugCheckParameter4;
  v9 = 0;
  for ( i = 0; v8; i |= ~v11 )
  {
    verifySingleTxNbl(v8, BugCheckParameter3);
    v11 = *(_WORD *)(v8 + 258);
    v8 = *(_QWORD *)v8;
    v9 |= v11;
  }
  if ( (v4 & 4) != 0 && v9 != ~i )
    datapathVerifierReportProblem(0x23uLL, BugCheckParameter3, BugCheckParameter4);
}

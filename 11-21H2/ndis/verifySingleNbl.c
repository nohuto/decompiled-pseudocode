/*
 * XREFs of verifySingleNbl @ 0x1C006DB40
 * Callers:
 *     verifySingleRxNbl @ 0x1C006DBF4 (verifySingleRxNbl.c)
 *     verifySingleTxNbl @ 0x1C006DC28 (verifySingleTxNbl.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C006D1B0 (datapathVerifierReportProblem.c)
 */

void __fastcall verifySingleNbl(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  int v4; // ecx
  __int64 *i; // rbx

  v4 = *(_DWORD *)(BugCheckParameter4 + 128);
  if ( (v4 & 0x600) == 0x600 )
  {
    datapathVerifierReportProblem(0x33uLL, BugCheckParameter3, BugCheckParameter4);
    v4 = *(_DWORD *)(BugCheckParameter4 + 128);
  }
  if ( (v4 & 0x1800) == 0x1800 )
  {
    datapathVerifierReportProblem(0x33uLL, BugCheckParameter3, BugCheckParameter4);
    v4 = *(_DWORD *)(BugCheckParameter4 + 128);
  }
  if ( (v4 & 0xFFFE00FC) != 0 )
    datapathVerifierReportProblem(0x33uLL, BugCheckParameter3, BugCheckParameter4);
  for ( i = *(__int64 **)(BugCheckParameter4 + 16); i; i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 5) > *((_WORD *)i + 4) )
      datapathVerifierReportProblem(0x80uLL, BugCheckParameter3, BugCheckParameter4);
  }
}

/*
 * XREFs of verifySingleNbl @ 0x1C0072F00
 * Callers:
 *     verifySingleRxNbl @ 0x1C0072FAC (verifySingleRxNbl.c)
 *     verifySingleTxNbl @ 0x1C0072FE0 (verifySingleTxNbl.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C0072570 (datapathVerifierReportProblem.c)
 */

void __fastcall verifySingleNbl(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  __int64 *i; // rbx

  if ( (*(_DWORD *)(BugCheckParameter4 + 128) & 0x600) == 0x600 )
    datapathVerifierReportProblem(0x33uLL, BugCheckParameter3, BugCheckParameter4);
  if ( (*(_DWORD *)(BugCheckParameter4 + 128) & 0x1800) == 0x1800 )
    datapathVerifierReportProblem(0x33uLL, BugCheckParameter3, BugCheckParameter4);
  if ( (*(_DWORD *)(BugCheckParameter4 + 128) & 0xFFFE00FC) != 0 )
    datapathVerifierReportProblem(0x33uLL, BugCheckParameter3, BugCheckParameter4);
  for ( i = *(__int64 **)(BugCheckParameter4 + 16); i; i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 5) > *((_WORD *)i + 4) )
      datapathVerifierReportProblem(0x80uLL, BugCheckParameter3, BugCheckParameter4);
  }
}

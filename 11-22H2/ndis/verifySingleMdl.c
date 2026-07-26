/*
 * XREFs of verifySingleMdl @ 0x1C0072D40
 * Callers:
 *     verifySingleNb @ 0x1C0072D9C (verifySingleNb.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C0072550 (datapathVerifierReportProblem.c)
 */

void __fastcall verifySingleMdl(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  if ( *(_WORD *)(BugCheckParameter4 + 8) < 0x30u )
    datapathVerifierReportProblem(0x60uLL, BugCheckParameter3, BugCheckParameter4);
  if ( (*(_BYTE *)(BugCheckParameter4 + 10) & 5) != 0
    && *(_QWORD *)(BugCheckParameter4 + 24) < (unsigned __int64)MmSystemRangeStart )
  {
    datapathVerifierReportProblem(0x71uLL, BugCheckParameter3, BugCheckParameter4);
  }
}

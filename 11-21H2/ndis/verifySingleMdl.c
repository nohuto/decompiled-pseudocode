/*
 * XREFs of verifySingleMdl @ 0x1C006D9A0
 * Callers:
 *     verifySingleNb @ 0x1C006D9FC (verifySingleNb.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C006D1B0 (datapathVerifierReportProblem.c)
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

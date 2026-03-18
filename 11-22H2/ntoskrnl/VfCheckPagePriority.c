/*
 * XREFs of VfCheckPagePriority @ 0x140AC47A0
 * Callers:
 *     VfCheckNxPagePriority @ 0x1405CE400 (VfCheckNxPagePriority.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE4250 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140AC49DC (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140ACCBDC (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPagePriority(int a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // rbx

  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0x40000000) == 0 )
  {
    v3 = a1;
    ViCiPreprocessOptions(
      byte_140C0DD9C,
      "The caller 0x%p specified an executable MDL mapping (priority 0x%x).",
      (const void *)0x2002,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2002uLL, a2, v3, 0LL, byte_140C0DD9C);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 288LL);
    _InterlockedIncrement(&dword_140C13A00);
  }
}

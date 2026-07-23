/*
 * XREFs of VfCheckPageProtection @ 0x140AC3868
 * Callers:
 *     VfCheckNxPageProtection @ 0x1405CE900 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140AE2840 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x140AE2DE0 (VerifierMmCreateSection.c)
 *     VerifierMmMapIoSpaceEx @ 0x140AE3140 (VerifierMmMapIoSpaceEx.c)
 *     VerifierMmMapViewOfSection @ 0x140AE33B0 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x140AE3660 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x140AE3890 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x140AE3920 (VerifierNtMapViewOfSection.c)
 *     VerifierZwCreateSection @ 0x140AE56E0 (VerifierZwCreateSection.c)
 *     VerifierZwMapViewOfSection @ 0x140AE5B90 (VerifierZwMapViewOfSection.c)
 *     VerifierZwProtectVirtualMemory @ 0x140AE6010 (VerifierZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405D0270 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140AC39FC (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140ACBBFC (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(unsigned int a1, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_140C0DD9C,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_140C0DD9C);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 284LL);
    _InterlockedIncrement(&dword_140C139BC);
  }
}

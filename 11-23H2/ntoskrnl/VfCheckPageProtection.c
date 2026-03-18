/*
 * XREFs of VfCheckPageProtection @ 0x140AC3878
 * Callers:
 *     VfCheckNxPageProtection @ 0x1405CE390 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140AE2850 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x140AE2DF0 (VerifierMmCreateSection.c)
 *     VerifierMmMapIoSpaceEx @ 0x140AE3150 (VerifierMmMapIoSpaceEx.c)
 *     VerifierMmMapViewOfSection @ 0x140AE33C0 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x140AE3670 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x140AE38A0 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x140AE3930 (VerifierNtMapViewOfSection.c)
 *     VerifierZwCreateSection @ 0x140AE56F0 (VerifierZwCreateSection.c)
 *     VerifierZwMapViewOfSection @ 0x140AE5BA0 (VerifierZwMapViewOfSection.c)
 *     VerifierZwProtectVirtualMemory @ 0x140AE6020 (VerifierZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD00 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140AC3A0C (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140ACBC0C (ViTargetIncrementCounter.c)
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

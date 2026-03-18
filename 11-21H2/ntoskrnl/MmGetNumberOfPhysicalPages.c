/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1406AD260
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x14023559C (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140235738 (ExpGetSystemBasicInformation.c)
 *     ExpDetermineLargePagePolicy @ 0x1403C43E0 (ExpDetermineLargePagePolicy.c)
 *     PopRequestWrite @ 0x140A4C5B4 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140A4DC74 (PopWriteHiberPages.c)
 *     ViPtInitCircularPoolTrace @ 0x140A9DD9C (ViPtInitCircularPoolTrace.c)
 *     ExInitializePoolTracker @ 0x140B0ABEC (ExInitializePoolTracker.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140B2F008 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * a1) + 16720LL);
}

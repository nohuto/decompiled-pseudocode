/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x140AD6118
 * Callers:
 *     VfHandlePoolAlloc @ 0x140AD0FE0 (VfHandlePoolAlloc.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD5FDC (VfFaultsInjectResourceFailure.c)
 *     VerifierMmMapLockedPages @ 0x140AE31B0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE3280 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     <none>
 */

__int64 VfFaultsIsSystemSufficientlyBooted()
{
  if ( ViSystemSufficientlyBooted )
    return 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - KeBootTime.QuadPart) / 0x2710uLL <= ViRequiredTimeSinceBootInMsecs )
    ++dword_140D7079C;
  else
    ViSystemSufficientlyBooted = 1;
  return (unsigned int)ViSystemSufficientlyBooted;
}

/*
 * XREFs of VfFastIoSnapState @ 0x140ACB2FC
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140305590 (IopCompleteUnloadOrDelete.c)
 *     IopWriteFile @ 0x1406B6F80 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407301F0 (IopCloseFile.c)
 *     IopReadFile @ 0x14074C3B0 (IopReadFile.c)
 *     NtLockFile @ 0x140765680 (NtLockFile.c)
 *     IopQueryInformation @ 0x1407ABAF0 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1407B4DB0 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x1407D353C (IopGetBasicInformationFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022ECE0 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x140ACB3F4 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2A4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}

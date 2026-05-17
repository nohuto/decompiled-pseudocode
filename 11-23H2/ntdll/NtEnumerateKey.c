/*
 * XREFs of NtEnumerateKey @ 0x1800A14F0
 * Callers:
 *     RtlpProcessIFEOKeyFilter @ 0x1800770D0 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083BA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpNtEnumerateSubKey @ 0x180084EE0 (RtlpNtEnumerateSubKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EF610 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FBD00 (RtlpCleanupRegistryKeys.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180115234 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1801160B4 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     <none>
 */

__int64 NtEnumerateKey()
{
  __int64 result; // rax

  result = 50LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

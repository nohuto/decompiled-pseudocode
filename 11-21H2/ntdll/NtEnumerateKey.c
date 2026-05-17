/*
 * XREFs of NtEnumerateKey @ 0x1800A46B0
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180062EC0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007C5D8 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpNtEnumerateSubKey @ 0x180089180 (RtlpNtEnumerateSubKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EE948 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FAF00 (RtlpCleanupRegistryKeys.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180113918 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1801147B8 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtEnumerateKey()
{
  __int64 result; // rax

  result = 50LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

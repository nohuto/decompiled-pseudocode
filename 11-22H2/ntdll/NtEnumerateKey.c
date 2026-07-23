/*
 * XREFs of NtEnumerateKey @ 0x18009F430
 * Callers:
 *     RtlpProcessIFEOKeyFilter @ 0x180076A60 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083530 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpNtEnumerateSubKey @ 0x1800846E0 (RtlpNtEnumerateSubKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800EE200 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FA8F0 (RtlpCleanupRegistryKeys.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180113D84 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180114C04 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 50;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

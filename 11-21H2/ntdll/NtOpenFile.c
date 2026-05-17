/*
 * XREFs of NtOpenFile @ 0x1800A46D0
 * Callers:
 *     RtlpCheckRelativeDrive @ 0x18000B3FC (RtlpCheckRelativeDrive.c)
 *     LdrpMapResourceFile @ 0x18004E164 (LdrpMapResourceFile.c)
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180053C60 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800680C0 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180068A78 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800804B8 (RtlpCreateNewDirectoryReference.c)
 *     RtlpMUIEnumerateFolder @ 0x18008F6D4 (RtlpMUIEnumerateFolder.c)
 *     RtlGetImageFileMachines @ 0x1800A30A0 (RtlGetImageFileMachines.c)
 *     LdrpCheckAppDirType @ 0x1800DC8F0 (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800EC19C (LdrpCnvrtShortToLongFileName.c)
 *     RtlpSysVolTakeOwnership @ 0x180102E40 (RtlpSysVolTakeOwnership.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180109E48 (RtlpOpenAndMapCustomCultureFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 51;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

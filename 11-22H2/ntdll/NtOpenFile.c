/*
 * XREFs of NtOpenFile @ 0x18009F450
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 *     LdrpMapResourceFile @ 0x18002EC40 (LdrpMapResourceFile.c)
 *     RtlpCheckRelativeDrive @ 0x180057918 (RtlpCheckRelativeDrive.c)
 *     SaferpIsV2PolicyPresent @ 0x180073418 (SaferpIsV2PolicyPresent.c)
 *     SaferpIsDllAllowed @ 0x1800734F4 (SaferpIsDllAllowed.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800751F4 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180075744 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpCreateNewDirectoryReference @ 0x18007B920 (RtlpCreateNewDirectoryReference.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007D47C (LdrpFindLoadedDllByMappingFile.c)
 *     RtlGetImageFileMachines @ 0x180083000 (RtlGetImageFileMachines.c)
 *     LdrpCheckAppDirType @ 0x1800DD070 (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800EB94C (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMUIEnumerateFolder @ 0x1800FB648 (RtlpMUIEnumerateFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x180102AD0 (RtlpSysVolTakeOwnership.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x18010A008 (RtlpOpenAndMapCustomCultureFile.c)
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

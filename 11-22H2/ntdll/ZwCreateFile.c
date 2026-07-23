/*
 * XREFs of ZwCreateFile @ 0x18009F890
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180007FE4 (RtlpFileIsWin32WithRCManifest.c)
 *     EtwpCreateFile @ 0x180060DEC (EtwpCreateFile.c)
 *     RtlpGetVolumeHandle @ 0x180062628 (RtlpGetVolumeHandle.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18006C380 (RtlCreateSystemVolumeInformationFolder.c)
 *     LdrpResMapFile @ 0x1800EF0EC (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800F9400 (RtlCreateBootStatusDataFile.c)
 *     GetProcessIptTrace @ 0x18012B6DC (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18012B838 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18012B9C0 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  NTSTATUS result; // eax

  result = 85;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

/*
 * XREFs of ZwCreateFile @ 0x1800A1950
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180008450 (RtlpFileIsWin32WithRCManifest.c)
 *     EtwpCreateFile @ 0x18005DF5C (EtwpCreateFile.c)
 *     RtlpGetVolumeHandle @ 0x18005F798 (RtlpGetVolumeHandle.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18006C380 (RtlCreateSystemVolumeInformationFolder.c)
 *     LdrpResMapFile @ 0x1800F04FC (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800FA810 (RtlCreateBootStatusDataFile.c)
 *     GetProcessIptTrace @ 0x18012CBD0 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18012CD2C (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18012CEB4 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateFile()
{
  __int64 result; // rax

  result = 85LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

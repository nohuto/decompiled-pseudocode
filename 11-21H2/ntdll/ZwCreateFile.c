/*
 * XREFs of ZwCreateFile @ 0x1800A4B10
 * Callers:
 *     EtwpCreateFile @ 0x180008BCC (EtwpCreateFile.c)
 *     RtlpGetVolumeHandle @ 0x18000AEC4 (RtlpGetVolumeHandle.c)
 *     GetProcessIptTraceSize @ 0x1800610A0 (GetProcessIptTraceSize.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180063EB0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180071520 (RtlCreateSystemVolumeInformationFolder.c)
 *     LdrpResMapFile @ 0x1800EF3B4 (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800F91B0 (RtlCreateBootStatusDataFile.c)
 *     GetProcessIptTrace @ 0x180126BDC (GetProcessIptTrace.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180126D38 (RtlpQueryDiskSpacePolicy.c)
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

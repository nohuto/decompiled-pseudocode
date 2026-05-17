/*
 * XREFs of NtCreateSection @ 0x18009F730
 * Callers:
 *     RtlCreateQueryDebugBuffer @ 0x180002480 (RtlCreateQueryDebugBuffer.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180007FE4 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 *     LdrpMapResourceFile @ 0x18002EC40 (LdrpMapResourceFile.c)
 *     CsrpConnectToServer @ 0x18004B21C (CsrpConnectToServer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007D47C (LdrpFindLoadedDllByMappingFile.c)
 *     RtlGetImageFileMachines @ 0x180083000 (RtlGetImageFileMachines.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008AEC0 (RtlpQueryExtendedHeapInformation.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800E0CE0 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800E7D24 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800EADD0 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800EF0EC (LdrpResMapFile.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x18010A008 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180116798 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1801184D4 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureHandleTrace @ 0x180128228 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x18012841C (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x180128718 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x180128BA4 (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x180129294 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x180129CD0 (PsspCaptureThreadInformation.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateSection()
{
  __int64 result; // rax

  result = 74LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

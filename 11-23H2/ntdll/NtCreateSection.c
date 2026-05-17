/*
 * XREFs of NtCreateSection @ 0x1800A17F0
 * Callers:
 *     RtlCreateQueryDebugBuffer @ 0x1800024B0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180008450 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpMapDllNtFileName @ 0x1800109E4 (LdrpMapDllNtFileName.c)
 *     LdrpMapResourceFile @ 0x18002EA70 (LdrpMapResourceFile.c)
 *     CsrpConnectToServer @ 0x18004B0BC (CsrpConnectToServer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007DAEC (LdrpFindLoadedDllByMappingFile.c)
 *     RtlGetImageFileMachines @ 0x180083670 (RtlGetImageFileMachines.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008B6C0 (RtlpQueryExtendedHeapInformation.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D8A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800E9054 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800EC100 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800F04FC (LdrpResMapFile.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x18010B4A8 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180117C48 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180119984 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureHandleTrace @ 0x1801296D8 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x1801298CC (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x180129BC8 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18012A054 (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x18012A744 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18012B180 (PsspCaptureThreadInformation.c)
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

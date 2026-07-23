/*
 * XREFs of NtUnmapViewOfSection @ 0x1800A13F0
 * Callers:
 *     RtlCreateQueryDebugBuffer @ 0x1800024B0 (RtlCreateQueryDebugBuffer.c)
 *     RtlDestroyQueryDebugBuffer @ 0x180002700 (RtlDestroyQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000273C (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180008450 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     LdrpMinimalMapModule @ 0x18002C524 (LdrpMinimalMapModule.c)
 *     LdrMapAndVerifyResourceFile @ 0x18002E7F0 (LdrMapAndVerifyResourceFile.c)
 *     LdrpMapResourceFile @ 0x18002EA70 (LdrpMapResourceFile.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180030F14 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B800 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x18006C1E0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800713C8 (RtlpFcUpdateLocalConfiguration.c)
 *     LdrpUnmapModule @ 0x180073CDC (LdrpUnmapModule.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007DAEC (LdrpFindLoadedDllByMappingFile.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007FEF0 (RtlGetLocaleFileMappingAddress.c)
 *     LdrFlushAlternateResourceModules @ 0x180088510 (LdrFlushAlternateResourceModules.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008B6C0 (RtlpQueryExtendedHeapInformation.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D8A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpSpecialCacheTypeHandle @ 0x18008E9FC (LdrpSpecialCacheTypeHandle.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800E4640 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800E49B0 (RtlpSetProcessDebugInformationRemote.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 *     RtlReportExceptionEx @ 0x1800E8110 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E8600 (RtlReportExceptionHelper.c)
 *     WerpCreateCrashDataSection @ 0x1800E9054 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800EC100 (RtlComputeImportTableHash.c)
 *     LdrResRelease @ 0x1800F0160 (LdrResRelease.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1801000E0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180100200 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180100DC0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpGetCustomCultureData @ 0x18010ADD4 (RtlpGetCustomCultureData.c)
 *     RtlHeapTrkInitialize @ 0x18010BDD0 (RtlHeapTrkInitialize.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180117C18 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180119954 (RtlpHpTagQueryHeapsRemote.c)
 *     PssNtFreeWalkMarker @ 0x1801290E0 (PssNtFreeWalkMarker.c)
 *     PsspCaptureHandleTrace @ 0x1801296A8 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x18012989C (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x180129B98 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18012A024 (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x18012A714 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18012B150 (PsspCaptureThreadInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  NTSTATUS result; // eax

  result = 42;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

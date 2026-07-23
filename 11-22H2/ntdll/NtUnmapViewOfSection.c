/*
 * XREFs of NtUnmapViewOfSection @ 0x18009F330
 * Callers:
 *     RtlCreateQueryDebugBuffer @ 0x180002480 (RtlCreateQueryDebugBuffer.c)
 *     RtlDestroyQueryDebugBuffer @ 0x1800026D0 (RtlDestroyQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000270C (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180007FE4 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpSnapModule @ 0x180023FF0 (LdrpSnapModule.c)
 *     LdrpMinimalMapModule @ 0x18002C6F4 (LdrpMinimalMapModule.c)
 *     LdrMapAndVerifyResourceFile @ 0x18002E9C0 (LdrMapAndVerifyResourceFile.c)
 *     LdrpMapResourceFile @ 0x18002EC40 (LdrpMapResourceFile.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800310E4 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B820 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x18006C1E0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800710A4 (RtlpFcUpdateLocalConfiguration.c)
 *     LdrpUnmapModule @ 0x18007366C (LdrpUnmapModule.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007D47C (LdrpFindLoadedDllByMappingFile.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007F880 (RtlGetLocaleFileMappingAddress.c)
 *     LdrFlushAlternateResourceModules @ 0x180087D10 (LdrFlushAlternateResourceModules.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008AEC0 (RtlpQueryExtendedHeapInformation.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpSpecialCacheTypeHandle @ 0x18008E1FC (LdrpSpecialCacheTypeHandle.c)
 *     RtlCreateProcessReflection @ 0x1800E0CE0 (RtlCreateProcessReflection.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800E3310 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800E3680 (RtlpSetProcessDebugInformationRemote.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 *     RtlReportExceptionEx @ 0x1800E6DE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E72D0 (RtlReportExceptionHelper.c)
 *     WerpCreateCrashDataSection @ 0x1800E7D24 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800EADD0 (RtlComputeImportTableHash.c)
 *     LdrResRelease @ 0x1800EED50 (LdrResRelease.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800FECD0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800FEDF0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800FF9B0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpGetCustomCultureData @ 0x180109964 (RtlpGetCustomCultureData.c)
 *     RtlHeapTrkInitialize @ 0x18010A960 (RtlHeapTrkInitialize.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180116798 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1801184D4 (RtlpHpTagQueryHeapsRemote.c)
 *     PssNtFreeWalkMarker @ 0x180127C60 (PssNtFreeWalkMarker.c)
 *     PsspCaptureHandleTrace @ 0x180128228 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x18012841C (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x180128718 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x180128BA4 (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x180129294 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x180129CD0 (PsspCaptureThreadInformation.c)
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

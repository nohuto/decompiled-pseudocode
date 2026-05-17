/*
 * XREFs of ZwMapViewOfSection @ 0x1800A13B0
 * Callers:
 *     RtlCreateQueryDebugBuffer @ 0x1800024B0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000273C (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180008450 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpMapViewOfSection @ 0x18002C9D0 (LdrpMapViewOfSection.c)
 *     LdrpMapResourceFile @ 0x18002EA70 (LdrpMapResourceFile.c)
 *     CsrpConnectToServer @ 0x18004B0BC (CsrpConnectToServer.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x18006C1E0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpFcMapSingleBuffer @ 0x180071588 (RtlpFcMapSingleBuffer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007DAEC (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008B6C0 (RtlpQueryExtendedHeapInformation.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D8A0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpMapCleanModuleView @ 0x1800E148C (LdrpMapCleanModuleView.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800E9054 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800EC100 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800F04FC (LdrpResMapFile.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1801000E0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180100200 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180100DC0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x18010B4A8 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlHeapTrkInitialize @ 0x18010BE00 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkLeakCallback @ 0x18010C870 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180117C48 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180119984 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureHandleTrace @ 0x1801296D8 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x1801298CC (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x180129BC8 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18012A054 (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x18012A744 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18012B180 (PsspCaptureThreadInformation.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x18012B91C (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x18012BA48 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x18012BBC4 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x18012BD4C (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 * Callees:
 *     <none>
 */

__int64 ZwMapViewOfSection()
{
  __int64 result; // rax

  result = 40LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

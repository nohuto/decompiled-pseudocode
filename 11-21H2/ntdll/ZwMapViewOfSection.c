/*
 * XREFs of ZwMapViewOfSection @ 0x1800A4570
 * Callers:
 *     RtlCreateQueryDebugBuffer @ 0x180002080 (RtlCreateQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000230C (RtlpChangeQueryDebugBufferTarget.c)
 *     LdrpMinimalMapModule @ 0x18004CAA8 (LdrpMinimalMapModule.c)
 *     LdrpMapResourceFile @ 0x18004E164 (LdrpMapResourceFile.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180053C60 (LdrpFindLoadedDllByMappingFile.c)
 *     PsspCaptureHandleTrace @ 0x180060AC4 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180061040 (PsspCaptureIptTrace.c)
 *     PsspCaptureThreadInformation @ 0x18006117C (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800616F0 (PsspCaptureHandleInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x180061BDC (PsspCaptureAuxiliaryPages.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180063EB0 (RtlpFileIsWin32WithRCManifest.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18006413C (PsspCaptureVaSpaceInformation2.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x180074300 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpFcMapSingleBuffer @ 0x1800765C8 (RtlpFcMapSingleBuffer.c)
 *     CsrpConnectToServer @ 0x180079664 (CsrpConnectToServer.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007D9C8 (RtlpQueryExtendedHeapInformation.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180092650 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpMapCleanModuleView @ 0x1800E194C (LdrpMapCleanModuleView.c)
 *     RtlCreateProcessReflection @ 0x1800E2080 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800E8E94 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800EB920 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800EF3B4 (LdrpResMapFile.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800FEFD0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800FF0F0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800FFD80 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180109E48 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlHeapTrkInitialize @ 0x18010A7A0 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkLeakCallback @ 0x18010B200 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801163A8 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180118054 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180125F14 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180126040 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x1801261C0 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x180126348 (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  NTSTATUS result; // eax

  result = 40;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

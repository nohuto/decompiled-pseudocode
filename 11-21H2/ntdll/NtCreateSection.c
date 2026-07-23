/*
 * XREFs of NtCreateSection @ 0x1800A49B0
 * Callers:
 *     RtlCreateQueryDebugBuffer @ 0x180002080 (RtlCreateQueryDebugBuffer.c)
 *     LdrpMapResourceFile @ 0x18004E164 (LdrpMapResourceFile.c)
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180053C60 (LdrpFindLoadedDllByMappingFile.c)
 *     PsspCaptureHandleTrace @ 0x180060AC4 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180061040 (PsspCaptureIptTrace.c)
 *     PsspCaptureThreadInformation @ 0x18006117C (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800616F0 (PsspCaptureHandleInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x180061BDC (PsspCaptureAuxiliaryPages.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180063EB0 (RtlpFileIsWin32WithRCManifest.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18006413C (PsspCaptureVaSpaceInformation2.c)
 *     CsrpConnectToServer @ 0x180079664 (CsrpConnectToServer.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007D9C8 (RtlpQueryExtendedHeapInformation.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180092650 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlGetImageFileMachines @ 0x1800A30A0 (RtlGetImageFileMachines.c)
 *     RtlCreateProcessReflection @ 0x1800E2080 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800E8E94 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800EB920 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800EF3B4 (LdrpResMapFile.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180109E48 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801163A8 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180118054 (RtlpHpTagQueryHeapsRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  NTSTATUS result; // eax

  result = 74;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

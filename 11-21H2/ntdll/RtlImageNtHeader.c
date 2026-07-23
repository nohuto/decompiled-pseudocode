/*
 * XREFs of RtlImageNtHeader @ 0x18004F1A0
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001F100 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x18004E164 (LdrpMapResourceFile.c)
 *     SbpDetermineDllContext @ 0x18004F028 (SbpDetermineDllContext.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180063EB0 (RtlpFileIsWin32WithRCManifest.c)
 *     TpAllocPoolInternal @ 0x180074674 (TpAllocPoolInternal.c)
 *     RtlCreateUserStack @ 0x180085730 (RtlCreateUserStack.c)
 *     RtlGetImageFileMachines @ 0x1800A30A0 (RtlGetImageFileMachines.c)
 *     LdrpCorFixupImage @ 0x1800DA6D8 (LdrpCorFixupImage.c)
 *     LdrpLoadCustomNtdll @ 0x1800E0454 (LdrpLoadCustomNtdll.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E630C (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800EB920 (RtlComputeImportTableHash.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800EC3DC (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800EC568 (LdrpGetMappingFromCacheEntry.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 */

PIMAGE_NT_HEADERS __cdecl RtlImageNtHeader(PVOID BaseOfImage)
{
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  return OutHeaders;
}

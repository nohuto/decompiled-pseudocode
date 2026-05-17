/*
 * XREFs of RtlImageNtHeader @ 0x18002EEB0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180007FE4 (RtlpFileIsWin32WithRCManifest.c)
 *     SbpDetermineDllContext @ 0x18002EAD4 (SbpDetermineDllContext.c)
 *     LdrpMapResourceFile @ 0x18002EC40 (LdrpMapResourceFile.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800310E4 (LdrpSetAlternateResourceModuleHandle.c)
 *     TpAllocPoolInternal @ 0x18004C170 (TpAllocPoolInternal.c)
 *     RtlCreateUserStack @ 0x180082190 (RtlCreateUserStack.c)
 *     RtlGetImageFileMachines @ 0x180083000 (RtlGetImageFileMachines.c)
 *     LdrpGetImageSize @ 0x180088608 (LdrpGetImageSize.c)
 *     LdrpCorFixupImage @ 0x1800DA7C8 (LdrpCorFixupImage.c)
 *     LdrpLoadCustomNtdll @ 0x1800DED6C (LdrpLoadCustomNtdll.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E5180 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800EADD0 (RtlComputeImportTableHash.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800EBC94 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800EBE24 (LdrpGetMappingFromCacheEntry.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall RtlImageNtHeader(unsigned __int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v2);
  return v2;
}

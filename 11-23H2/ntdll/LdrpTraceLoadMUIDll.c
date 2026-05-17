/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800ED41C
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180005938 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetResourceDirectory @ 0x180006000 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180006414 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x180007644 (LdrResFallbackLangList.c)
 *     RtlpResUltimateFallbackInfo @ 0x180007A14 (RtlpResUltimateFallbackInfo.c)
 *     LdrResGetRCConfig @ 0x180007BB0 (LdrResGetRCConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x180022630 (LdrpResGetMappingSize.c)
 *     LdrpAccessResourceData @ 0x180022B10 (LdrpAccessResourceData.c)
 *     LdrFindResource_U @ 0x1800298F0 (LdrFindResource_U.c)
 *     LdrMapAndVerifyResourceFile @ 0x18002E7F0 (LdrMapAndVerifyResourceFile.c)
 *     LdrFindResourceEx_U @ 0x180082A50 (LdrFindResourceEx_U.c)
 *     LdrpMUIEtwOutput @ 0x1800ED230 (LdrpMUIEtwOutput.c)
 *     LdrResRelease @ 0x1800F0160 (LdrResRelease.c)
 *     LdrpResFileSize @ 0x1800F0388 (LdrpResFileSize.c)
 *     LdrpResMapFile @ 0x1800F04FC (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800F0924 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800F10C8 (LdrpResValidateFilePath.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1)
{
  unsigned int v1; // edi
  _WORD v3[272]; // [rsp+50h] [rbp-238h] BYREF

  if ( (*a1 & 0xFFFEu) >= 0x212 )
    v1 = 265;
  else
    v1 = *a1 >> 1;
  memmove(v3, *((const void **)a1 + 1), 2LL * v1);
  v3[v1] = 0;
  return NtTraceEvent();
}

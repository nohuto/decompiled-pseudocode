/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800EC820
 * Callers:
 *     LdrpAccessResourceData @ 0x180038740 (LdrpAccessResourceData.c)
 *     LdrpResGetMappingSize @ 0x18003F8A0 (LdrpResGetMappingSize.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180041F80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrFindResource_U @ 0x180043270 (LdrFindResource_U.c)
 *     LdrMapAndVerifyResourceFile @ 0x180050748 (LdrMapAndVerifyResourceFile.c)
 *     LdrResSearchResource @ 0x180064700 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180064E1C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetResourceDirectory @ 0x1800654F0 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180065904 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x180066B4C (LdrResFallbackLangList.c)
 *     RtlpResUltimateFallbackInfo @ 0x180066F1C (RtlpResUltimateFallbackInfo.c)
 *     LdrResGetRCConfig @ 0x180067050 (LdrResGetRCConfig.c)
 *     LdrFindResourceEx_U @ 0x180084660 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x18008FB30 (LdrResRelease.c)
 *     LdrpMUIEtwOutput @ 0x1800EC634 (LdrpMUIEtwOutput.c)
 *     LdrpResFileSize @ 0x1800EF240 (LdrpResFileSize.c)
 *     LdrpResMapFile @ 0x1800EF3B4 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800EF7DC (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800EFF60 (LdrpResValidateFilePath.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
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

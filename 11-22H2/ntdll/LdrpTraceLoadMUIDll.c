/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800EC0E8
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x18000555C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetResourceDirectory @ 0x180005C20 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180006034 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x180007264 (LdrResFallbackLangList.c)
 *     RtlpResUltimateFallbackInfo @ 0x180007634 (RtlpResUltimateFallbackInfo.c)
 *     LdrResGetRCConfig @ 0x1800077D0 (LdrResGetRCConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x180022810 (LdrpResGetMappingSize.c)
 *     LdrpAccessResourceData @ 0x180022C2C (LdrpAccessResourceData.c)
 *     LdrFindResource_U @ 0x180029AC0 (LdrFindResource_U.c)
 *     LdrMapAndVerifyResourceFile @ 0x18002E9C0 (LdrMapAndVerifyResourceFile.c)
 *     LdrFindResourceEx_U @ 0x1800823E0 (LdrFindResourceEx_U.c)
 *     LdrpMUIEtwOutput @ 0x1800EBEFC (LdrpMUIEtwOutput.c)
 *     LdrResRelease @ 0x1800EED50 (LdrResRelease.c)
 *     LdrpResFileSize @ 0x1800EEF78 (LdrpResFileSize.c)
 *     LdrpResMapFile @ 0x1800EF0EC (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800EF514 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800EFCB8 (LdrpResValidateFilePath.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 *     memmove @ 0x1800A5980 (memmove.c)
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

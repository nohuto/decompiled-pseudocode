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

NTSTATUS __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int16 v3; // ax
  unsigned int v4; // edi
  _OWORD Fields[3]; // [rsp+20h] [rbp-268h] BYREF
  _WORD v7[272]; // [rsp+50h] [rbp-238h] BYREF

  v2 = a2;
  v3 = *a1 & 0xFFFE;
  memset(Fields, 0, sizeof(Fields));
  if ( v3 >= 0x212u )
    v4 = 265;
  else
    v4 = *a1 >> 1;
  memmove(v7, *((const void **)a1 + 1), 2LL * v4);
  v7[v4] = 0;
  BYTE4(Fields[0]) = 0;
  LOWORD(Fields[0]) = 2 * (v4 + 25);
  *(GUID *)((char *)&Fields[1] + 8) = LoadMUIDllGuid;
  return NtTraceEvent((HANDLE)v2, 0x100u, 0x30u, Fields);
}

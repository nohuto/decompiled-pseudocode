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

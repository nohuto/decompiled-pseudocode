/*
 * XREFs of LdrpGetRcConfig @ 0x180007D68
 * Callers:
 *     LdrIsResItemExist @ 0x18000441C (LdrIsResItemExist.c)
 *     LdrpCompareServiceChecksum @ 0x18000775C (LdrpCompareServiceChecksum.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180007C40 (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F3F8 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModule @ 0x180084070 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x180023058 (LdrpGetFromMUIMemCache.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023A40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800310E4 (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

_DWORD *__fastcall LdrpGetRcConfig(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  int v4; // esi
  __int64 v7; // rax
  _DWORD *v8; // rbx
  int v10; // eax
  _DWORD *v11; // [rsp+40h] [rbp-58h]
  __int64 v12[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = -1;
  v11 = 0LL;
  if ( !a4 )
    goto LABEL_5;
  v7 = LdrpGetFromMUIMemCache(BaseOfImage);
  v11 = (_DWORD *)v7;
  v8 = (_DWORD *)v7;
  if ( v7 != -1 )
  {
    if ( v7 )
      return v8;
LABEL_5:
    v12[2] = 1LL;
    v12[1] = (__int64)L"MUI";
    v12[3] = 0LL;
    v10 = LdrpSearchResourceSection_U(BaseOfImage, (__int64)v12);
    if ( v10 >= 0 )
    {
      v10 = LdrpAccessResourceDataNoMultipleLanguage(BaseOfImage);
      if ( v10 >= 0 )
      {
        v8 = v11;
        if ( *v11 == -20054323 )
          goto LABEL_8;
        v10 = -1073741701;
      }
    }
    v8 = 0LL;
LABEL_8:
    if ( a3 )
    {
      if ( v8 )
        v4 = (int)v8;
      LdrpSetAlternateResourceModuleHandle((_DWORD)BaseOfImage, 0, 0, v4, 0, 2, v10, 0LL);
    }
    return v8;
  }
  return 0LL;
}

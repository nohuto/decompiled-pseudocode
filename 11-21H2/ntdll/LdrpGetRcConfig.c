/*
 * XREFs of LdrpGetRcConfig @ 0x1800385FC
 * Callers:
 *     LdrIsResItemExist @ 0x180036C48 (LdrIsResItemExist.c)
 *     LdrpSearchResourceSection_U @ 0x180040060 (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180041A78 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180041F80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180050DFC (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModule @ 0x180081AE0 (LdrLoadAlternateResourceModule.c)
 *     LdrpCompareServiceChecksum @ 0x180081D2C (LdrpCompareServiceChecksum.c)
 * Callees:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001F100 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003A234 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetFromMUIMemCache @ 0x18003AC48 (LdrpGetFromMUIMemCache.c)
 *     LdrpSearchResourceSection_U @ 0x180040060 (LdrpSearchResourceSection_U.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

_DWORD *__fastcall LdrpGetRcConfig(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  _DWORD *v8; // rbx
  int v10; // eax
  _DWORD *v11; // [rsp+40h] [rbp-58h]
  __int64 v12[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = -1LL;
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
        v4 = (__int64)v8;
      LdrpSetAlternateResourceModuleHandle((__int64)BaseOfImage, 0LL, 0LL, v4, 0, 2, v10, 0LL);
    }
    return v8;
  }
  return 0LL;
}

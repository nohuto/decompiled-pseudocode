/*
 * XREFs of LdrpGetRcConfig @ 0x1402D75FC
 * Callers:
 *     LdrIsResItemExist @ 0x1402D7740 (LdrIsResItemExist.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1403DA094 (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x1402D72FC (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403D525C (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x14075717C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140757C9C (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

_DWORD *__fastcall LdrpGetRcConfig(__int64 a1, __int64 a2, char a3, char a4)
{
  int v4; // esi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  int v10; // eax
  _DWORD *v11; // [rsp+40h] [rbp-40h] BYREF
  __int64 v12; // [rsp+48h] [rbp-38h] BYREF
  char v13[8]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v14[3]; // [rsp+58h] [rbp-28h] BYREF

  v4 = -1;
  v12 = 0LL;
  v11 = 0LL;
  if ( !a4 )
    goto LABEL_5;
  v7 = LdrpGetFromMUIMemCache(a1, 0, 0LL, 8);
  v11 = v7;
  v8 = v7;
  if ( v7 != (_DWORD *)-1LL )
  {
    if ( v7 )
      return v8;
LABEL_5:
    v14[1] = 1LL;
    v14[0] = L"MUI";
    v14[2] = 0LL;
    v10 = LdrpSearchResourceSection_U(a1, (unsigned int)v14, 3, 33554480, (__int64)&v12);
    if ( v10 >= 0 )
    {
      v10 = LdrpAccessResourceDataNoMultipleLanguage(a1, v12, &v11, v13);
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
      LdrpSetAlternateResourceModuleHandle(a1, 0, 0, v4, 0, 2, v10, 0LL);
    }
    return v8;
  }
  return 0LL;
}

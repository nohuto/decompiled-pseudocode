/*
 * XREFs of ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1800E7F80
 * Callers:
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800E7D88 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800E7E80 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ @ 0x1803FB6C4 (-LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ.c)
 *     ?LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ @ 0x180404534 (-LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAppUserModelId(
        char *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5)
{
  unsigned __int16 *v6; // rbx
  __int64 v7; // rdx
  signed __int64 v8; // r8
  wchar_t *v9; // rax
  wchar_t v10; // cx
  wchar_t *v11; // rax
  const wchar_t *v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // rcx
  char *v15; // rdx
  unsigned __int16 v16; // ax
  wchar_t Str[136]; // [rsp+20h] [rbp-138h] BYREF

  v6 = a2;
  if ( a2 )
    *a2 = 0;
  if ( a4 && a5 )
    *a4 = 0;
  v7 = 130LL;
  v8 = a1 - (char *)Str;
  v9 = Str;
  while ( v7 != -2147483516 )
  {
    v10 = *(wchar_t *)((char *)v9 + v8);
    if ( !v10 )
      break;
    *v9++ = v10;
    if ( !--v7 )
      return 2147942487LL;
  }
  *v9 = 0;
  v11 = wcsrchr(Str, 0x21u);
  if ( Str[0] == 33 )
    return 2147942487LL;
  if ( !v11 )
    return 2147942487LL;
  v12 = v11 + 1;
  if ( !v11[1] )
    return 2147942487LL;
  *v11 = 0;
  v13 = 1;
  if ( v6 )
  {
    v14 = 65LL;
    v15 = (char *)((char *)Str - (char *)v6);
    while ( v14 != -2147483581 )
    {
      v16 = *(unsigned __int16 *)((char *)v6 + (_QWORD)v15);
      if ( !v16 )
        break;
      *v6++ = v16;
      if ( !--v14 )
      {
        *(v6 - 1) = 0;
        return 2147942522LL;
      }
    }
    *v6 = 0;
    v13 = 0;
  }
  if ( a4 )
    return StringCchCopyW(a4, a5, v12);
  else
    return v13;
}

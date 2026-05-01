/*
 * XREFs of ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1800ECEC4
 * Callers:
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800ECCDC (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ @ 0x1804DBB70 (-LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ.c)
 *     ?LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ @ 0x1804E1380 (-LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAppUserModelId(wchar_t *a1, wchar_t *a2, __int64 a3, unsigned __int16 *a4, unsigned __int64 a5)
{
  int v7; // r11d
  wchar_t *v8; // rax
  const wchar_t *v9; // r11
  __int64 result; // rax
  wchar_t Str[136]; // [rsp+20h] [rbp-138h] BYREF

  if ( a2 )
    *a2 = 0;
  if ( a4 && a5 )
    *a4 = 0;
  v7 = StringCchCopyW(Str, 0x82uLL, a1);
  if ( v7 < 0 )
  {
    if ( v7 == -2147024774 )
      return (unsigned int)-2147024809;
    return (unsigned int)v7;
  }
  else
  {
    v8 = wcsrchr(Str, 0x21u);
    if ( Str[0] != 33 && v8 && (v9 = v8 + 1, v8[1]) )
    {
      *v8 = 0;
      result = 1LL;
      if ( !a2 || (result = StringCchCopyW(a2, 0x41uLL, Str), (int)result >= 0) )
      {
        if ( a4 )
          return StringCchCopyW(a4, a5, v9);
      }
    }
    else
    {
      return 2147942487LL;
    }
  }
  return result;
}

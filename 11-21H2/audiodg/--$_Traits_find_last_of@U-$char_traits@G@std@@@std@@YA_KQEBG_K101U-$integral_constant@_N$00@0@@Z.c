/*
 * XREFs of ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101U?$integral_constant@_N$00@0@@Z @ 0x140026F9C
 * Callers:
 *     ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAPEAG@Z @ 0x1400269F4 (-GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAPEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101U?$integral_constant@_N$0A@@0@@Z @ 0x140060C14 (--$_Traits_find_last_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101U-$integral_constant@_N$0A@@0@@.c)
 */

__int64 __fastcall std::_Traits_find_last_of<std::char_traits<unsigned short>>(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v7; // r9d
  const wchar_t *i; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _WORD *j; // rdx
  _BYTE v13[256]; // [rsp+30h] [rbp-128h] BYREF

  if ( !a5 || !a2 )
    return -1LL;
  memset_0(v13, 0, sizeof(v13));
  for ( i = L"/\\"; i != &asc_1400A3F2C[a5]; ++i )
  {
    if ( *i >= 0x100u )
      return std::_Traits_find_last_of<std::char_traits<unsigned short>>((_DWORD)a1, a2, -1, v7, a5);
    v9 = *(unsigned __int8 *)i;
    v13[v9] = 1;
  }
  v10 = -1LL;
  if ( a2 )
    v10 = a2 - 1;
  for ( j = &a1[v10]; *j >= 0x100u || !v13[(unsigned __int16)*j]; --j )
  {
    if ( j == a1 )
      return -1LL;
  }
  return j - a1;
}

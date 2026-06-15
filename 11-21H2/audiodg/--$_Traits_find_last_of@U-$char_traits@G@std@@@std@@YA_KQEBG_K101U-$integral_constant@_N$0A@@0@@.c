/*
 * XREFs of ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101U?$integral_constant@_N$0A@@0@@Z @ 0x140060C14
 * Callers:
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101U?$integral_constant@_N$00@0@@Z @ 0x140026F9C (--$_Traits_find_last_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101U-$integral_constant@_N$00@0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Traits_find_last_of<std::char_traits<unsigned short>>(
        _WORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _WORD *i; // rax
  const wchar_t *v7; // rcx
  __int64 v8; // rdx

  if ( !a5 || !a2 )
    return -1LL;
  if ( a2 - 1 < a3 )
    a3 = a2 - 1;
  for ( i = &a1[a3]; ; --i )
  {
    v7 = L"/\\";
    v8 = a5;
    if ( *i == 47 )
      break;
    while ( v8 != 1 )
    {
      ++v7;
      --v8;
      if ( *v7 == *i )
      {
        if ( v7 )
          return i - a1;
        break;
      }
    }
    if ( i == a1 )
      return -1LL;
  }
  return i - a1;
}

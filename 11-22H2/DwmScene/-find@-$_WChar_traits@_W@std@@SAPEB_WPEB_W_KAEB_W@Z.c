/*
 * XREFs of ?find@?$_WChar_traits@_W@std@@SAPEB_WPEB_W_KAEB_W@Z @ 0x18001F824
 * Callers:
 *     ?GetDomain@IConfigurationManager@Utils@Spectre@@UEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x1800DBD60 (-GetDomain@IConfigurationManager@Utils@Spectre@@UEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::_WChar_traits<wchar_t>::find(_WORD *a1, __int64 a2, _WORD *a3)
{
  _WORD *result; // rax

  result = 0LL;
  if ( a2 )
  {
    while ( *a1 != *a3 )
    {
      if ( a2 == 1 )
        return result;
      --a2;
      ++a1;
    }
    return a1;
  }
  return result;
}

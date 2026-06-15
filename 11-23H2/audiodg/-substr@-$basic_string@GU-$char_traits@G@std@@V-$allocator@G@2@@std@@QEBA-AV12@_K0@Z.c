/*
 * XREFs of ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x14002D300
 * Callers:
 *     ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z @ 0x140065748 (-GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1400383B2 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::wstring::substr(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  if ( *(_QWORD *)(a1 + 16) < a3 )
  {
    std::_Xout_of_range("invalid string position");
    __debugbreak();
  }
  std::wstring::assign(a2);
  return a2;
}

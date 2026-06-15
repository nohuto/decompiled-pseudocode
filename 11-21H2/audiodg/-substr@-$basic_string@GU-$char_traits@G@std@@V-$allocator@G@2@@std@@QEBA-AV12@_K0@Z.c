/*
 * XREFs of ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x140031E30
 * Callers:
 *     ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAPEAG@Z @ 0x1400269F4 (-GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAPEAG@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x140026BB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wstring::substr(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8

  v3 = a3;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  v5 = a1[2];
  if ( v5 < a3 )
  {
    std::_Xout_of_range("invalid string position");
    __debugbreak();
  }
  v6 = v5 - v3;
  v7 = -1LL;
  if ( v6 != -1LL )
    v7 = v6;
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  std::wstring::assign((char *)a2, (char *)a1 + 2 * v3, v7);
  return a2;
}

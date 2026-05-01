/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@YAPEAU?$pair@_KURect@Foundation@Windows@winrt@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@0@@Z @ 0x180681D98
 * Callers:
 *     ??$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@QEAAPEAU?$pair@_KURect@Foundation@Windows@winrt@@@1@QEAU21@AEB_KAEBURect@Foundation@Windows@winrt@@@Z @ 0x180681220 (--$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@-$vector@U-$pair@_KURect@Foundat.c)
 *     ?_Reallocate_exactly@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAX_K@Z @ 0x180685CB4 (-_Reallocate_exactly@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect> *,std::allocator<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  while ( a1 != a2 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 16);
    a3 += 24LL;
    a1 += 24LL;
  }
  return a3;
}

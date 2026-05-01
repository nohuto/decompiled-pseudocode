/*
 * XREFs of ??0?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@V?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@AEBV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@@Z @ 0x1800BE7E0
 * Callers:
 *     _dynamic_initializer_for__error__ @ 0x1800035D0 (_dynamic_initializer_for__error__.c)
 *     _dynamic_initializer_for__idle__ @ 0x180004280 (_dynamic_initializer_for__idle__.c)
 *     _dynamic_initializer_for__listening__ @ 0x1800043A0 (_dynamic_initializer_for__listening__.c)
 *     _dynamic_initializer_for__responding__ @ 0x180005630 (_dynamic_initializer_for__responding__.c)
 *     _dynamic_initializer_for__thinking__ @ 0x1800066B0 (_dynamic_initializer_for__thinking__.c)
 * Callees:
 *     ??$_Uninitialized_copy@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@YAPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@QEBV10@0PEAV10@AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x1800BE6D0 (--$_Uninitialized_copy@PEBV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@st.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800C14DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::vector<std::vector<Windows::UI::Color>>::vector<std::vector<Windows::UI::Color>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 size_of; // rax
  _QWORD *v7; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = a2[1];
  v4 = *a2;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - *a2) >> 3);
  if ( v5 )
  {
    if ( v5 > 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<24>(0xAAAAAAAAAAAAAAABuLL * ((a2[1] - *a2) >> 3));
    v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v7;
    a1[1] = v7;
    a1[2] = &v7[3 * v5];
    a1[1] = std::_Uninitialized_copy<std::vector<Windows::UI::Color> const *,std::allocator<std::vector<Windows::UI::Color>>>(
              v4,
              v3,
              v7);
  }
  return a1;
}

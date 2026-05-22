/*
 * XREFs of ??0?$MapWeakPeerForWeakTarget@VCompositionObject@Composition@UI@Windows@@VCompositionIsland@234@@Composition@UI@Windows@@QEAA@XZ @ 0x1800956DC
 * Callers:
 *     _dynamic_initializer_for__Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIsland__ @ 0x180001750 (_dynamic_initializer_for__Windows--UI--Composition--CompositionIsland--s_mapWeakPeerToWeakIsland.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@2@@Z @ 0x180041F8C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

int *Windows::UI::Composition::MapWeakPeerForWeakTarget<Windows::UI::Composition::CompositionObject,Windows::UI::Composition::CompositionIsland>::MapWeakPeerForWeakTarget<Windows::UI::Composition::CompositionObject,Windows::UI::Composition::CompositionIsland>()
{
  _QWORD *v0; // rax
  __m128i si128; // xmm1

  qword_1802209D8 = 0LL;
  qword_1802209E0 = 0LL;
  Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIsland = 0;
  v0 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *v0 = v0;
  v0[1] = v0;
  qword_1802209E8 = 0LL;
  xmmword_1802209F0 = 0LL;
  Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIsland = LODWORD(FLOAT_1_0);
  qword_1802209D8 = (__int64)v0;
  xmmword_180220A00 = (__int128)si128;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IUnknown * const,IUnknown *>>>>>>::_Assign_grow(
    (unsigned __int64 **)&qword_1802209E8,
    0x10uLL,
    (unsigned __int64)v0);
  return &Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIsland;
}

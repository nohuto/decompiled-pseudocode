/*
 * XREFs of ??0?$MapWeakPeerForWeakTarget@VCompositionObject@Composition@UI@Windows@@VCompositionIslandSite@234@@Composition@UI@Windows@@QEAA@XZ @ 0x180095648
 * Callers:
 *     _dynamic_initializer_for__Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIslandSite__ @ 0x180001780 (_dynamic_initializer_for__Windows--UI--Composition--CompositionIsland--s_mapWeakPee_ea_180001780.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@2@@Z @ 0x180041F8C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

int *Windows::UI::Composition::MapWeakPeerForWeakTarget<Windows::UI::Composition::CompositionObject,Windows::UI::Composition::CompositionIslandSite>::MapWeakPeerForWeakTarget<Windows::UI::Composition::CompositionObject,Windows::UI::Composition::CompositionIslandSite>()
{
  _QWORD *v0; // rax
  __m128i si128; // xmm1

  qword_180220A18 = 0LL;
  qword_180220A20 = 0LL;
  Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIslandSite = 0;
  v0 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *v0 = v0;
  v0[1] = v0;
  qword_180220A28 = 0LL;
  xmmword_180220A30 = 0LL;
  Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIslandSite = LODWORD(FLOAT_1_0);
  qword_180220A18 = (__int64)v0;
  xmmword_180220A40 = (__int128)si128;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IUnknown * const,IUnknown *>>>>>>::_Assign_grow(
    (unsigned __int64 **)&qword_180220A28,
    0x10uLL,
    (unsigned __int64)v0);
  return &Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIslandSite;
}

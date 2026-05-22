/*
 * XREFs of ??1?$MapWeakPeerForWeakTarget@VCompositionObject@Composition@UI@Windows@@VCompositionIslandSite@234@@Composition@UI@Windows@@QEAA@XZ @ 0x180095840
 * Callers:
 *     _dynamic_atexit_destructor_for__Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIsland__ @ 0x1800B2190 (_dynamic_atexit_destructor_for__Windows--UI--Composition--CompositionIsland--s_mapWeakPeerToWeak.c)
 *     _dynamic_atexit_destructor_for__Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIslandSite__ @ 0x1800B21B0 (_dynamic_atexit_destructor_for__Windows--UI--Composition--CompositionIsland--s_mapW_ea_1800B21B0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUIUnknown@@PEAU1@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUIUnknown@@PEAU1@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUIUnknown@@PEAU1@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18011165C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUIUnknown@@PEAU1@@std@@PEAX@std@@@std@@@.c)
 */

void __fastcall Windows::UI::Composition::MapWeakPeerForWeakTarget<Windows::UI::Composition::CompositionObject,Windows::UI::Composition::CompositionIslandSite>::~MapWeakPeerForWeakTarget<Windows::UI::Composition::CompositionObject,Windows::UI::Composition::CompositionIslandSite>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<IUnknown * const,IUnknown *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<IUnknown * const,IUnknown *>,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x20uLL);
}

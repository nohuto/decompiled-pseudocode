/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUIUnknown@@PEAU1@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUIUnknown@@PEAU1@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUIUnknown@@PEAU1@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18011165C
 * Callers:
 *     ??1?$MapWeakPeerForWeakTarget@VCompositionObject@Composition@UI@Windows@@VCompositionIslandSite@234@@Composition@UI@Windows@@QEAA@XZ @ 0x180095840 (--1-$MapWeakPeerForWeakTarget@VCompositionObject@Composition@UI@Windows@@VCompositionIslandSite@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<IUnknown * const,IUnknown *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<IUnknown * const,IUnknown *>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, 0x20uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}

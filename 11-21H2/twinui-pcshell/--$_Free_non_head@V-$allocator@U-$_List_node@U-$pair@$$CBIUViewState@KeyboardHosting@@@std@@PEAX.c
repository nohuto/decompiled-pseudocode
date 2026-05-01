/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18046E028
 * Callers:
 *     ??1?$list@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@2@@std@@QEAA@XZ @ 0x18046F040 (--1-$list@U-$pair@$$CBIUViewState@KeyboardHosting@@@std@@V-$allocator@U-$pair@$$CBIUViewState@Ke.c)
 *     ??1?$unordered_map@IUViewState@KeyboardHosting@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@@std@@QEAA@XZ @ 0x18046F154 (--1-$unordered_map@IUViewState@KeyboardHosting@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocator@U-$p.c)
 *     ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x18046F544 (--1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180483FB0 (-clear@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>>>(
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
      std::_Deallocate<16,0>(v2, 0x58uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}

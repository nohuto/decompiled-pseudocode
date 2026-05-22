/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18012E0D0
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18012DF30 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServ.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_CBaseInputObserverServer_12_::InputObserverClient_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__CBaseInputObserverServer_12_::InputObserverClient____0___::_Try_emplace_unsigned___int64_const_&__::_1_::dtor$0 @ 0x18012E0BB (_std--_Hash_std--_Umap_traits_unsigned___int64_CBaseInputObserverServer_12_--InputO_ea_18012E0BB.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>,void *>>>(
        __int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    v3 = v2[3];
    if ( v3 )
    {
      v2[3] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      v2 = *(_QWORD **)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>(v2, 0x28uLL);
  }
}

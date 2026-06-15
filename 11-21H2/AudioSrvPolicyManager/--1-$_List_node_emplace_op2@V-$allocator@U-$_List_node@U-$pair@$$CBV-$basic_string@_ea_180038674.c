/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180038674
 * Callers:
 *     ??$emplace@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@1@@Z @ 0x180038264 (--$emplace@U-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@V.c)
 *     _std::_Hash_std::_Umap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState____std::_Uhash_compare_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::hash_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::equal_to_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState________0___::emplace_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState________::_1_::dtor$0 @ 0x1800465A2 (_std--_Hash_std--_Umap_traits_std--basic_string_unsigned_short_std--char_traits_uns_ea_1800465A2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA@XZ @ 0x1800387E0 (--1-$unique_ptr@VCEndpointVolumeState@@U-$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    std::unique_ptr<CEndpointVolumeState>::~unique_ptr<CEndpointVolumeState>(v1 + 48);
    v3 = *(_QWORD *)(v1 + 40);
    if ( v3 >= 8 )
      std::_Deallocate<16,0>(*(char **)(v1 + 16), 2 * v3 + 2);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_QWORD *)(v1 + 40) = 7LL;
    *(_WORD *)(v1 + 16) = 0;
    if ( *(_QWORD *)(a1 + 8) )
      std::_Deallocate<16,0>(*(char **)(a1 + 8), 0x38uLL);
  }
}

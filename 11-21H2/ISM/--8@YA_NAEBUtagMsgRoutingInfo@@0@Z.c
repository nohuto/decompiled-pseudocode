/*
 * XREFs of ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800E6D3C
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18003CFB0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x1800405A8 (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInpu.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800E71A0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x1800E7840 (-IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z.c)
 *     ??$_Find_last@UtagMsgRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBUtagMsgRoutingInfo@@_K@Z @ 0x180153FE0 (--$_Find_last@UtagMsgRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr@UIRemot.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180154680 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_comp.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18019BE90 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@.c)
 *     std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x1801A6E9C (std--find_if_std--_Tree_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_unsigned_int_c.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1801B1E9C (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall operator==(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v3; // rax

  v2 = 0;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2
    && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
    && *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8)
    && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
  {
    v3 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a2 + 24);
    if ( !v3 )
      v3 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(a2 + 32);
    if ( !v3 )
      return 1;
  }
  return v2;
}

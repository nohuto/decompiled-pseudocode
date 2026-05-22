/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@AEBUtagMsgRoutingInfo@@@Z @ 0x180154088
 * Callers:
 *     ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x1800407A8 (-OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 * Callees:
 *     ??$_Find_last@UtagMsgRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBUtagMsgRoutingInfo@@_K@Z @ 0x180153FE0 (--$_Find_last@UtagMsgRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr@UIRemot.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 v5; // r8
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Find_last<tagMsgRoutingInfo>(
         a1,
         v7,
         (__int64)a3,
         a3[1] | ((unsigned __int64)*a3 << 32))[1];
  if ( !v5 )
    v5 = a1[1];
  *a2 = v5;
  return a2;
}

/*
 * XREFs of ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x1801B7998
 * Callers:
 *     ?RegisterViewHitTestClient@DWMInputRouter@@UEAAJPEAUIRemoteViewHitTestClient@@@Z @ 0x1801B9BE0 (-RegisterViewHitTestClient@DWMInputRouter@@UEAAJPEAUIRemoteViewHitTestClient@@@Z.c)
 * Callees:
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18009815C (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V-.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800998D4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ??$_Find_last@UtagMsgRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBUtagMsgRoutingInfo@@_K@Z @ 0x1801736A0 (--$_Find_last@UtagMsgRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr@UIRemot.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBUtagMsgRoutingInfo@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUtagMsgRoutingInfo@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801B6F18 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBUtagMsgRoutingInfo@@@1@V-$tuple@$$V@1@@-$_List_n.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801B7E74 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBUtagMsgRoutingInfo@@V-$ComPtr.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801BA4C0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Try_emplace<tagMsgRoutingInfo const &,>(
        float *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 j; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // r14
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-18h]
  __int128 v22; // [rsp+40h] [rbp-10h] BYREF
  _OWORD *v23; // [rsp+70h] [rbp+20h] BYREF

  LODWORD(v23) = *(_DWORD *)a3;
  v6 = 0xCBF29CE484222325uLL;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)&v23 + i) ^ (unsigned __int64)v7);
  LODWORD(v23) = *(_DWORD *)(a3 + 4);
  for ( j = 0LL; j < 4; ++j )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v23 + j) ^ (unsigned __int64)v6);
  v10 = v7 ^ v6;
  std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Find_last<tagMsgRoutingInfo>(
    a1,
    &v22,
    a3,
    v10);
  if ( *((_QWORD *)&v22 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v22 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x3FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v23 = (_OWORD *)a3;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>,void *>>>(
      &v20,
      (__int64)(a1 + 2),
      v11,
      &v23);
    v12 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v12 < 0 )
      v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
          + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
    else
      v13 = (float)(int)v12;
    v14 = *((_QWORD *)a1 + 7);
    if ( v14 < 0 )
    {
      v16 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v14 >> 1);
      v15 = (float)(int)v16 + (float)(int)v16;
    }
    else
    {
      v15 = (float)(int)v14;
    }
    if ( (float)(v13 / v15) <= *a1 )
    {
      v18 = v21;
    }
    else
    {
      v17 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v12);
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Forced_rehash(
        a1,
        v17);
      v18 = v21;
      v22 = *(_OWORD *)std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Find_last<tagMsgRoutingInfo>(
                         a1,
                         &v22,
                         (__int64)(v21 + 2),
                         v10);
    }
    v21 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_Insert_new_node_before(
                      a1,
                      v10,
                      v22,
                      v18);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>,void *>>>(&v20);
  }
  return a2;
}

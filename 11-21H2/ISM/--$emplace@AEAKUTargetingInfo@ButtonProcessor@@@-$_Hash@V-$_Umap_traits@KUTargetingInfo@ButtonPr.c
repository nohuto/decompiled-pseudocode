/*
 * XREFs of ??$emplace@AEAKUTargetingInfo@ButtonProcessor@@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUTargetingInfo@ButtonProcessor@@@Z @ 0x1801B9A58
 * Callers:
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BA370 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18008CC38 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V-.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18008CC90 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800B2754 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DDF50 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKUTargetingInfo@ButtonProcess.c)
 *     ??$?0AEAKUTargetingInfo@ButtonProcessor@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@PEAX@std@@@1@AEAK$$QEAUTargetingInfo@ButtonProcessor@@@Z @ 0x1801B99C0 (--$-0AEAKUTargetingInfo@ButtonProcessor@@@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::emplace<unsigned long &,ButtonProcessor::TargetingInfo>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3,
        _QWORD *a4)
{
  __int64 appended; // rbp
  _DWORD *v9; // r8
  __int64 v10; // rcx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v14; // rax
  _QWORD *v15; // rsi
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  __int128 v19; // [rsp+30h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
    a1,
    &v19,
    a3,
    appended);
  if ( *((_QWORD *)&v19 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v19 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>,void *>>>(
      &v17,
      (__int64)(a1 + 2),
      v9,
      a4);
    v10 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v10 < 0 )
      v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
          + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = *((_QWORD *)a1 + 7);
    if ( v12 < 0 )
    {
      v14 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v12 >> 1);
      v13 = (float)(int)v14 + (float)(int)v14;
    }
    else
    {
      v13 = (float)(int)v12;
    }
    if ( (float)(v11 / v13) <= *a1 )
    {
      v15 = (_QWORD *)v18;
    }
    else
    {
      std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::_Rehash_for_1(a1);
      v15 = (_QWORD *)v18;
      v19 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                         a1,
                         &v19,
                         (_DWORD *)(v18 + 16),
                         appended);
    }
    v18 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v19,
                      v15);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>,void *>>>((__int64)&v17);
  }
  return a2;
}

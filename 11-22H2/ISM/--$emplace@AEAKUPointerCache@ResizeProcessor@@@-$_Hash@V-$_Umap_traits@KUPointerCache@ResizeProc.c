/*
 * XREFs of ??$emplace@AEAKUPointerCache@ResizeProcessor@@@?$_Hash@V?$_Umap_traits@KUPointerCache@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUPointerCache@ResizeProcessor@@@Z @ 0x180171328
 * Callers:
 *     ?OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180172D10 (-OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1800AA734 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V-.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800ABEB4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800E5E20 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800ED7D8 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V-$_Uhash_compar.c)
 *     ??$?0AEAKUPointerCache@ResizeProcessor@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@PEAX@std@@@1@AEAK$$QEAUPointerCache@ResizeProcessor@@@Z @ 0x180170B48 (--$-0AEAKUPointerCache@ResizeProcessor@@@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::PointerCache>>,0>>::emplace<unsigned long &,ResizeProcessor::PointerCache>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4)
{
  unsigned __int64 appended; // rbp
  _DWORD *v9; // r8
  __int64 v10; // rdx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  _QWORD *v16; // rsi
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v19; // [rsp+28h] [rbp-20h]
  __int128 v20; // [rsp+30h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
    a1,
    &v20,
    a3,
    appended);
  if ( *((_QWORD *)&v20 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v20 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x555555555555555LL )
      std::_Xlength_error("unordered_map/set too long");
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::PointerCache>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::PointerCache>,void *>>>(
      &v18,
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
      v16 = v19;
    }
    else
    {
      v15 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v10);
      std::_Hash<std::_Umap_traits<unsigned long,ShellGesturesRecognizer::ContactState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>,0>>::_Forced_rehash(
        a1,
        v15);
      v16 = v19;
      v20 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                         a1,
                         &v20,
                         v19 + 4,
                         appended);
    }
    v19 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v20,
                      v16);
    *(_BYTE *)(a2 + 8) = 1;
    if ( v19 )
      std::_Deallocate<16,0>(v19, 0x30uLL);
  }
  return a2;
}

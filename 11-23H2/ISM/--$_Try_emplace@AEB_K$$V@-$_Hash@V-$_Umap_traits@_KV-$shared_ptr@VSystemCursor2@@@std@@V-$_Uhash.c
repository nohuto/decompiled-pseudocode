/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180103A88
 * Callers:
 *     ?AddShape@SystemCursor2@@QEAAJV?$shared_ptr@VSystemCursorShape2@@@std@@@Z @ 0x1801047EC (-AddShape@SystemCursor2@@QEAAJV-$shared_ptr@VSystemCursorShape2@@@std@@@Z.c)
 *     ?CreateCursorForDevice@SystemCursorService2@@UEAAJ_K@Z @ 0x180104DD0 (-CreateCursorForDevice@SystemCursorService2@@UEAAJ_K@Z.c)
 *     ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x180104E90 (-CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1801052D4 (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 *     ?GetCursor@SystemCursorService2@@UEAA?AV?$shared_ptr@VSystemCursor2@@@std@@_K@Z @ 0x180105800 (-GetCursor@SystemCursorService2@@UEAA-AV-$shared_ptr@VSystemCursor2@@@std@@_K@Z.c)
 *     ?OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x180105AE0 (-OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z.c)
 *     ?OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x180105BC0 (-OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?OnCursorParametersChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorParametersData@@@Z @ 0x180105D40 (-OnCursorParametersChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorParametersData@@@Z.c)
 *     ?OnCursorSuppressionStateChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorSuppressionStateData@@@Z @ 0x180105E20 (-OnCursorSuppressionStateChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorSuppressionStateDa.c)
 *     ?OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x180105F00 (-OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?SetCursorClientOwner@SystemCursorService2@@UEAAJUCursorId@@@Z @ 0x1801062D0 (-SetCursorClientOwner@SystemCursorService2@@UEAAJUCursorId@@@Z.c)
 *     ?SetCursorShellMagnification@SystemCursorService2@@UEAAJ_KM@Z @ 0x1801064D0 (-SetCursorShellMagnification@SystemCursorService2@@UEAAJ_KM@Z.c)
 *     ?SetCursorShellVisibility@SystemCursorService2@@UEAAJ_K_N@Z @ 0x180106570 (-SetCursorShellVisibility@SystemCursorService2@@UEAAJ_K_N@Z.c)
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x180106924 (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18009815C (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V-.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800998D4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1800A08D8 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$al.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAXV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@2@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800D2910 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAXV-$vector@IV-$allocator@I@std@@@std@@V-$_Uhash_compa.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D79A4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$shared_ptr@VGestureHandl.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18010321C (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@1@V-$tuple@$$V@1@@-$_List_node_emplace_op2@V-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int64 appended; // r14
  __int64 v7; // r8
  __int64 v8; // rdx
  float v9; // xmm0_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-18h]
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 *v19; // [rsp+70h] [rbp+20h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 8uLL);
  std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Find_last<unsigned __int64>(
    a1,
    &v18,
    a3,
    appended);
  if ( *((_QWORD *)&v18 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v18 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v19 = a3;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>,void *>>>(
      &v16,
      (__int64)(a1 + 2),
      v7,
      (_QWORD **)&v19);
    v8 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v8 < 0 )
      v9 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
         + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
    else
      v9 = (float)(int)v8;
    v10 = *((_QWORD *)a1 + 7);
    if ( v10 < 0 )
    {
      v12 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v10 >> 1);
      v11 = (float)(int)v12 + (float)(int)v12;
    }
    else
    {
      v11 = (float)(int)v10;
    }
    if ( (float)(v9 / v11) <= *a1 )
    {
      v14 = v17;
    }
    else
    {
      v13 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v8);
      std::_Hash<std::_Umap_traits<void *,std::vector<unsigned int>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,std::vector<unsigned int>>>,0>>::_Forced_rehash(
        a1,
        v13);
      v14 = v17;
      v18 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Find_last<unsigned __int64>(
                         a1,
                         &v18,
                         v17 + 2,
                         appended);
    }
    v17 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v18,
                      v14);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>,void *>>>((__int64)&v16);
  }
  return a2;
}

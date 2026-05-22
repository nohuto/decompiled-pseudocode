/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18001D534
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001B8AC (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ?AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800A147C (-AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II.c)
 *     ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800A2480 (-IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x1800982E0 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800998D4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x180099978 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,std::unordered_set<unsigned __int64>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>,0>>::_Try_emplace<unsigned int const &,>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v6; // r12
  unsigned __int64 i; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rbp
  char *v12; // r14
  _QWORD *v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 *v15; // rdi
  unsigned __int64 *v16; // rax
  __int64 v17; // rdx
  float v18; // xmm0_4
  __int64 v19; // rcx
  float v20; // xmm1_4
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int128 v29; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+70h] [rbp+8h]

  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v6);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(__int64 **)(v8 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = a1 + 8;
  v11 = *(__int64 **)(a1 + 8);
  if ( v9 != v11 )
  {
    while ( *a3 != *((_DWORD *)v9 + 4) )
    {
      if ( v9 == *(__int64 **)(v8 + 16 * (v6 & *(_QWORD *)(a1 + 48))) )
      {
        v11 = v9;
        v9 = 0LL;
        goto LABEL_7;
      }
      v9 = (__int64 *)v9[1];
    }
    v11 = (__int64 *)*v9;
LABEL_7:
    if ( v9 )
    {
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
    v10 = a1 + 8;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x2E8BA2E8BA2E8BALL )
    std::_Xlength_error("unordered_map/set too long");
  *(_QWORD *)&v29 = v10;
  v12 = (char *)operator new(0x58uLL);
  *((_QWORD *)&v29 + 1) = v12;
  *((_DWORD *)v12 + 4) = *a3;
  *((_DWORD *)v12 + 6) = 0;
  *((_QWORD *)v12 + 4) = 0LL;
  *((_QWORD *)v12 + 5) = 0LL;
  v13 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(24LL);
  *v13 = v13;
  v13[1] = v13;
  *((_QWORD *)v12 + 4) = v13;
  *((_QWORD *)v12 + 6) = 0LL;
  *((_QWORD *)v12 + 7) = 0LL;
  *((_QWORD *)v12 + 8) = 0LL;
  *((_QWORD *)v12 + 9) = 7LL;
  *((_QWORD *)v12 + 10) = 8LL;
  *((_DWORD *)v12 + 6) = 1065353216;
  v14 = *((_QWORD *)v12 + 4);
  v30 = *((__int64 *)v12 + 7) >> 3;
  if ( v30 >= 0x10 )
  {
    v27 = (unsigned __int64)(*((_QWORD *)v12 + 7) + 7LL) >> 3;
    if ( v27 )
      memset64(0LL, v14, v27);
  }
  else
  {
    v15 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(128LL);
    if ( v30 )
      std::_Deallocate<16,0>(*((void **)v12 + 6), 8 * v30);
    *((_QWORD *)v12 + 6) = v15;
    v16 = v15 + 16;
    *((_QWORD *)v12 + 7) = v15 + 16;
    *((_QWORD *)v12 + 8) = v15 + 16;
    while ( v15 != v16 )
      *v15++ = v14;
  }
  v17 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v17 < 0 )
    v18 = (float)(v17 & 1 | (unsigned int)((unsigned __int64)v17 >> 1))
        + (float)(v17 & 1 | (unsigned int)((unsigned __int64)v17 >> 1));
  else
    v18 = (float)(int)v17;
  v19 = *(_QWORD *)(a1 + 56);
  if ( v19 < 0 )
  {
    v26 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v19 >> 1);
    v20 = (float)(int)v26 + (float)(int)v26;
  }
  else
  {
    v20 = (float)(int)v19;
  }
  if ( (float)(v18 / v20) > *(float *)a1 )
  {
    v28 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
      a1,
      v28);
    v29 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Find_last<unsigned int>(
                       a1,
                       &v29,
                       v12 + 16,
                       v6);
    v11 = (__int64 *)v29;
  }
  v21 = (_QWORD *)v11[1];
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v12 = v11;
  *((_QWORD *)v12 + 1) = v21;
  *v21 = v12;
  v11[1] = (__int64)v12;
  v22 = *(_QWORD *)(a1 + 24);
  v23 = 2 * (v6 & *(_QWORD *)(a1 + 48));
  v24 = *(__int64 **)(v22 + 16 * (v6 & *(_QWORD *)(a1 + 48)));
  if ( v24 == *(__int64 **)(a1 + 8) )
  {
    *(_QWORD *)(v22 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v12;
LABEL_28:
    *(_QWORD *)(v22 + 8 * v23 + 8) = v12;
    goto LABEL_25;
  }
  if ( v24 != v11 )
  {
    if ( *(_QWORD **)(v22 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8) != v21 )
      goto LABEL_25;
    goto LABEL_28;
  }
  *(_QWORD *)(v22 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v12;
LABEL_25:
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

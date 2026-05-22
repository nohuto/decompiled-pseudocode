/*
 * XREFs of ??$emplace@U?$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@1@@Z @ 0x18001B718
 * Callers:
 *     ?OnWindowAdded@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x18001B3A0 (-OnWindowAdded@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationM.c)
 * Callees:
 *     ??$_Find_last@I@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@IPEAX@std@@@1@AEBI_K@Z @ 0x18001B550 (--$_Find_last@I@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800998D4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x180099978 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::emplace<std::pair<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>(
        float *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbp
  unsigned __int64 i; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v23; // [rsp+30h] [rbp-28h] BYREF
  __int64 v24; // [rsp+38h] [rbp-20h]

  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*(unsigned __int8 *)(i + a3) ^ (unsigned __int64)v6);
  std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Find_last<unsigned int>(
    a1,
    &v22,
    (_DWORD *)a3,
    v6);
  if ( *((_QWORD *)&v22 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v22 + 1);
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v23 = a1 + 2;
  v24 &= *((_QWORD *)&v22 + 1);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>((unsigned int)(DWORD2(v22) + 32));
  v24 = v8;
  *(_DWORD *)(v8 + 16) = *(_DWORD *)a3;
  v9 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(v8 + 24) = v9;
  v10 = *((_QWORD *)a1 + 2) + 1LL;
  if ( v10 < 0 )
    v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
        + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
  else
    v11 = (float)(int)v10;
  v12 = *((_QWORD *)a1 + 7);
  if ( v12 < 0 )
  {
    v20 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v12 >> 1);
    v13 = (float)(int)v20 + (float)(int)v20;
  }
  else
  {
    v13 = (float)(int)v12;
  }
  if ( (float)(v11 / v13) > *a1 )
  {
    v21 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
      a1,
      v21);
    v22 = *(_OWORD *)std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Find_last<unsigned int>(
                       a1,
                       &v23,
                       (_DWORD *)(v8 + 16),
                       v6);
  }
  v14 = v22;
  v15 = *(__int64 **)(v22 + 8);
  ++*((_QWORD *)a1 + 2);
  *(_QWORD *)v8 = v14;
  *(_QWORD *)(v8 + 8) = v15;
  *v15 = v8;
  *(_QWORD *)(v14 + 8) = v8;
  v16 = *((_QWORD *)a1 + 3);
  v17 = 2 * (v6 & *((_QWORD *)a1 + 6));
  v18 = *(_QWORD *)(v16 + 16 * (v6 & *((_QWORD *)a1 + 6)));
  if ( v18 == *((_QWORD *)a1 + 1) )
  {
    *(_QWORD *)(v16 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v8;
  }
  else
  {
    if ( v18 == v14 )
    {
      *(_QWORD *)(v16 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v8;
      goto LABEL_14;
    }
    if ( *(__int64 **)(v16 + 16 * (v6 & *((_QWORD *)a1 + 6)) + 8) != v15 )
      goto LABEL_14;
  }
  *(_QWORD *)(v16 + 8 * v17 + 8) = v8;
LABEL_14:
  *(_QWORD *)a2 = v8;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

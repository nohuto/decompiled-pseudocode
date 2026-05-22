/*
 * XREFs of ??$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800407DC
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180040590 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18001AC34 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800ABEB4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800ABF58 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<unsigned long,IRawInputProvider *>::_Insert_or_assign<unsigned long const &,IRawInputProvider * &>(
        float *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rbp
  unsigned __int64 i; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int128 v24; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v25; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-30h]

  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
    a1,
    &v24,
    a3,
    v8);
  v10 = *((_QWORD *)&v24 + 1);
  if ( *((_QWORD *)&v24 + 1) )
  {
    *(_QWORD *)(*((_QWORD *)&v24 + 1) + 24LL) = *a4;
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v25 = a1 + 2;
  v26 &= *((_QWORD *)&v24 + 1);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>((unsigned int)(DWORD2(v24) + 32));
  v26 = (unsigned __int64)v11;
  v11[4] = *a3;
  *((_QWORD *)v11 + 3) = *a4;
  v12 = *((_QWORD *)a1 + 2) + 1LL;
  if ( v12 < 0 )
    v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
        + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
  else
    v13 = (float)(int)v12;
  v14 = *((_QWORD *)a1 + 7);
  if ( v14 < 0 )
  {
    v22 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v14 >> 1);
    v15 = (float)(int)v22 + (float)(int)v22;
  }
  else
  {
    v15 = (float)(int)v14;
  }
  if ( (float)(v13 / v15) > *a1 )
  {
    v23 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
      a1,
      v23);
    v24 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
                       a1,
                       &v25,
                       v11 + 4,
                       v8);
  }
  v16 = v24;
  v17 = *(_QWORD **)(v24 + 8);
  ++*((_QWORD *)a1 + 2);
  *(_QWORD *)v11 = v16;
  *((_QWORD *)v11 + 1) = v17;
  *v17 = v11;
  *(_QWORD *)(v16 + 8) = v11;
  v18 = *((_QWORD *)a1 + 3);
  v19 = 2 * (v8 & *((_QWORD *)a1 + 6));
  v20 = *(_QWORD *)(v18 + 16 * (v8 & *((_QWORD *)a1 + 6)));
  if ( v20 == *((_QWORD *)a1 + 1) )
  {
    *(_QWORD *)(v18 + 16 * (v8 & *((_QWORD *)a1 + 6))) = v11;
  }
  else
  {
    if ( v20 == v16 )
    {
      *(_QWORD *)(v18 + 16 * (v8 & *((_QWORD *)a1 + 6))) = v11;
      goto LABEL_14;
    }
    if ( *(_QWORD **)(v18 + 16 * (v8 & *((_QWORD *)a1 + 6)) + 8) != v17 )
      goto LABEL_14;
  }
  *(_QWORD *)(v18 + 8 * v19 + 8) = v11;
LABEL_14:
  *(_QWORD *)a2 = v11;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

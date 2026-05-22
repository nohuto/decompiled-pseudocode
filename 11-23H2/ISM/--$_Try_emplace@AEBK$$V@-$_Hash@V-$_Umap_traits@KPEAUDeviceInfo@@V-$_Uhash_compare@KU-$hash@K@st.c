/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKPEAUDeviceInfo@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18004CCD4
 * Callers:
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18004CF0C (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 * Callees:
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18001A404 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800998D4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x180099978 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Try_emplace<unsigned long const &,>(
        float *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v6; // rbp
  unsigned __int64 i; // rcx
  _DWORD *v8; // rbx
  __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v22; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-20h]

  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v6);
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
    a1,
    &v21,
    a3,
    v6);
  if ( *((_QWORD *)&v21 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v21 + 1);
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v22 = a1 + 2;
  v23 &= *((_QWORD *)&v21 + 1);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>((unsigned int)(DWORD2(v21) + 32));
  v23 = (unsigned __int64)v8;
  v8[4] = *a3;
  *((_QWORD *)v8 + 3) = 0LL;
  v9 = *((_QWORD *)a1 + 2) + 1LL;
  if ( v9 < 0 )
    v10 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
        + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
  else
    v10 = (float)(int)v9;
  v11 = *((_QWORD *)a1 + 7);
  if ( v11 < 0 )
  {
    v19 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v11 >> 1);
    v12 = (float)(int)v19 + (float)(int)v19;
  }
  else
  {
    v12 = (float)(int)v11;
  }
  if ( (float)(v10 / v12) > *a1 )
  {
    v20 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
      a1,
      v20);
    v21 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
                       a1,
                       &v22,
                       v8 + 4,
                       v6);
  }
  v13 = v21;
  v14 = *(_QWORD **)(v21 + 8);
  ++*((_QWORD *)a1 + 2);
  *(_QWORD *)v8 = v13;
  *((_QWORD *)v8 + 1) = v14;
  *v14 = v8;
  *(_QWORD *)(v13 + 8) = v8;
  v15 = *((_QWORD *)a1 + 3);
  v16 = 2 * (v6 & *((_QWORD *)a1 + 6));
  v17 = *(_QWORD *)(v15 + 16 * (v6 & *((_QWORD *)a1 + 6)));
  if ( v17 == *((_QWORD *)a1 + 1) )
  {
    *(_QWORD *)(v15 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v8;
  }
  else
  {
    if ( v17 == v13 )
    {
      *(_QWORD *)(v15 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v8;
      goto LABEL_14;
    }
    if ( *(_QWORD **)(v15 + 16 * (v6 & *((_QWORD *)a1 + 6)) + 8) != v14 )
      goto LABEL_14;
  }
  *(_QWORD *)(v15 + 8 * v16 + 8) = v8;
LABEL_14:
  *(_QWORD *)a2 = v8;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

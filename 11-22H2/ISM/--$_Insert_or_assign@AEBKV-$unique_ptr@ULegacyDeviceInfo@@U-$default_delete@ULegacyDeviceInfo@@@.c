/*
 * XREFs of ??$_Insert_or_assign@AEBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$unordered_map@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x1800403E0
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x180040160 (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@.c)
 * Callees:
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18001AC34 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800ABEB4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800ABF58 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ??$?4U?$default_delete@ULegacyDeviceInfo@@@std@@$0A@@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C4D2C (--$-4U-$default_delete@ULegacyDeviceInfo@@@std@@$0A@@-$unique_ptr@ULegacyDeviceInfo@@U-$default_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<unsigned long,std::unique_ptr<LegacyDeviceInfo>>::_Insert_or_assign<unsigned long const &,std::unique_ptr<LegacyDeviceInfo>>(
        float *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 v8; // rbp
  unsigned __int64 i; // rcx
  __int64 v10; // rbx
  _DWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int128 v25; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v26; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
    a1,
    &v25,
    a3,
    v8);
  v10 = *((_QWORD *)&v25 + 1);
  if ( *((_QWORD *)&v25 + 1) )
  {
    std::unique_ptr<LegacyDeviceInfo>::operator=<std::default_delete<LegacyDeviceInfo>,0>(
      *((_QWORD *)&v25 + 1) + 24LL,
      a4);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v26 = a1 + 2;
  v27 &= *((_QWORD *)&v25 + 1);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>((unsigned int)(DWORD2(v25) + 32));
  v27 = (unsigned __int64)v11;
  v11[4] = *a3;
  v12 = *a4;
  *a4 = 0LL;
  *((_QWORD *)v11 + 3) = v12;
  v13 = *((_QWORD *)a1 + 2) + 1LL;
  if ( v13 < 0 )
    v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
        + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
  else
    v14 = (float)(int)v13;
  v15 = *((_QWORD *)a1 + 7);
  if ( v15 < 0 )
  {
    v23 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v15 >> 1);
    v16 = (float)(int)v23 + (float)(int)v23;
  }
  else
  {
    v16 = (float)(int)v15;
  }
  if ( (float)(v14 / v16) > *a1 )
  {
    v24 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
      a1,
      v24);
    v25 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>(
                       a1,
                       &v26,
                       v11 + 4,
                       v8);
  }
  v17 = v25;
  v18 = *(_QWORD **)(v25 + 8);
  ++*((_QWORD *)a1 + 2);
  *(_QWORD *)v11 = v17;
  *((_QWORD *)v11 + 1) = v18;
  *v18 = v11;
  *(_QWORD *)(v17 + 8) = v11;
  v19 = *((_QWORD *)a1 + 3);
  v20 = 2 * (v8 & *((_QWORD *)a1 + 6));
  v21 = *(_QWORD *)(v19 + 16 * (v8 & *((_QWORD *)a1 + 6)));
  if ( v21 == *((_QWORD *)a1 + 1) )
  {
    *(_QWORD *)(v19 + 16 * (v8 & *((_QWORD *)a1 + 6))) = v11;
  }
  else
  {
    if ( v21 == v17 )
    {
      *(_QWORD *)(v19 + 16 * (v8 & *((_QWORD *)a1 + 6))) = v11;
      goto LABEL_14;
    }
    if ( *(_QWORD **)(v19 + 16 * (v8 & *((_QWORD *)a1 + 6)) + 8) != v18 )
      goto LABEL_14;
  }
  *(_QWORD *)(v19 + 8 * v20 + 8) = v11;
LABEL_14:
  *(_QWORD *)a2 = v11;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

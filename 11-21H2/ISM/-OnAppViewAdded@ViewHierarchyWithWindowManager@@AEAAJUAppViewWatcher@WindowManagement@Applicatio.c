/*
 * XREFs of ?OnAppViewAdded@ViewHierarchyWithWindowManager@@AEAAJUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@34567@@Z @ 0x180006F80
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x180001FC0 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800829B0 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ViewHierarchyWithWindowManager::OnAppViewAdded(float *a1, _QWORD *a2, _QWORD *a3)
{
  int v6; // eax
  __int64 v7; // rsi
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r13
  __int64 v11; // rdi
  unsigned __int64 i; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // r14
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  float v19; // xmm0_4
  __int64 v20; // rcx
  float v21; // xmm1_4
  __int64 v22; // rdx
  _QWORD *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v28; // rax
  __int64 v29; // [rsp+20h] [rbp-78h] BYREF
  __int64 v30; // [rsp+28h] [rbp-70h] BYREF
  __int64 v31; // [rsp+30h] [rbp-68h] BYREF
  __int128 v32; // [rsp+38h] [rbp-60h]
  _QWORD v33[10]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+20h] BYREF

  v29 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 48LL))(*a3, &v29);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  v7 = v29;
  v31 = v29;
  LODWORD(v34) = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 48LL))(v29, &v34);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  v9 = v34;
  LODWORD(v29) = v34;
  v10 = v7;
  v30 = v7;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v11 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v11 = 0x100000001B3LL * (*((unsigned __int8 *)&v29 + i) ^ (unsigned __int64)v11);
  v13 = 2 * (v11 & *((_QWORD *)a1 + 13));
  v14 = *((_QWORD *)a1 + 10);
  v15 = *(_QWORD *)(v14 + 16 * (v11 & *((_QWORD *)a1 + 13)) + 8);
  v34 = *((_QWORD *)a1 + 8);
  if ( v15 == v34 )
  {
LABEL_6:
    if ( *((_QWORD *)a1 + 9) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v32 = (unsigned __int64)(a1 + 16);
    v16 = operator new(0x20uLL);
    *((_QWORD *)&v32 + 1) = v16;
    v16[4] = v9;
    v10 = 0LL;
    v30 = 0LL;
    *((_QWORD *)v16 + 3) = v7;
    v17 = *((_QWORD *)a1 + 9);
    v18 = v17 + 1;
    if ( v17 + 1 < 0 )
      v19 = (float)(int)(v18 & 1 | (v18 >> 1)) + (float)(int)(v18 & 1 | (v18 >> 1));
    else
      v19 = (float)(int)v18;
    v20 = *((_QWORD *)a1 + 14);
    if ( v20 < 0 )
    {
      v28 = *((_QWORD *)a1 + 14) & 1LL | ((unsigned __int64)v20 >> 1);
      v21 = (float)(int)v28 + (float)(int)v28;
    }
    else
    {
      v21 = (float)(int)v20;
    }
    if ( (float)(v19 / v21) > a1[14] )
    {
      std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Rehash_for_1(a1 + 14);
      v32 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Find_last<unsigned int>(
                         (_QWORD *)a1 + 7,
                         v33,
                         v16 + 4,
                         v11);
      v17 = *((_QWORD *)a1 + 9);
      v22 = v32;
    }
    else
    {
      v22 = v34;
    }
    v23 = *(_QWORD **)(v22 + 8);
    *((_QWORD *)a1 + 9) = v17 + 1;
    *(_QWORD *)v16 = v22;
    *((_QWORD *)v16 + 1) = v23;
    *v23 = v16;
    *(_QWORD *)(v22 + 8) = v16;
    v24 = *((_QWORD *)a1 + 10);
    v25 = 2 * (v11 & *((_QWORD *)a1 + 13));
    v26 = *(_QWORD *)(v24 + 16 * (v11 & *((_QWORD *)a1 + 13)));
    if ( v26 == *((_QWORD *)a1 + 8) )
    {
      *(_QWORD *)(v24 + 16 * (v11 & *((_QWORD *)a1 + 13))) = v16;
LABEL_15:
      *(_QWORD *)(v24 + 8 * v25 + 8) = v16;
      goto LABEL_16;
    }
    if ( v26 == v22 )
    {
      *(_QWORD *)(v24 + 16 * (v11 & *((_QWORD *)a1 + 13))) = v16;
    }
    else if ( *(_QWORD **)(v24 + 16 * (v11 & *((_QWORD *)a1 + 13)) + 8) == v23 )
    {
      goto LABEL_15;
    }
  }
  else
  {
    while ( v9 != *(_DWORD *)(v15 + 16) )
    {
      if ( v15 == *(_QWORD *)(v14 + 8 * v13) )
      {
        v34 = v15;
        goto LABEL_6;
      }
      v15 = *(_QWORD *)(v15 + 8);
    }
  }
LABEL_16:
  if ( v10 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v30);
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v31);
  if ( *a2 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a2);
  if ( *a3 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a3);
  return 0LL;
}

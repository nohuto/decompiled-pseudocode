/*
 * XREFs of ?OnWindowAdded@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x1800071F0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x180080FF0 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800829B0 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ViewHierarchyWithWindowManager::OnWindowAdded(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rsi
  int v6; // eax
  __int64 v7; // r14
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 i; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r15
  unsigned __int64 j; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r13
  _DWORD *v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  float v25; // xmm0_4
  __int64 v26; // rcx
  float v27; // xmm1_4
  _QWORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-78h] BYREF
  __int64 v35; // [rsp+28h] [rbp-70h] BYREF
  __int64 v36; // [rsp+30h] [rbp-68h] BYREF
  __int128 v37; // [rsp+38h] [rbp-60h]
  _BYTE v38[80]; // [rsp+48h] [rbp-50h] BYREF
  int v40; // [rsp+B8h] [rbp+20h] BYREF

  v4 = a2;
  v34 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 48LL))(*a3, &v34);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  v7 = v34;
  v36 = v34;
  v40 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 80LL))(v34, &v40);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  v9 = v40;
  v10 = 0xCBF29CE484222325uLL;
  v11 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v11 = 0x100000001B3LL * (*((unsigned __int8 *)&v40 + i) ^ (unsigned __int64)v11);
  v13 = 2 * (v11 & *(_QWORD *)(a1 + 168));
  v14 = *(_QWORD *)(a1 + 144);
  v15 = *(_QWORD *)(v14 + 16 * (v11 & *(_QWORD *)(a1 + 168)) + 8);
  v16 = *(_QWORD *)(a1 + 128);
  if ( v15 == v16 )
    goto LABEL_6;
  while ( v40 != *(_DWORD *)(v15 + 16) )
  {
    if ( v15 == *(_QWORD *)(v14 + 8 * v13) )
      goto LABEL_6;
    v15 = *(_QWORD *)(v15 + 8);
  }
  if ( !v15 || v15 == v16 )
  {
LABEL_6:
    LODWORD(v34) = v40;
    v17 = v7;
    v35 = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    for ( j = 0LL; j < 4; ++j )
      v10 = 0x100000001B3LL * (*((unsigned __int8 *)&v34 + j) ^ (unsigned __int64)v10);
    v19 = *(_QWORD *)(a1 + 144);
    v20 = *(_QWORD *)(v19 + 16 * (*(_QWORD *)(a1 + 168) & v10) + 8);
    v21 = *(_QWORD *)(a1 + 128);
    if ( v20 != v21 )
    {
      while ( v9 != *(_DWORD *)(v20 + 16) )
      {
        if ( v20 == *(_QWORD *)(v19 + 16 * (*(_QWORD *)(a1 + 168) & v10)) )
        {
          v21 = v20;
          goto LABEL_9;
        }
        v20 = *(_QWORD *)(v20 + 8);
      }
      goto LABEL_20;
    }
LABEL_9:
    if ( *(_QWORD *)(a1 + 136) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v37 = (unsigned __int64)(a1 + 128);
    v22 = operator new(0x20uLL);
    *((_QWORD *)&v37 + 1) = v22;
    v22[4] = v9;
    v17 = 0LL;
    v35 = 0LL;
    *((_QWORD *)v22 + 3) = v7;
    v23 = *(_QWORD *)(a1 + 136);
    v24 = v23 + 1;
    if ( v23 + 1 < 0 )
      v25 = (float)(int)(v24 & 1 | (v24 >> 1)) + (float)(int)(v24 & 1 | (v24 >> 1));
    else
      v25 = (float)(int)v24;
    v26 = *(_QWORD *)(a1 + 176);
    if ( v26 < 0 )
    {
      v33 = *(_QWORD *)(a1 + 176) & 1LL | ((unsigned __int64)v26 >> 1);
      v27 = (float)(int)v33 + (float)(int)v33;
    }
    else
    {
      v27 = (float)(int)v26;
    }
    if ( (float)(v25 / v27) > *(float *)(a1 + 120) )
    {
      std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Rehash_for_1(a1 + 120);
      v37 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Find_last<unsigned int>(
                         a1 + 120,
                         v38,
                         v22 + 4,
                         v10);
      v23 = *(_QWORD *)(a1 + 136);
      v21 = v37;
    }
    v28 = *(_QWORD **)(v21 + 8);
    *(_QWORD *)(a1 + 136) = v23 + 1;
    *(_QWORD *)v22 = v21;
    *((_QWORD *)v22 + 1) = v28;
    *v28 = v22;
    *(_QWORD *)(v21 + 8) = v22;
    v29 = *(_QWORD *)(a1 + 144);
    v30 = 2 * (*(_QWORD *)(a1 + 168) & v10);
    v31 = *(_QWORD *)(v29 + 8 * v30);
    if ( v31 == *(_QWORD *)(a1 + 128) )
    {
      *(_QWORD *)(v29 + 8 * v30) = v22;
    }
    else
    {
      if ( v31 == v21 )
      {
        *(_QWORD *)(v29 + 8 * v30) = v22;
        goto LABEL_19;
      }
      if ( *(_QWORD **)(v29 + 8 * v30 + 8) != v28 )
        goto LABEL_19;
    }
    *(_QWORD *)(v29 + 8 * v30 + 8) = v22;
LABEL_19:
    v4 = a2;
LABEL_20:
    if ( v17 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v35);
  }
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v36);
  if ( *v4 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v4);
  if ( *a3 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a3);
  return 0LL;
}

/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18048F8F8
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@IEAAXXZ @ 0x18048FAC4 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIV.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x180019A40 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??R?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@QEBA_KAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x18010F168 (--R-$hash@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@QEBA_KAEBV-$ComPtr@UIVirtualDesktop@.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::_Forced_rehash(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 *v7; // rdi
  struct IUnknown *v8; // rcx
  unsigned __int64 result; // rax
  struct IUnknownVtbl *v10; // rbx
  struct IUnknownVtbl *v11; // rsi
  struct IUnknown **p_Release; // r12
  __int64 v13; // r14
  __int64 v14; // r15
  struct IUnknown *v15; // rdi
  struct IUnknown *lpVtbl; // rdx
  struct IUnknown **v17; // r8
  struct IUnknown *v18; // rdx
  struct IUnknownVtbl *v19; // r8
  ULONG (__stdcall *v20)(IUnknown *); // rdx
  ULONG (__stdcall *v21)(IUnknown *); // rdx
  struct IUnknownVtbl *v22; // r8
  ULONG (__stdcall *AddRef)(IUnknown *); // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  v6 = a1[1];
  v7 = (__int64 *)(a1 + 3);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
    (unsigned __int64 **)a1 + 3,
    2 * v5,
    v6);
  result = v5 - 1;
  a1[6] = v5 - 1;
  a1[7] = v5;
  v10 = *(struct IUnknownVtbl **)a1[1];
  v11 = v10;
  while ( v10 != (struct IUnknownVtbl *)v6 )
  {
    v11 = (struct IUnknownVtbl *)v11->QueryInterface;
    p_Release = (struct IUnknown **)&v10->Release;
    result = std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>::operator()(
               (unsigned __int64)v8,
               (__int64 *)&v10->Release);
    v13 = 2 * (result & a1[6]);
    v14 = *v7;
    if ( *(_QWORD *)(*v7 + 16 * (result & a1[6])) == v6 )
    {
      *(_QWORD *)(v14 + 16 * (result & a1[6])) = v10;
LABEL_20:
      *(_QWORD *)(v14 + 8 * v13 + 8) = v10;
      goto LABEL_21;
    }
    v15 = *(struct IUnknown **)(v14 + 16 * (result & a1[6]) + 8);
    v8 = *p_Release;
    lpVtbl = (struct IUnknown *)v15[2].lpVtbl;
    if ( !*p_Release && !lpVtbl || (result = SHIsSameObject(v8, lpVtbl), (_DWORD)result) )
    {
      v22 = v15->lpVtbl;
      if ( v15->lpVtbl != v10 )
      {
        AddRef = v10->AddRef;
        *(_QWORD *)AddRef = v11;
        v8 = (struct IUnknown *)v11->AddRef;
        v8->lpVtbl = v22;
        result = (unsigned __int64)v22->AddRef;
        *(_QWORD *)result = v10;
        v22->AddRef = (ULONG (__stdcall *)(IUnknown *))v8;
        v11->AddRef = AddRef;
        v10->AddRef = (ULONG (__stdcall *)(IUnknown *))result;
      }
      v7 = (__int64 *)(a1 + 3);
      goto LABEL_20;
    }
    while ( 1 )
    {
      v17 = (struct IUnknown **)&v15[1];
      if ( *(struct IUnknown **)(v14 + 8 * v13) == v15 )
        break;
      v15 = *v17;
      v18 = (struct IUnknown *)(*v17)[2].lpVtbl;
      if ( !*p_Release && !v18 || (unsigned int)SHIsSameObject(*p_Release, v18) )
      {
        v19 = v15->lpVtbl;
        v20 = v10->AddRef;
        *(_QWORD *)v20 = v11;
        v8 = (struct IUnknown *)v11->AddRef;
        v8->lpVtbl = v19;
        result = (unsigned __int64)v19->AddRef;
        *(_QWORD *)result = v10;
        v19->AddRef = (ULONG (__stdcall *)(IUnknown *))v8;
        v11->AddRef = v20;
        v10->AddRef = (ULONG (__stdcall *)(IUnknown *))result;
        goto LABEL_16;
      }
    }
    v21 = v10->AddRef;
    *(_QWORD *)v21 = v11;
    result = (unsigned __int64)v11->AddRef;
    *(_QWORD *)result = v15;
    v8 = *v17;
    v8->lpVtbl = v10;
    *v17 = (struct IUnknown *)result;
    v11->AddRef = v21;
    v10->AddRef = (ULONG (__stdcall *)(IUnknown *))v8;
    *(_QWORD *)(v14 + 8 * v13) = v10;
LABEL_16:
    v7 = (__int64 *)(a1 + 3);
LABEL_21:
    v10 = v11;
  }
  return result;
}

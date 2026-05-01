/*
 * XREFs of ?OnViewDestroyed@TabTipAdapterPolicy@KeyboardHosting@@QEAAXI@Z @ 0x1804828A8
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180463DA0 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x180480340 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::OnViewDestroyed(RTL_SRWLOCK *this, int a2)
{
  __int64 v3; // rcx
  const unsigned __int8 *Ptr; // rdi
  __int64 appended; // rax
  _QWORD *v6; // r11
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  const unsigned __int8 *v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v12; // [rsp+40h] [rbp+18h] BYREF

  v11 = a2;
  wil::AcquireSRWLockExclusive(&v12, this + 55);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    &this[47].Ptr,
    &v10,
    (const unsigned __int8 *)&v11);
  Ptr = (const unsigned __int8 *)this[48].Ptr;
  if ( v10 != Ptr )
  {
    appended = std::_Fnv1a_append_bytes(v3, v10 + 16, 4uLL);
    v7 = this[50].Ptr;
    v8 = 2 * ((__int64)this[53].Ptr & appended);
    if ( (_QWORD *)v7[2 * ((__int64)this[53].Ptr & appended) + 1] == v6 )
    {
      if ( (_QWORD *)v7[2 * ((__int64)this[53].Ptr & appended)] == v6 )
        v7[2 * ((__int64)this[53].Ptr & appended)] = Ptr;
      else
        Ptr = (const unsigned __int8 *)v6[1];
      v7[v8 + 1] = Ptr;
    }
    else if ( (_QWORD *)v7[2 * ((__int64)this[53].Ptr & appended)] == v6 )
    {
      v7[2 * ((__int64)this[53].Ptr & appended)] = *v6;
    }
    v9 = *v6;
    --this[49].Ptr;
    *(_QWORD *)v6[1] = v9;
    *(_QWORD *)(v9 + 8) = v6[1];
    std::_Deallocate<16,0>(v6, 0x58uLL);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
}

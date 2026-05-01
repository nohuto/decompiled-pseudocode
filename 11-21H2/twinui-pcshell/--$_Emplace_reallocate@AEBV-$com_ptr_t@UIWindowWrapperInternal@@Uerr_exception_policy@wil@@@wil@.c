/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18009B560
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800782C0 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18009A174 (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 *     ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x1803E28E0 (-EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18009B6E0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1803DDC58 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  _QWORD *v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rcx
  __int64 *v15; // r8
  __int64 *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // rax
  char *v19; // rbx
  __int64 *v20; // r15
  unsigned __int64 v21; // rdx
  unsigned __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  void *v24; // [rsp+78h] [rbp+10h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v25 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v8 = v10 + v9;
    if ( v10 + v9 < v7 + 1 )
      v8 = v7 + 1;
  }
  v24 = (void *)v8;
  size_of = std::_Get_size_of_n<8>(v8);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = &v12[v6];
  v14 = *a3;
  *v13 = *a3;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v23 = (unsigned __int64)&v12[v6];
  v15 = a1[1];
  v16 = *a1;
  if ( a2 == v15 )
  {
    v17 = v12;
    while ( v16 != v15 )
    {
      v18 = *v16;
      *v16 = 0LL;
      *v17++ = v18;
      ++v16;
    }
  }
  else
  {
    std::_Uninitialized_move<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>>(
      v16,
      a2,
      v12);
    v23 = (unsigned __int64)v12;
    std::_Uninitialized_move<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>>(
      a2,
      a1[1],
      v13 + 1);
  }
  v19 = (char *)*a1;
  if ( *a1 )
  {
    v20 = a1[1];
    if ( v19 != (char *)v20 )
    {
      do
      {
        if ( *(_QWORD *)v19 )
          (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)v19 + 16LL))(*(_QWORD *)v19, v17);
        v19 += 8;
      }
      while ( v19 != (char *)v20 );
      v19 = (char *)*a1;
    }
    v21 = ((char *)a1[2] - v19) & 0xFFFFFFFFFFFFFFF8uLL;
    v23 = v21;
    v24 = v19;
    if ( v21 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v24, &v23);
      v21 = v23;
      v19 = (char *)v24;
    }
    operator delete(v19, v21);
  }
  *a1 = v12;
  a1[1] = &v12[v25];
  a1[2] = &v12[v8];
  return v13;
}

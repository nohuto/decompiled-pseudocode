/*
 * XREFs of ?RemoveCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180122374
 * Callers:
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801224E0 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 * Callees:
 *     ?erase@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180122458 (-erase@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall WindowEventDispatcher::RemoveCachedView(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  *a2 = 0LL;
  v5 = (_QWORD *)(a1 + 368);
  v6 = (__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 368)) >> 3;
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*v5 + 8 * v6 - 8);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 288LL))(v7) == a3 )
        break;
      if ( !--v6 )
        return a2;
    }
    v8 = *(_QWORD *)(*v5 + 8 * v6 - 8);
    v9 = *a2;
    *a2 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(v5, &v11, *v5 - 8LL + 8 * v6);
  }
  return a2;
}

/*
 * XREFs of ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18009A174
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800782C0 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180094910 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x180122EA0 (-RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$WindowEventDispatcher_CachedView@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x18009A2D8 (--$WindowEventDispatcher_CachedView@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18009B560 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall WindowEventDispatcher::CacheWindowWrapper(__int64 a1, __int64 **a2, _QWORD *a3, const char *a4)
{
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 **v10; // rdx
  std::_Ref_count_base *v11; // rcx
  __int64 *v12; // rcx
  int v13; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v14[3]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !*a3 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0xA6B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      a4);
  v7 = *a2;
  v8 = **a2;
  v14[0] = 0LL;
  v9 = a3[1];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = a3[1];
  }
  *(_QWORD *)&v14[0] = *a3;
  *((_QWORD *)&v14[0] + 1) = v9;
  (*(void (__fastcall **)(__int64 *, _OWORD *, _QWORD))(v8 + 304))(v7, v14, (unsigned int)a4);
  v10 = *(__int64 ***)(a1 + 376);
  if ( v10 == *(__int64 ***)(a1 + 384) )
  {
    std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
      a1 + 368,
      v10,
      a2);
  }
  else
  {
    v12 = *a2;
    *v10 = *a2;
    if ( v12 )
      (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
    *(_QWORD *)(a1 + 376) += 8LL;
  }
  v13 = (*(__int64 (__fastcall **)(__int64 *))(**a2 + 288))(*a2);
  *(_QWORD *)&v14[0] = (*(__int64 (__fastcall **)(__int64 *))(**a2 + 272))(*a2);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_CachedView<unsigned short const *,unsigned int>(v14, &v13);
  if ( *a2 )
    (*(void (__fastcall **)(__int64 *))(**a2 + 16))(*a2);
  v11 = (std::_Ref_count_base *)a3[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}

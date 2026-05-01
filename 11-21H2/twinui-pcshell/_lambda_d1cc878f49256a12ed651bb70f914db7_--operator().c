/*
 * XREFs of _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1804247BC
 * Callers:
 *     wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::_ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x18042415C (wil--details--ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___--_ScopeExitFn__lambda_d1cc.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_ThreadData @ 0x180424334 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2_--ThreadData--_.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_scalar_deleting_destructor_ @ 0x1804249B4 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2_--_ea_1804249B4.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x180424B84 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18002071C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$remove@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@V10@AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180423D18 (--$remove@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHa.c)
 *     ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x180427794 (-erase@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V-$a.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  struct _Mtx_internal_imp_t *v5; // rbx
  int v6; // eax
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v16; // [rsp+20h] [rbp-59h] BYREF
  __int64 v17; // [rsp+28h] [rbp-51h]
  __int64 v18; // [rsp+30h] [rbp-49h]
  _QWORD v19[3]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v20[3]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v22[10]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v23; // [rsp+E0h] [rbp+67h] BYREF
  struct _Mtx_internal_imp_t *v24; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v25; // [rsp+F0h] [rbp+77h]

  v2 = Platform::Details::ResolveWeakReference(
         &_uuidof__AVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal__,
         a1 + 16);
  v23 = v2;
  v3 = __abi_winrt_ptr_ctor(v2);
  v4 = v3;
  v23 = v3;
  if ( v2 )
    LODWORD(v3) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v4 )
  {
    v5 = (struct _Mtx_internal_imp_t *)(*(_QWORD *)a1 + 120LL);
    v24 = v5;
    v6 = _Mtx_lock(v5);
    if ( v6 )
      std::_Throw_C_error(v6);
    v7 = *(_QWORD **)a1;
    v25 = v20;
    v8 = v7[28] + v7[29];
    v17 = 0LL;
    v18 = v8;
    v16 = v7[25];
    v9 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>(
           v20,
           (__int64)&v16);
    v10 = (_QWORD *)(*(_QWORD *)a1 + 200LL);
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 224LL);
    v12 = v11 + *(_QWORD *)(*(_QWORD *)a1 + 232LL);
    v19[1] = 0LL;
    v19[2] = v12;
    v19[0] = *v10;
    v17 = 0LL;
    v18 = v11;
    v16 = v19[0] & -(__int64)(v10 != 0LL);
    v13 = std::remove<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
            v22,
            (__int64)&v16,
            (__int64)v19,
            &v23);
    v14 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>(
            v21,
            (__int64)v13);
    std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::erase(
      v7 + 25,
      &v16,
      v14,
      v9);
    LODWORD(v3) = _Mtx_unlock(v5);
  }
  if ( v4 )
    LODWORD(v3) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v3;
}

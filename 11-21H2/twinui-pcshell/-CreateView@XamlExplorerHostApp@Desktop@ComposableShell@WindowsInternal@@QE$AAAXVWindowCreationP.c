/*
 * XREFs of ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x180424B84
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804204C4 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x18022D9AA (wil--details--ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___--ScopeExitFn__lambda_d1cc8.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_back_internal@AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@AEAAXAEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180423884 (--$_Emplace_back_internal@AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@Windows.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::_lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x180423E18 (_lambda_d1cc878f49256a12ed651bb70f914db7_--_lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     ??0?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@QE$AAA@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180423F64 (--0-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Det.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x1804240FC (_lambda_d1cc878f49256a12ed651bb70f914db7_--__lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1804247BC (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 */

// Hidden C++ exception states: #wind=16
void __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(
        __int64 a1,
        __int128 *a2,
        __int64 a3)
{
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // rsi
  Platform::Details *v8; // rdi
  Platform::Details *v9; // rax
  __int64 WeakReference; // rbx
  _DWORD *v11; // rbx
  const char *v12; // r9
  __int64 v13; // [rsp+20h] [rbp-79h] BYREF
  __int64 v14; // [rsp+28h] [rbp-71h] BYREF
  __int64 v15[3]; // [rsp+30h] [rbp-69h] BYREF
  char v16; // [rsp+48h] [rbp-51h]
  __int64 v17[5]; // [rsp+50h] [rbp-49h] BYREF
  __int128 v18; // [rsp+78h] [rbp-21h]
  int v19; // [rsp+88h] [rbp-11h]
  _QWORD v20[3]; // [rsp+90h] [rbp-9h] BYREF
  char v21; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v14 = __abi_winrt_ptr_ctor(a3);
  v13 = a1 + 120;
  v5 = _Mtx_lock((_Mtx_t)(a1 + 120));
  if ( v5 )
    std::_Throw_C_error(v5);
  std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::_Emplace_back_internal<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc * const &>(
    (_QWORD *)(a1 + 200),
    &v14);
  _Mtx_unlock((_Mtx_t)(a1 + 120));
  v6 = __abi_winrt_ptr_ctor(a1);
  v17[3] = v6;
  v7 = v14;
  if ( v14 )
  {
    v9 = (Platform::Details *)Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
    v8 = Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
           v9,
           v7);
    v13 = (__int64)v8;
  }
  else
  {
    v8 = 0LL;
    v13 = 0LL;
  }
  WeakReference = Platform::Details::GetWeakReference(v8);
  v13 = WeakReference;
  if ( v8 )
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v8 + 16LL))(v8);
  v17[0] = __abi_winrt_ptr_ctor(a1);
  v17[1] = __abi_winrt_ptr_ctor(v6);
  v17[2] = WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  lambda_d1cc878f49256a12ed651bb70f914db7_::_lambda_d1cc878f49256a12ed651bb70f914db7_(v15, v17);
  v16 = 1;
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v17);
  v18 = *a2;
  v19 = *((_DWORD *)a2 + 4);
  wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
    (__int64)v20,
    (__int64)v15);
  v11 = operator new(0x38uLL);
  *(_OWORD *)v11 = v18;
  v11[4] = v19;
  wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
    (__int64)(v11 + 6),
    (__int64)v20);
  v17[4] = (__int64)v11;
  if ( v21 )
  {
    v21 = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()((__int64)v20);
  }
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v20);
  if ( !SHCreateThread(
          (LPTHREAD_START_ROUTINE)lambda_4e404f76813f09b8a512b4cb4bf79bdd_::_lambda_invoker_cdecl_,
          v11,
          0,
          0LL) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x60,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
      v12);
  if ( v16 )
  {
    v16 = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()((__int64)v15);
  }
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v15);
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)&v13);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}

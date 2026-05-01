/*
 * XREFs of _lambda_136c33c4afb22965c6bbfc180a837019_::operator() @ 0x180447A70
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_136c33c4afb22965c6bbfc180a837019___::Run @ 0x180448280 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_136c33c4afb22965c6bbfc180a837019___--Run.c)
 * Callees:
 *     ?IsActive@?$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x180013368 (-IsActive@-$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActiva.c)
 *     ?NewForeground@?$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA_KXZ @ 0x1800133AC (-NewForeground@-$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIA.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_136c33c4afb22965c6bbfc180a837019_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax

  v2 = Platform::Details::ResolveWeakReference(&_uuidof__AUIXamlSwitcherWindowInteractionEvents__, a1);
  v3 = __abi_winrt_ptr_ctor(v2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v3 )
  {
    v4 = (__int64 *)(a1 + 8);
    v5 = winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs<winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs>::NewForeground((__int64 *)(a1 + 8));
    LOBYTE(v6) = winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs<winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs>::IsActive(v4);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, v6, v5);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}

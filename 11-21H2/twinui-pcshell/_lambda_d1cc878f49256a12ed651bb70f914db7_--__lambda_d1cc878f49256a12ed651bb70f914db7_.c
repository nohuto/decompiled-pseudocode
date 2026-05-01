/*
 * XREFs of _lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x1804240FC
 * Callers:
 *     wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::_ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x18042415C (wil--details--ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___--_ScopeExitFn__lambda_d1cc.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_ThreadData @ 0x180424334 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2_--ThreadData--_.c)
 *     _lambda_4e404f76813f09b8a512b4cb4bf79bdd_::operator() @ 0x1804244CC (_lambda_4e404f76813f09b8a512b4cb4bf79bdd_--operator().c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_scalar_deleting_destructor_ @ 0x1804249B4 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2_--_ea_1804249B4.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x180424B84 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(_QWORD *a1)
{
  __int64 v2; // rcx

  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 2));
  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
}

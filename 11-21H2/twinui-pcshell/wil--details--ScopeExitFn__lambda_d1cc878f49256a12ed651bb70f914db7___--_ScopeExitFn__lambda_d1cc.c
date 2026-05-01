/*
 * XREFs of wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::_ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x18042415C
 * Callers:
 *     __lambda_4e404f76813f09b8a512b4cb4bf79bdd_::operator()_::_1_::dtor$0 @ 0x180424719 (__lambda_4e404f76813f09b8a512b4cb4bf79bdd_--operator()_--_1_--dtor$0.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$6 @ 0x180424E67 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_1_--dtor$6.c)
 * Callees:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1804247BC (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::_ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()();
  }
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_((_QWORD *)a1);
}

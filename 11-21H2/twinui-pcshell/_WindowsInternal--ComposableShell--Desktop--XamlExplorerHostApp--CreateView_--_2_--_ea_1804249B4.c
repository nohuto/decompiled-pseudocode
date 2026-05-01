/*
 * XREFs of _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_scalar_deleting_destructor_ @ 0x1804249B4
 * Callers:
 *     std::unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___::_unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___ @ 0x1804242A4 (std--unique_ptr__WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2.c)
 *     _lambda_4e404f76813f09b8a512b4cb4bf79bdd_::operator() @ 0x1804244CC (_lambda_4e404f76813f09b8a512b4cb4bf79bdd_--operator().c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x1804240FC (_lambda_d1cc878f49256a12ed651bb70f914db7_--__lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1804247BC (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_scalar_deleting_destructor_(
        _BYTE *a1)
{
  if ( a1[48] )
  {
    a1[48] = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()((__int64)(a1 + 24));
  }
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_((_QWORD *)a1 + 3);
  operator delete(a1);
  return a1;
}

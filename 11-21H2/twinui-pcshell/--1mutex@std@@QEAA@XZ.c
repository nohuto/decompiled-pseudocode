/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x1801810CC
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp_::_1_::dtor$6 @ 0x180217072 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--XamlExplorerHostAp_ea_180217072.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}

/*
 * XREFs of _lambda_bfb9c683e4ebe68c910af62690c76974_::_lambda_invoker_cdecl_ @ 0x180225450
 * Callers:
 *     <none>
 * Callees:
 *     ?release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x1802E917A (-release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x18067D280 (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bfb9c683e4ebe68c910af62690c76974_::_lambda_invoker_cdecl_(SnapFlyoutHost *Parameter)
{
  SnapFlyoutHost *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  winrt::com_ptr<SnapFlyoutHost>::release_ref(&v3);
  winrt::com_ptr<SnapFlyoutHost>::release_ref(&v3);
  v3 = Parameter;
  LODWORD(Parameter) = SnapFlyoutHost::XamlExplorerHostThreadProc(Parameter);
  winrt::com_ptr<SnapFlyoutHost>::release_ref(&v3);
  return (unsigned int)Parameter;
}

/*
 * XREFs of _lambda_bf52ea5dd6a3ace185866e96e136c162_::_lambda_invoker_cdecl_ @ 0x1805AD470
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18033DCB8 (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x1805B11AC (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bf52ea5dd6a3ace185866e96e136c162_::_lambda_invoker_cdecl_(volatile __int64 *Parameter)
{
  unsigned int v2; // edi
  volatile __int64 *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = Parameter;
  v2 = SnapFlyoutHost::XamlExplorerHostThreadProc((SnapFlyoutHost *)Parameter);
  if ( Parameter )
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v4);
  return v2;
}

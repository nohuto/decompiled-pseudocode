/*
 * XREFs of _lambda_aea67d6666170ea444767c231e25fd74_::_lambda_invoker_cdecl_ @ 0x1801602A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180113634 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReturnAutomationProviderToUIA@UiaEndpointNotifierCallback@Composition@UI@Windows@@CAJPEAX@Z @ 0x180160488 (-ReturnAutomationProviderToUIA@UiaEndpointNotifierCallback@Composition@UI@Windows@@CAJPEAX@Z.c)
 */

__int64 __fastcall lambda_aea67d6666170ea444767c231e25fd74_::_lambda_invoker_cdecl_(void *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = Windows::UI::Composition::UiaEndpointNotifierCallback::ReturnAutomationProviderToUIA(a1);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      55LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuiaendpointnotifiercallback.cpp",
      (const char *)(unsigned int)v1);
  return 0LL;
}

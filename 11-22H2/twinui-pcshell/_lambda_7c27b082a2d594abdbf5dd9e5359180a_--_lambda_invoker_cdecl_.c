/*
 * XREFs of _lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl_ @ 0x1806562D0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x180182FBC (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     ?XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ @ 0x180656FC8 (-XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl_(volatile __int64 *Parameter)
{
  unsigned int v2; // edi
  volatile __int64 *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = Parameter;
  v2 = TouchEdgeGripperHost::XamlHostThreadProc((TouchEdgeGripperHost *)Parameter);
  if ( Parameter )
    winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(&v4);
  return v2;
}

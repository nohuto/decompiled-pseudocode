/*
 * XREFs of _CCompositor::CreateProxyFromSharedHandle_CVisualSurfaceProxy__::_1_::dtor$0 @ 0x180064D02
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompositor::CreateProxyFromSharedHandle_CVisualSurfaceProxy__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)(a2 + 80));
}

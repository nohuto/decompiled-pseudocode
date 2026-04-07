/*
 * XREFs of _CDisplayAnimatedVisual::CapturePrimary_::_1_::dtor$0 @ 0x1800B7D93
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayAnimatedVisual::CapturePrimary_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>((CDWMDisplay **)(a2 + 48));
}

/*
 * XREFs of _CAcrylicSheet::StopAnimations_::_1_::dtor$2 @ 0x18009B4A2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAcrylicSheet::StopAnimations_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)(a2 + 144));
}

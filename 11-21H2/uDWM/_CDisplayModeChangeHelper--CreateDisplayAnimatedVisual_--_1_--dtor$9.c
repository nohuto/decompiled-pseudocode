/*
 * XREFs of _CDisplayModeChangeHelper::CreateDisplayAnimatedVisual_::_1_::dtor$9 @ 0x180066130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDisplayModeChangeHelper::CreateDisplayAnimatedVisual_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)(a2 + 56));
}

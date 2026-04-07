/*
 * XREFs of _CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification_::_1_::dtor$0 @ 0x1800662E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>(a2 + 48);
}

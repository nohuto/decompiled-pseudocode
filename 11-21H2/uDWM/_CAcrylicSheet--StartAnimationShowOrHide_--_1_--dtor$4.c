/*
 * XREFs of _CAcrylicSheet::StartAnimationShowOrHide_::_1_::dtor$4 @ 0x18009B096
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAcrylicSheet::StartAnimationShowOrHide_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_exception_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_exception_policy>((__int64 *)(a2 + 80));
}

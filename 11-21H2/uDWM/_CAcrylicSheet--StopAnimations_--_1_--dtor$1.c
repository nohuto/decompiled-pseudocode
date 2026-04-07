/*
 * XREFs of _CAcrylicSheet::StopAnimations_::_1_::dtor$1 @ 0x18009B496
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAcrylicSheet::StopAnimations_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>((CAnimationEngine **)(a2 + 136));
}

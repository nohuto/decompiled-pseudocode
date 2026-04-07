/*
 * XREFs of _CAcrylicSheet::StartAnimationShowOrHide_::_1_::dtor$2 @ 0x18009B07E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAcrylicSheet::StartAnimationShowOrHide_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>((CAnimationEngine **)(a2 + 160));
}

/*
 * XREFs of _VirtualDesktopSwitchAnimator::AnimateOperation2_::_1_::dtor$10 @ 0x1806171E7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopSwitchAnimator::AnimateOperation2_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 128));
}

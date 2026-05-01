/*
 * XREFs of _VirtualDesktopSwitchAnimator::AnimateOperation_IVirtualDesktop___IVirtualDesktop____::_1_::dtor$1 @ 0x1806165E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopSwitchAnimator::AnimateOperation_IVirtualDesktop___IVirtualDesktop____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 56));
}

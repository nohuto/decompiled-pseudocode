/*
 * XREFs of _CVirtualDesktopComponent::SubscribeToServices_::_1_::dtor$17 @ 0x1802C3FF2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopComponent::SubscribeToServices_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 160));
}

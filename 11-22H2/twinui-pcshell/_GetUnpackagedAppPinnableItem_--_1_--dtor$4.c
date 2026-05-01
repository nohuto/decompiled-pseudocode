/*
 * XREFs of _GetUnpackagedAppPinnableItem_::_1_::dtor$4 @ 0x1806A2A2D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetUnpackagedAppPinnableItem_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 104));
}

/*
 * XREFs of _TaskViewFrame::DismissAnimated_::_1_::dtor$1 @ 0x1802B7D6B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TaskViewFrame::DismissAnimated_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 144));
}

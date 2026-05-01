/*
 * XREFs of _CShellSnapComponent::OnGetWindowArrangementRects_::_1_::dtor$1 @ 0x180662156
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CShellSnapComponent::OnGetWindowArrangementRects_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}

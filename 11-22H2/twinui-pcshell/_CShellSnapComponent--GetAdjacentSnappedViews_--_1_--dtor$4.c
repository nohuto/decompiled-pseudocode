/*
 * XREFs of _CShellSnapComponent::GetAdjacentSnappedViews_::_1_::dtor$4 @ 0x1806609FB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CShellSnapComponent::GetAdjacentSnappedViews_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 64));
}

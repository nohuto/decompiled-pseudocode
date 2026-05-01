/*
 * XREFs of _CShellSnapComponent::GetAdjacentSnappedViews_::_1_::dtor$0 @ 0x1806609CB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CShellSnapComponent::GetAdjacentSnappedViews_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 80));
}

/*
 * XREFs of _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryGetIconFactoryForWindow_::_1_::dtor$0 @ 0x180649CD3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryGetIconFactoryForWindow_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 64));
}

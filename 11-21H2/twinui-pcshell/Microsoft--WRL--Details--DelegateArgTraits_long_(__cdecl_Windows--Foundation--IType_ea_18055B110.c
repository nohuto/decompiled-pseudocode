/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs____Microsoft::WRL::FtmBase___lambda_e8fc07facb963e76bc03e71e52701980___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs___::_scalar_deleting_destructor_ @ 0x18055B110
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____::___Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs____Microsoft::WRL::FtmBase___lambda_e8fc07facb963e76bc03e71e52701980___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(a1 + 8);
  *((_DWORD *)a1 + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

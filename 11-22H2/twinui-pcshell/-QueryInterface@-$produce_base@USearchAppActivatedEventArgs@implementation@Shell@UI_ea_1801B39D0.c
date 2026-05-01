/*
 * XREFs of ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801B39D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,void>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::query_interface(
           (volatile signed __int64 *)((a1 - 24) & -(__int64)(a1 != 0)),
           a2,
           a3);
}

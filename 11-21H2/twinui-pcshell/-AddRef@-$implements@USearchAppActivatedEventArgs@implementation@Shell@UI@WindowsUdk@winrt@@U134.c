/*
 * XREFs of ?AddRef@?$implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppActivatedEventArgs2@3456@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@UIInitializeActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs2@9ApplicationModel@Windows@6@UIActivatedEventArgsWithUser@9ApplicationModel@Windows@6@UIPrelaunchActivatedEventArgs@9ApplicationModel@Windows@6@@winrt@@QEAAKXZ @ 0x1801A46D4
 * Callers:
 *     ?GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUDeferral@Foundation@Windows@6@XZ @ 0x1800F4A20 (-GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA-AUDeferr.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::AddRef(a1);
}

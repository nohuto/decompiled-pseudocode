/*
 * XREFs of ?Release@?$implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppActivatedEventArgs2@3456@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@UIInitializeActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs2@9ApplicationModel@Windows@6@UIActivatedEventArgsWithUser@9ApplicationModel@Windows@6@UIPrelaunchActivatedEventArgs@9ApplicationModel@Windows@6@@winrt@@QEAAKXZ @ 0x1801A46E0
 * Callers:
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800FA3F4 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ?Release@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@X@impl@winrt@@UEAAIXZ @ 0x18014D640 (-Release@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U.c)
 *     ?Release@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAIXZ @ 0x180169D90 (-Release@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_180169D90.c)
 *     ?Release@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAIXZ @ 0x180169DB0 (-Release@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_180169DB0.c)
 *     ?Release@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAIXZ @ 0x1801740C0 (-Release@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_1801740C0.c)
 *     ?Release@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAIXZ @ 0x1801740E0 (-Release@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_1801740E0.c)
 *     ?Release@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAIXZ @ 0x1803A01F0 (-Release@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_1803A01F0.c)
 *     ?Release@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAIXZ @ 0x1803A0210 (-Release@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Window_ea_1803A0210.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x18001F32C (-subtract_reference@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::Release(
        volatile __int64 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // r8

  v2 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::subtract_reference((__int64)a1);
  if ( !v2 )
  {
    v3 = _InterlockedExchange64(a1 + 1, 1LL);
    if ( a1 )
      (*(void (__fastcall **)(volatile __int64 *, __int64, __int64))(*a1 + 8))(a1, 1LL, v3);
  }
  return v2;
}

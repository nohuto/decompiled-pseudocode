/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x180392600
 * Callers:
 *     ?make_weak_ref@?$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180049B20 (-make_weak_ref@-$root_implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@I.c)
 *     ?make_weak_ref@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18006ACD4 (-make_weak_ref@-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Sh.c)
 *     ?make_weak_ref@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800A4BD8 (-make_weak_ref@-$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapIn.c)
 *     ?make_weak_ref@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800D9AB0 (-make_weak_ref@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal.c)
 *     ?make_weak_ref@?$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800DA618 (-make_weak_ref@-$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windo.c)
 *     ?make_weak_ref@?$root_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801113CC (-make_weak_ref@-$root_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U1.c)
 *     ?make_weak_ref@?$root_implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801FA33C (-make_weak_ref@-$root_implements@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@S.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18022905C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     winrt::impl::root_implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::make_weak_ref @ 0x18063CD7C (winrt--impl--root_implements_winrt--Windows--Internal--Shell--SnapComponent--implementation--Imm.c)
 *     ?make_weak_ref@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180686278 (-make_weak_ref@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@In.c)
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::make_weak_ref @ 0x1806A997C (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_1806A997C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return winrt::impl::weak_ref<1,1>::Release(v2);
}

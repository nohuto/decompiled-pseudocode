/*
 * XREFs of ?get@?$runtime_class_name@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1806861CC
 * Callers:
 *     ?GetRuntimeClassName@?$implements@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcherCallback@34567@@winrt@@EEBA?AUhstring@2@XZ @ 0x18022A4F0 (-GetRuntimeClassName@-$implements@V-$ImmersiveShellThreadDispatcherCallback@V-$_Binder@U_Unforce.c)
 *     winrt::implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::GetRuntimeClassName @ 0x180683F80 (winrt--implements_winrt--Windows--Internal--Shell--SnapComponent--implementation--ImmersiveShell.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::impl::runtime_class_name<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback,void>::get(
        struct winrt::impl::hstring_header **a1)
{
  *a1 = winrt::impl::create_hstring_on_heap(
          (winrt::impl *)L"Windows.Internal.Shell.SnapComponent.IImmersiveShellThreadDispatcherCallback",
          (winrt::impl *)0x4C);
  return a1;
}

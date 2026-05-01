/*
 * XREFs of ?AddRef@?$implements_delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_@@@impl@winrt@@UEAAIXZ @ 0x18017EE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>,_lambda_5ff337e75dbe6adfb18f1337a0e4a7fa_>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}

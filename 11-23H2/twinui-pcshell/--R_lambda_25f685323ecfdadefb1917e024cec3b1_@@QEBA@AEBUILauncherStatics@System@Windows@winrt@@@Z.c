/*
 * XREFs of ??R_lambda_25f685323ecfdadefb1917e024cec3b1_@@QEBA@AEBUILauncherStatics@System@Windows@winrt@@@Z @ 0x1803FA06C
 * Callers:
 *     ?LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@UUri@856@@Z @ 0x180714454 (-LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 * Callees:
 *     ?LaunchUriAsync@?$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUUri@Foundation@Windows@3@@Z @ 0x180401F3C (-LaunchUriAsync@-$consume_Windows_System_ILauncherStatics@UILauncherStatics@System@Windows@winrt.c)
 */

__int64 __fastcall _lambda_25f685323ecfdadefb1917e024cec3b1_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_System_ILauncherStatics<winrt::Windows::System::ILauncherStatics>::LaunchUriAsync(
    a3,
    a2,
    *a1);
  return a2;
}

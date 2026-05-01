/*
 * XREFs of ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x180711EC4
 * Callers:
 *     ?RecoverRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1801AD81C (-RecoverRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?SetPhysicalDeviceAccessState@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXXZ @ 0x18027957C (-SetPhysicalDeviceAccessState@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?RegisterRemoteDesktopProcess@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x180707280 (-RegisterRemoteDesktopProcess@-$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@.c)
 *     ?SwitchToCurrentDesktop@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1807078D8 (-SwitchToCurrentDesktop@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?UnregisterRemoteDesktopProcess@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHI@Z @ 0x180707970 (-UnregisterRemoteDesktopProcess@-$produce@UCloudPCComponent@implementation@Shell@Internal@Window.c)
 *     ?UpdateCloudPCInfo@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180707A58 (-UpdateCloudPCInfo@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindow.c)
 *     ?GetRemoteDesktopInformation@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_RemoteDesktopInformation@23@@Z @ 0x180721730 (-GetRemoteDesktopInformation@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal.c)
 *     ?PerformLocalAction@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHH@Z @ 0x180722AE0 (-PerformLocalAction@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 *     ?get_IsLocalSessionBluetoothCapable@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180724820 (-get_IsLocalSessionBluetoothCapable@-$produce@URemoteSessionWindowManager@implementation@Shell@I.c)
 *     ?LaunchAsync@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072DF10 (-LaunchAsync@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AU-$IAsyncO.c)
 *     ?LaunchAsync@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180730C20 (-LaunchAsync@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AU-$IAsyn.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x180733060 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ??$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B4084 (--$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@imp.c)
 */

winrt::Windows::Internal::Shell::implementation *__fastcall winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj(
        winrt::Windows::Internal::Shell::implementation *this)
{
  char *v2; // rbx
  char *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)this;
  v2 = 0LL;
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>(&v4);
  if ( v4 )
    v2 = v4 - 16;
  *(_QWORD *)this = v2;
  return this;
}

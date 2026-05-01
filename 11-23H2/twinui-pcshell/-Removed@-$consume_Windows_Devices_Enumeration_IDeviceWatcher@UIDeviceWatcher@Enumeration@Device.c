/*
 * XREFs of ?Removed@?$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x1806FBF68
 * Callers:
 *     ?unsubscribe_from_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1806FCD80 (-unsubscribe_from_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Removed(
        _QWORD *a1,
        _QWORD *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 88LL))(*a1, *a2);
}

/*
 * XREFs of ?Stop@?$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180408644
 * Callers:
 *     ?unsubscribe_from_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1806FCD80 (-unsubscribe_from_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Stop(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 144LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}

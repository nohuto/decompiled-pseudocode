/*
 * XREFs of ?Added@?$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UDeviceWatcher@Enumeration@Devices@Windows@winrt@@UDeviceInformation@2345@@Foundation@Windows@3@@Z @ 0x1803FA868
 * Callers:
 *     _lambda_3af96972622813cad57e0b9ae8d4dbe0_::operator() @ 0x18025C2B0 (_lambda_3af96972622813cad57e0b9ae8d4dbe0_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Added(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  signed int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a1 + 48LL))(*a1, *a3, a2);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  return a2;
}

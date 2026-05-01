/*
 * XREFs of ?OnDeviceRemoved@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUDeviceWatcher@Enumeration@Devices@56@AEBUDeviceInformationUpdate@8956@@Z @ 0x1806FBA40
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::OnDeviceRemoved(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        const struct winrt::Windows::Devices::Enumeration::DeviceWatcher *a2,
        const struct winrt::Windows::Devices::Enumeration::DeviceInformationUpdate *a3)
{
  signed int v4; // eax
  volatile signed __int32 *v5; // rdx
  signed int v6; // eax
  signed int v7; // eax
  volatile signed __int32 *v8; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 **))(**(_QWORD **)a3 + 48LL))(*(_QWORD *)a3, &v9);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  v5 = v9;
  v8 = v9;
  LOBYTE(v9) = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 *, unsigned int *, volatile signed __int32 **))(**((_QWORD **)this + 51) + 72LL))(
         *((_QWORD *)this + 51),
         v5,
         &v10,
         &v9);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  if ( (_BYTE)v9 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 51) + 96LL))(*((_QWORD *)this + 51), v10);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
  }
  --*((_DWORD *)this + 100);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
}

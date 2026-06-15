/*
 * XREFs of ?ProviderFinalRelease@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAXXZ @ 0x1800F2D90
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180014FC0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?wait@?$slim_event_t@$00@wil@@QEAA_NXZ @ 0x1800F4700 (-wait@-$slim_event_t@$00@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::ProviderFinalRelease(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 148) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 32LL))(
      *(_QWORD *)(a1 + 136),
      *(unsigned int *)(a1 + 144));
  v2 = *(_QWORD *)(a1 + 152);
  *(_BYTE *)(v2 + 8) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4), 0xFFFFFFFF) > 1 )
    wil::slim_event_t<1>::wait((volatile void *)v2);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 32LL))(*(_QWORD *)(a1 + 120));
  if ( *(_BYTE *)(a1 + 112) )
  {
    v3 = *(_QWORD *)(a1 + 104);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)(a1 + 104));
  return wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)(a1 + 128));
}

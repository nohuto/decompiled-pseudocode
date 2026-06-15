/*
 * XREFs of ?ProviderFinalRelease@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAXXZ @ 0x180063D70
 * Callers:
 *     <none>
 * Callees:
 *     ?close_and_wait@operation_guard@wil@@QEAAXXZ @ 0x180064DD0 (-close_and_wait@operation_guard@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::ProviderFinalRelease(
        __int64 a1)
{
  __int64 v2; // rcx

  if ( *(_BYTE *)(a1 + 148) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 32LL))(
      *(_QWORD *)(a1 + 136),
      *(unsigned int *)(a1 + 144));
  wil::operation_guard::close_and_wait(*(wil::operation_guard **)(a1 + 152));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 32LL))(*(_QWORD *)(a1 + 120));
  if ( *(_BYTE *)(a1 + 112) )
  {
    v2 = *(_QWORD *)(a1 + 104);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(a1 + 104);
  return wil::com_ptr_t<IControlChangeNotify,wil::err_exception_policy>::reset(a1 + 128);
}

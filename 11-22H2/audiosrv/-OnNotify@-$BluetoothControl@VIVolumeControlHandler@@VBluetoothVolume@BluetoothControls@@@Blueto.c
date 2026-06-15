/*
 * XREFs of ?OnNotify@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAJKPEBU_GUID@@@Z @ 0x1800826E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::OnNotify(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v6; // rcx

  (*(void (__fastcall **)(_QWORD *))(*a1 + 224LL))(a1);
  v6 = a1[16];
  if ( v6 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 24LL))(v6, a2, a3);
  return 0LL;
}

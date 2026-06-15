/*
 * XREFs of ?OnNotify@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@UEAAJKPEBU_GUID@@@Z @ 0x180063A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::OnNotify(
        _QWORD *a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v6; // rcx

  if ( !a3 || *a3 != *(_QWORD *)((char *)a1 + 84) || a3[1] != *(_QWORD *)((char *)a1 + 92) )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 96LL))(a1);
    v6 = a1[16];
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v6 + 24LL))(v6, a2, a3);
  }
  return 0LL;
}

/*
 * XREFs of ?RegisterForNotifications@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAJXZ @ 0x180063EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::RegisterForNotifications(
        __int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 192LL))(*(_QWORD *)(a1 + 120));
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 112) && (v5 = *(_QWORD *)(a1 + 104)) != 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 192LL))(v5);
    else
      return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v2,
      v6);
    return v3;
  }
}

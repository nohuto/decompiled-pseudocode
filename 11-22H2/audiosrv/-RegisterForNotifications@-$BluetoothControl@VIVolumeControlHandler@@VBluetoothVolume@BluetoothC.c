/*
 * XREFs of ?RegisterForNotifications@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAJXZ @ 0x1800F3050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::RegisterForNotifications(
        __int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 200LL))(*(_QWORD *)(a1 + 120));
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 112) && (v5 = *(_QWORD *)(a1 + 104)) != 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 200LL))(v5);
    else
      return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x140,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}

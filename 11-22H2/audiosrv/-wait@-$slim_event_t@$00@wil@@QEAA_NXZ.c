/*
 * XREFs of ?wait@?$slim_event_t@$00@wil@@QEAA_NXZ @ 0x1800F4750
 * Callers:
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x1800F1DF4 (--1operation_guard@wil@@QEAA@XZ.c)
 *     ?ProviderFinalRelease@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@UEAAXXZ @ 0x1800F2D20 (-ProviderFinalRelease@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     ?ProviderFinalRelease@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAXXZ @ 0x1800F2DE0 (-ProviderFinalRelease@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800CC8B4 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall wil::slim_event_t<1>::wait(_DWORD *Address)
{
  __int64 v2; // r8
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    if ( *Address )
      return 1;
    CompareAddress = 0;
  }
  while ( WaitOnAddress(Address, &CompareAddress, 4uLL, 0xFFFFFFFF) );
  if ( GetLastError() != 1460 )
    wil::details::in1diag3::FailFast_Unexpected(retaddr, 2865LL, v2, v3);
  return 0;
}

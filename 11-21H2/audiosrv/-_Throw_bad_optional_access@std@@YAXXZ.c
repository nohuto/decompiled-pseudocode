/*
 * XREFs of ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800C7DAC
 * Callers:
 *     ?IsApproximatelyAtScalarVolume@BluetoothVolume@BluetoothControls@@AEAA_NM@Z @ 0x1800C72DC (-IsApproximatelyAtScalarVolume@BluetoothVolume@BluetoothControls@@AEAA_NM@Z.c)
 *     ?SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800C7A40 (-SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18006A663 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_optional_access(void)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = &std::bad_optional_access::`vftable';
  v1 = 0LL;
  throw (std::bad_optional_access *)&pExceptionObject;
}

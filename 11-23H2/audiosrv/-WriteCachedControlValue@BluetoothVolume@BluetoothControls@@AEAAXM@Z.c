/*
 * XREFs of ?WriteCachedControlValue@BluetoothVolume@BluetoothControls@@AEAAXM@Z @ 0x180082780
 * Callers:
 *     ?GetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z @ 0x1800824B0 (-GetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z.c)
 *     ?SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800F3CB0 (-SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BluetoothControls::BluetoothVolume::WriteCachedControlValue(RTL_SRWLOCK *this, float a2)
{
  RTL_SRWLOCK *v2; // rdi
  void *v4; // [rsp+40h] [rbp+8h]

  v2 = this + 21;
  AcquireSRWLockExclusive(this + 21);
  *(float *)&v4 = a2;
  BYTE4(v4) = 1;
  this[22].Ptr = v4;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}

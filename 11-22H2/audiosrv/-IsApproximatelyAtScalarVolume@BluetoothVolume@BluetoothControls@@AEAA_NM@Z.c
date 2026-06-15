/*
 * XREFs of ?IsApproximatelyAtScalarVolume@BluetoothVolume@BluetoothControls@@AEAA_NM@Z @ 0x1800F27D8
 * Callers:
 *     ?SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800F3D00 (-SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     _o_roundf_0 @ 0x180067A00 (_o_roundf_0.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800F4680 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall BluetoothControls::BluetoothVolume::IsApproximatelyAtScalarVolume(RTL_SRWLOCK *this, float a2)
{
  RTL_SRWLOCK *v3; // rbx
  float v4; // xmm0_4
  char v5; // di

  v3 = this + 21;
  AcquireSRWLockShared(this + 21);
  if ( !BYTE4(this[22].Ptr) )
    goto LABEL_6;
  o_roundf_0();
  if ( !BYTE4(this[22].Ptr) )
    std::_Throw_bad_optional_access();
  v4 = *(float *)&this[22].Ptr * 100.0;
  o_roundf_0();
  if ( (float)(a2 * 100.0) == v4 )
    v5 = 1;
  else
LABEL_6:
    v5 = 0;
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v5;
}

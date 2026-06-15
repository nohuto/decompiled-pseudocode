/*
 * XREFs of ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180043890
 * Callers:
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x1800438FC (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800CDC20 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800CDF40 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800CE400 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x1800437FC (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x180043844 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 */

__int64 __fastcall CVolumeUnit::SetWiper(CVolumeUnit *this, float a2)
{
  double v3; // xmm0_8
  CVolumeUnit *v4; // rcx
  double v5; // xmm0_8
  __int64 result; // rax
  float v7; // xmm1_4

  if ( a2 < 0.0 || a2 > 1.0 )
    return 2147942487LL;
  v3 = CVolumeUnit::ScalarFromTaper(this, (*((double *)this + 4) - *((double *)this + 3)) * a2 + *((double *)this + 3));
  v5 = CVolumeUnit::ConvertScalarToDb(v4, v3);
  result = 0LL;
  v7 = v5;
  *((float *)this + 1) = fminf(v7, *((float *)this + 5));
  return result;
}

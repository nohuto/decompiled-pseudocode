/*
 * XREFs of floorf @ 0x1800679E0
 * Callers:
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180005870 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 *     ?VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x180129CA0 (-VolumeStepDown@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z.c)
 *     ?VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x180129DE0 (-VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}

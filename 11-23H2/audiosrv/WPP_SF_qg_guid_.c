/*
 * XREFs of WPP_SF_qg_guid_ @ 0x18012A074
 * Callers:
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180129050 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180129340 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qg_guid_(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids, a2, (__int64 *)va);
}

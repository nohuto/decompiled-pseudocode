/*
 * XREFs of PopEsUpdateSetting @ 0x140861CD0
 * Callers:
 *     PopEsWorker @ 0x140873690 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x1403B2BC8 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopEsUpdateSetting()
{
  __int64 v0; // rcx
  _DWORD v2[4]; // [rsp+40h] [rbp-28h] BYREF

  v2[0] = PopEsMode;
  v2[2] = (unsigned __int8)byte_140C3D8B5;
  v2[1] = dword_140C3D8B0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v2);
  return PopTraceEsSetting(v0, dword_140C3D8B0, byte_140C3D8B5);
}

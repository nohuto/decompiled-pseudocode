/*
 * XREFs of PopEsUpdateSetting @ 0x140861DA0
 * Callers:
 *     PopEsWorker @ 0x140873B60 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x1403B2538 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopEsUpdateSetting()
{
  __int64 v0; // rcx
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  Buffer[0] = PopEsMode;
  Buffer[2] = (unsigned __int8)byte_140C3D955;
  Buffer[1] = dword_140C3D950;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_SETTING, Buffer, 0xCu, 0LL, 0LL, 0, 0);
  return PopTraceEsSetting(v0, dword_140C3D950, byte_140C3D955);
}

/*
 * XREFs of PiPnpRtlGetDeviceStatus @ 0x1407C0A70
 * Callers:
 *     <none>
 * Callees:
 *     PlugPlayGetDeviceStatus @ 0x1407C0AA4 (PlugPlayGetDeviceStatus.c)
 */

__int64 __fastcall PiPnpRtlGetDeviceStatus(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  return PlugPlayGetDeviceStatus(a2, a3, a4, a5, a6);
}

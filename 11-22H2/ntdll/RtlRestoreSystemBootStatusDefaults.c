/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800F9880
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x18009F9C0 (NtPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  return NtPowerInformation();
}

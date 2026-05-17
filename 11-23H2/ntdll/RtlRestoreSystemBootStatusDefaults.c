/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800FAC90
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x1800A1A80 (NtPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  return NtPowerInformation();
}

/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800F9620
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x1800A4C40 (NtPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  return NtPowerInformation();
}

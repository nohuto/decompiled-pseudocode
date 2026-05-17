/*
 * XREFs of RtlpRecordBootStatusData @ 0x1800F99B8
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800F94F0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800F9888 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     NtPowerInformation @ 0x1800A4C40 (NtPowerInformation.c)
 */

__int64 RtlpRecordBootStatusData()
{
  return NtPowerInformation();
}

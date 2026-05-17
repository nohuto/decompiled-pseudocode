/*
 * XREFs of RtlpRecordBootStatusData @ 0x1800F9C28
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800F9750 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800F9AF8 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     NtPowerInformation @ 0x18009F9C0 (NtPowerInformation.c)
 */

__int64 RtlpRecordBootStatusData()
{
  return NtPowerInformation();
}

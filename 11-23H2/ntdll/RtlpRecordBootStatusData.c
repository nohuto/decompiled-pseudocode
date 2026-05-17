/*
 * XREFs of RtlpRecordBootStatusData @ 0x1800FB038
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800FAB60 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800FAF08 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     NtPowerInformation @ 0x1800A1A80 (NtPowerInformation.c)
 */

__int64 RtlpRecordBootStatusData()
{
  return NtPowerInformation();
}

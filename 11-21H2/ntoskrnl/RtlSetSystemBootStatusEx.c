/*
 * XREFs of RtlSetSystemBootStatusEx @ 0x1409BADD0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x1407EDB2C (RtlpSystemBootStatusRequest.c)
 */

NTSTATUS __fastcall RtlSetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return RtlpSystemBootStatusRequest(32, a1, a2, a3);
}

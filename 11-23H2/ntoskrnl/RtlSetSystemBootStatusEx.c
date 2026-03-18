/*
 * XREFs of RtlSetSystemBootStatusEx @ 0x1409BDCB0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x1407A658C (RtlpSystemBootStatusRequest.c)
 */

NTSTATUS __fastcall RtlSetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return RtlpSystemBootStatusRequest(32, a1, a2, a3);
}

/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x14085C270
 * Callers:
 *     PopCheckShutdownMarker @ 0x140B6E32C (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x1407A658C (RtlpSystemBootStatusRequest.c)
 */

NTSTATUS __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return RtlpSystemBootStatusRequest(31, a1, a2, a3);
}

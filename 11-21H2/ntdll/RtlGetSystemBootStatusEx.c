/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x1800F94B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return RtlpSystemBootStatusRequest(31, a1, a2, a3);
}

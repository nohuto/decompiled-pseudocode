/*
 * XREFs of RtlCallEnclave @ 0x1800A2FB0
 * Callers:
 *     LdrpIssueEnclaveCall @ 0x1800AD210 (LdrpIssueEnclaveCall.c)
 *     LdrInitializeEnclave @ 0x1800D8710 (LdrInitializeEnclave.c)
 * Callees:
 *     ZwCallEnclave @ 0x1800A0000 (ZwCallEnclave.c)
 */

__int64 RtlCallEnclave()
{
  return ZwCallEnclave();
}

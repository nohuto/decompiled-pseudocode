/*
 * XREFs of RtlCallEnclave @ 0x1800A5070
 * Callers:
 *     LdrpIssueEnclaveCall @ 0x1800AF2E0 (LdrpIssueEnclaveCall.c)
 *     LdrInitializeEnclave @ 0x1800D80C0 (LdrInitializeEnclave.c)
 * Callees:
 *     ZwCallEnclave @ 0x1800A20C0 (ZwCallEnclave.c)
 */

__int64 RtlCallEnclave()
{
  return ZwCallEnclave();
}

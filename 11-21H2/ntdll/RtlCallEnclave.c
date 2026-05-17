/*
 * XREFs of RtlCallEnclave @ 0x1800A8170
 * Callers:
 *     LdrInitializeEnclave @ 0x1800D8410 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D8EB0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x1800A5280 (ZwCallEnclave.c)
 */

__int64 RtlCallEnclave()
{
  return ZwCallEnclave();
}

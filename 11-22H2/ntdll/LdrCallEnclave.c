/*
 * XREFs of LdrCallEnclave @ 0x1800AD200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 LdrCallEnclave()
{
  return LdrpIssueEnclaveCall();
}

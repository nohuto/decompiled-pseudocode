/*
 * XREFs of RtlpNtMakeTemporaryKey @ 0x1801149E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlpNtMakeTemporaryKey()
{
  return NtDeleteKey();
}

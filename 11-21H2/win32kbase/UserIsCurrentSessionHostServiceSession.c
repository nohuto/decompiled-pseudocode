/*
 * XREFs of UserIsCurrentSessionHostServiceSession @ 0x1C00C5990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UserIsCurrentSessionHostServiceSession()
{
  __int64 result; // rax

  result = 0LL;
  if ( gSessionId == gServiceSessionId && !gServiceSessionId )
    return 1LL;
  return result;
}

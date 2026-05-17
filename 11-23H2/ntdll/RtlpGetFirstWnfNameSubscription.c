/*
 * XREFs of RtlpGetFirstWnfNameSubscription @ 0x1800EA028
 * Callers:
 *     RtlpWnfRetryTimerCallback @ 0x1800EA640 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     <none>
 */

__int64 RtlpGetFirstWnfNameSubscription()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  v0 = *(_QWORD *)(qword_180187E00 + 24);
  if ( (v0 & 1) != 0 )
  {
    if ( v0 == 1 )
      return 0LL;
    v1 = v0 ^ ((qword_180187E00 + 16) | 1);
  }
  else
  {
    v1 = *(_QWORD *)(qword_180187E00 + 24);
  }
  if ( !v1 )
    return 0LL;
  return v1 - 32;
}

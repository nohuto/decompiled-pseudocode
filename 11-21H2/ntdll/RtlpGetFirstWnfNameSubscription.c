/*
 * XREFs of RtlpGetFirstWnfNameSubscription @ 0x180092584
 * Callers:
 *     RtlpWnfRetryTimerCallback @ 0x1800922E0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     <none>
 */

__int64 RtlpGetFirstWnfNameSubscription()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  v0 = *(_QWORD *)(qword_18017AAE0 + 24);
  if ( (v0 & 1) != 0 )
  {
    if ( v0 == 1 )
      return 0LL;
    v1 = v0 ^ ((qword_18017AAE0 + 16) | 1);
  }
  else
  {
    v1 = *(_QWORD *)(qword_18017AAE0 + 24);
  }
  if ( v1 )
    return v1 - 32;
  return 0LL;
}

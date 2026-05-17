/*
 * XREFs of RtlpGetNextWnfNameSubscription @ 0x180092534
 * Callers:
 *     RtlpWnfRetryTimerCallback @ 0x1800922E0 (RtlpWnfRetryTimerCallback.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x180092468 (RtlpWnfCalculateAndSetNextTimer.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpGetNextWnfNameSubscription(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  __int64 i; // rcx
  _QWORD *v4; // rdx

  v1 = a1 + 32;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    v4 = *(_QWORD **)v2;
    if ( *(_QWORD *)v2 )
    {
      do
      {
        v2 = (unsigned __int64)v4;
        v4 = (_QWORD *)*v4;
      }
      while ( v4 );
    }
  }
  else
  {
    for ( i = *(_QWORD *)(v1 + 16); ; i = *(_QWORD *)(v2 + 16) )
    {
      v2 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v2 || *(_QWORD *)v2 == v1 )
        break;
      v1 = v2;
    }
  }
  if ( v2 )
    return v2 - 32;
  else
    return 0LL;
}

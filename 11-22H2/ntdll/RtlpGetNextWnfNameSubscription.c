/*
 * XREFs of RtlpGetNextWnfNameSubscription @ 0x1800E8D34
 * Callers:
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800E8D88 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800E9310 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpGetNextWnfNameSubscription(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rdx
  __int64 i; // rcx

  v1 = a1 + 32;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    v3 = *(_QWORD **)v2;
    if ( *(_QWORD *)v2 )
    {
      do
      {
        v2 = (unsigned __int64)v3;
        v3 = (_QWORD *)*v3;
      }
      while ( v3 );
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

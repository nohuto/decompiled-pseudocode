/*
 * XREFs of FsRtlTryToAcquireHeaderMutex @ 0x14053CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x14033DF70 (ExTryToAcquireFastMutex.c)
 */

BOOLEAN __fastcall FsRtlTryToAcquireHeaderMutex(__int64 a1, volatile signed __int32 *a2)
{
  BOOLEAN result; // al

  result = ExTryToAcquireFastMutex(*(PFAST_MUTEX *)(*(_QWORD *)(a1 + 24) + 48LL));
  if ( result )
  {
    if ( a2 )
      _InterlockedIncrement(a2);
  }
  return result;
}

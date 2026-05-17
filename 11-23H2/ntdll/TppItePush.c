/*
 * XREFs of TppItePush @ 0x180068160
 * Callers:
 *     TppCancelTimer @ 0x180032B28 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180068010 (TppBarrierAdjust.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall TppItePush(signed __int64 *a1, signed __int64 *a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // r8

  a2[1] = (signed __int64)NtCurrentTeb()->ClientId.UniqueThread;
  _m_prefetchw(a1);
  result = *a1;
  do
  {
    v3 = result;
    *a2 = result;
    result = _InterlockedCompareExchange64(a1, (signed __int64)a2, result);
  }
  while ( result != v3 );
  return result;
}

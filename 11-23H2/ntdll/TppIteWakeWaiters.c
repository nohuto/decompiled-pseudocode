/*
 * XREFs of TppIteWakeWaiters @ 0x180068190
 * Callers:
 *     TppSingleTimerExpiration @ 0x180030D8C (TppSingleTimerExpiration.c)
 *     TppWorkPost @ 0x1800351B8 (TppWorkPost.c)
 *     TppCallbackEpilog @ 0x18003620C (TppCallbackEpilog.c)
 *     TppBarrierAdjust @ 0x180068010 (TppBarrierAdjust.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A1CA0 (ZwAlertThreadByThreadId.c)
 */

NTSTATUS __fastcall TppIteWakeWaiters(__int64 **a1)
{
  __int64 *v1; // rbx
  NTSTATUS result; // eax

  if ( a1 )
  {
    do
    {
      v1 = *a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = (__int64 **)v1;
    }
    while ( v1 );
  }
  return result;
}

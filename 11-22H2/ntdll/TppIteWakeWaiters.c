/*
 * XREFs of TppIteWakeWaiters @ 0x1800681B0
 * Callers:
 *     TppSingleTimerExpiration @ 0x180030F5C (TppSingleTimerExpiration.c)
 *     TppWorkPost @ 0x180035318 (TppWorkPost.c)
 *     TppCallbackEpilog @ 0x18003636C (TppCallbackEpilog.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009FBE0 (ZwAlertThreadByThreadId.c)
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

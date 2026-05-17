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

__int64 __fastcall TppIteWakeWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}

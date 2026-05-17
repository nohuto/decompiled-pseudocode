/*
 * XREFs of TppIteWakeWaiters @ 0x18006BC6C
 * Callers:
 *     TppCallbackEpilog @ 0x180017620 (TppCallbackEpilog.c)
 *     TppSingleTimerExpiration @ 0x18001EEBC (TppSingleTimerExpiration.c)
 *     TppAlpcpExecuteCallback @ 0x180021EE0 (TppAlpcpExecuteCallback.c)
 *     TppBarrierAdjust @ 0x18006BAEC (TppBarrierAdjust.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A4E60 (ZwAlertThreadByThreadId.c)
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

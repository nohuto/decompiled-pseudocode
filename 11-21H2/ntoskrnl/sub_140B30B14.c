/*
 * XREFs of sub_140B30B14 @ 0x140B30B14
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     <none>
 */

__int64 sub_140B30B14()
{
  __int64 result; // rax

  stru_140C23960.Header.Size = 6;
  LOWORD(stru_140C23960.Header.Lock) = 0;
  stru_140C23960.Header.WaitListHead.Blink = &stru_140C23960.Header.WaitListHead;
  stru_140C23960.Header.WaitListHead.Flink = &stru_140C23960.Header.WaitListHead;
  qword_140C23988 = (__int64)&qword_140C23980;
  qword_140C23980 = (__int64)&qword_140C23980;
  stru_140C23920.Event.Header.WaitListHead.Blink = &stru_140C23920.Event.Header.WaitListHead;
  stru_140C23920.Event.Header.WaitListHead.Flink = &stru_140C23920.Event.Header.WaitListHead;
  result = 0LL;
  stru_140C23960.Header.SignalState = 0;
  qword_140C23990 = 0LL;
  stru_140C23920.Count = 1;
  stru_140C23920.Owner = 0LL;
  stru_140C23920.Contention = 0;
  LOWORD(stru_140C23920.Event.Header.Lock) = 1;
  stru_140C23920.Event.Header.Size = 6;
  stru_140C23920.Event.Header.SignalState = 0;
  byte_140C5AD33 = 1;
  return result;
}

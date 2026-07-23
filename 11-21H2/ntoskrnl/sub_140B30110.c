/*
 * XREFs of sub_140B30110 @ 0x140B30110
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *sub_140B30110()
{
  LIST_ENTRY *result; // rax

  stru_140C44960.Event.Header.Size = 6;
  stru_140C44960.Count = 1;
  stru_140C44960.Owner = 0LL;
  qword_140C449A8 = (__int64)&qword_140C449A0;
  qword_140C449A0 = (__int64)&qword_140C449A0;
  stru_140C44960.Event.Header.WaitListHead.Blink = &stru_140C44960.Event.Header.WaitListHead;
  stru_140C44960.Event.Header.WaitListHead.Flink = &stru_140C44960.Event.Header.WaitListHead;
  result = &stru_140C449C0.Header.WaitListHead;
  stru_140C449C0.Header.WaitListHead.Blink = &stru_140C449C0.Header.WaitListHead;
  stru_140C449C0.Header.WaitListHead.Flink = &stru_140C449C0.Header.WaitListHead;
  stru_140C44960.Contention = 0;
  LOWORD(stru_140C44960.Event.Header.Lock) = 1;
  stru_140C44960.Event.Header.SignalState = 0;
  dword_140C44998 = 0;
  stru_140C449C0.Header.Type = 5;
  stru_140C449C0.Header.Size = 8;
  stru_140C449C0.Header.SignalState = 1;
  stru_140C449C0.Limit = 1;
  return result;
}

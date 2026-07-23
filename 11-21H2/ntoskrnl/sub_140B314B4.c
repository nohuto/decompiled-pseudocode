/*
 * XREFs of sub_140B314B4 @ 0x140B314B4
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *sub_140B314B4()
{
  LIST_ENTRY *result; // rax

  LOWORD(stru_140C46940.Header.Lock) = 1;
  qword_140C46968 = (__int64)&qword_140C46960;
  qword_140C46960 = (__int64)&qword_140C46960;
  result = &stru_140C46940.Header.WaitListHead;
  stru_140C46940.Header.WaitListHead.Blink = &stru_140C46940.Header.WaitListHead;
  stru_140C46940.Header.WaitListHead.Flink = &stru_140C46940.Header.WaitListHead;
  stru_140C46940.Header.Size = 6;
  stru_140C46940.Header.SignalState = 1;
  return result;
}

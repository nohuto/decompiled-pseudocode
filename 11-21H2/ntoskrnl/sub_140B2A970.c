/*
 * XREFs of sub_140B2A970 @ 0x140B2A970
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *sub_140B2A970()
{
  __int64 v0; // rcx
  _QWORD *v1; // rax
  LIST_ENTRY *result; // rax

  v0 = 13LL;
  v1 = &unk_140D3D650;
  do
  {
    v1[1] = v1;
    *v1 = v1;
    v1 += 2;
    --v0;
  }
  while ( v0 );
  stru_140C46A00.Count = 1;
  qword_140D3CEC0 = (__int64)&qword_140D3CEB8;
  qword_140D3CEB8 = &qword_140D3CEB8;
  qword_140D3CE90 = (__int64)&qword_140D3CE88;
  qword_140D3CE88 = &qword_140D3CE88;
  stru_140C46A00.Event.Header.WaitListHead.Blink = &stru_140C46A00.Event.Header.WaitListHead;
  stru_140C46A00.Event.Header.WaitListHead.Flink = &stru_140C46A00.Event.Header.WaitListHead;
  stru_140C469C0.Event.Header.WaitListHead.Blink = &stru_140C469C0.Event.Header.WaitListHead;
  stru_140C469C0.Event.Header.WaitListHead.Flink = &stru_140C469C0.Event.Header.WaitListHead;
  stru_140C46980.Event.Header.WaitListHead.Blink = &stru_140C46980.Event.Header.WaitListHead;
  stru_140C46980.Event.Header.WaitListHead.Flink = &stru_140C46980.Event.Header.WaitListHead;
  result = &stru_140C46A40.Event.Header.WaitListHead;
  stru_140C46A40.Event.Header.WaitListHead.Blink = &stru_140C46A40.Event.Header.WaitListHead;
  stru_140C46A40.Event.Header.WaitListHead.Flink = &stru_140C46A40.Event.Header.WaitListHead;
  stru_140C46A00.Owner = 0LL;
  stru_140C46A00.Contention = 0;
  LOWORD(stru_140C46A00.Event.Header.Lock) = 1;
  stru_140C46A00.Event.Header.Size = 6;
  stru_140C46A00.Event.Header.SignalState = 0;
  stru_140C469C0.Count = 1;
  stru_140C469C0.Owner = 0LL;
  stru_140C469C0.Contention = 0;
  LOWORD(stru_140C469C0.Event.Header.Lock) = 1;
  stru_140C469C0.Event.Header.Size = 6;
  stru_140C469C0.Event.Header.SignalState = 0;
  stru_140C46980.Count = 1;
  stru_140C46980.Owner = 0LL;
  stru_140C46980.Contention = 0;
  LOWORD(stru_140C46980.Event.Header.Lock) = 1;
  stru_140C46980.Event.Header.Size = 6;
  stru_140C46980.Event.Header.SignalState = 0;
  stru_140C46A40.Count = 1;
  stru_140C46A40.Owner = 0LL;
  stru_140C46A40.Contention = 0;
  LOWORD(stru_140C46A40.Event.Header.Lock) = 1;
  stru_140C46A40.Event.Header.Size = 6;
  stru_140C46A40.Event.Header.SignalState = 0;
  return result;
}

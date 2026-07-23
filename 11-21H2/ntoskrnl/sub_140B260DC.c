/*
 * XREFs of sub_140B260DC @ 0x140B260DC
 * Callers:
 *     sub_140B25C04 @ 0x140B25C04 (sub_140B25C04.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140250C10 (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideList @ 0x1406DA090 (ExInitializePagedLookasideList.c)
 */

LIST_ENTRY *sub_140B260DC()
{
  LIST_ENTRY *result; // rax

  ExInitializeNPagedLookasideList(&stru_140CE2880, 0LL, 0LL, 0x200u, 0x38uLL, 0x68734C46u, 0x10u);
  ExInitializeNPagedLookasideList(&stru_140CE2800, 0LL, 0LL, 0x200u, 0x48uLL, 0x78654C46u, 0x10u);
  ExInitializeNPagedLookasideList(&stru_140CE2680, 0LL, 0LL, 0x200u, 0x20uLL, 0x6C774C46u, 0x10u);
  ExInitializeNPagedLookasideList(&stru_140CE2600, 0LL, 0LL, 0x200u, 0x38uLL, 0x6E6C4C46u, 0x10u);
  ExInitializeNPagedLookasideList(&stru_140CE2780, 0LL, 0LL, 0x200u, 0x40uLL, 0x696C4C46u, 8u);
  ExInitializePagedLookasideList(&stru_140CE2700, 0LL, 0LL, 0, 0x60uLL, 0x6C664C46u, 8u);
  result = &FastMutex.Event.Header.WaitListHead;
  FastMutex.Owner = 0LL;
  FastMutex.Contention = 0;
  FastMutex.Event.Header.SignalState = 0;
  FastMutex.Event.Header.WaitListHead.Blink = &FastMutex.Event.Header.WaitListHead;
  FastMutex.Event.Header.WaitListHead.Flink = &FastMutex.Event.Header.WaitListHead;
  qword_140C48B98 = 0LL;
  qword_140C48BA0 = 0LL;
  FastMutex.Count = 1;
  LOWORD(FastMutex.Event.Header.Lock) = 1;
  FastMutex.Event.Header.Size = 6;
  return result;
}

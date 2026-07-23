/*
 * XREFs of sub_140B231D8 @ 0x140B231D8
 * Callers:
 *     sub_140AFFEF4 @ 0x140AFFEF4 (sub_140AFFEF4.c)
 *     sub_140B22C40 @ 0x140B22C40 (sub_140B22C40.c)
 * Callees:
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_140B231D8(int a1)
{
  if ( a1 )
  {
    stru_140C16640.Parameter = 0LL;
    stru_140C16640.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1406DAF30;
    stru_140C16640.List.Flink = 0LL;
    if ( _InterlockedExchangeAdd(&dword_140C0BB00, 0xFFFFFFFF) != 1 )
      ExQueueWorkItem(&stru_140C16640, DelayedWorkQueue);
  }
  else
  {
    sub_140250C50((__int64)&unk_140CF5EC0, 0LL, 0LL, 512, 64, 1382640983, 0, 0);
    qword_140C16660 = 0LL;
    qword_140C16628 = 0LL;
  }
}

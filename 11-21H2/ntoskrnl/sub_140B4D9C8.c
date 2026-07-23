/*
 * XREFs of sub_140B4D9C8 @ 0x140B4D9C8
 * Callers:
 *     sub_140AF8974 @ 0x140AF8974 (sub_140AF8974.c)
 * Callees:
 *     sub_1403588EC @ 0x1403588EC (sub_1403588EC.c)
 */

char sub_140B4D9C8()
{
  char result; // al

  word_140C49DC2 = 0;
  result = sub_1403588EC((__int64)&unk_140C49DC0, (__int64)sub_14052D920, 0LL, 8);
  stru_140C49E60.Parameter = 0LL;
  stru_140C49E60.List.Flink = 0LL;
  stru_140C49E60.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14052D960;
  return result;
}

/*
 * XREFs of sub_1403DDE4C @ 0x1403DDE4C
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_1403588EC @ 0x1403588EC (sub_1403588EC.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403DDE4C()
{
  __int64 result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  memset(&unk_140C2ADE0, 0, 0xB8uLL);
  sub_1403588EC((__int64)&unk_140C2ADE0, (__int64)sub_140247C90, 0LL, 8);
  result = (unsigned int)dword_140D0507C;
  stru_140C2AE68.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140244620;
  stru_140C2AE68.Parameter = 0LL;
  stru_140C2AE68.List.Flink = 0LL;
  qword_140C2AE88 = 0LL;
  if ( (dword_140D0507C & 8) != 0 )
  {
    v1[1] = -1LL;
    v1[0] = 0LL;
    return KeSetTimer2((__int64)&unk_140C2ADE0, -10000000LL, 10000000LL, (__int64)v1);
  }
  return result;
}

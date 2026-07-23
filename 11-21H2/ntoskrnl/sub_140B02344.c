/*
 * XREFs of sub_140B02344 @ 0x140B02344
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_1403588EC @ 0x1403588EC (sub_1403588EC.c)
 *     sub_140811C98 @ 0x140811C98 (sub_140811C98.c)
 */

char __fastcall sub_140B02344(int a1)
{
  char *v1; // rbx
  LARGE_INTEGER v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)&unk_140C20050 + 104 * (unsigned int)dword_140C20048;
  if ( a1 )
    return sub_140811C98(*((_QWORD *)v1 + 1), *(_DWORD *)v1, *((_DWORD *)v1 + 8));
  qword_140C1FF68 = 0LL;
  qword_140C1FF60 = 0LL;
  qword_140C1FF88 = (__int64)qword_140C1FF80;
  qword_140C1FF80[0] = (__int64)qword_140C1FF80;
  *(_DWORD *)v1 = 0;
  v1[35] = 0;
  *((_DWORD *)v1 + 8) &= 0xFF000000;
  *((_QWORD *)v1 + 2) = KeQueryInterruptTimePrecise(&v3);
  stru_140C20028.Parameter = 0LL;
  stru_140C20028.List.Flink = 0LL;
  word_140C1FFA2 = 0;
  stru_140C20028.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140806B90;
  return sub_1403588EC((__int64)&unk_140C1FFA0, (__int64)sub_140399400, 0LL, 8);
}

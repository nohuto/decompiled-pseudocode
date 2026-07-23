/*
 * XREFs of sub_1405A70EC @ 0x1405A70EC
 * Callers:
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1405B81F0 @ 0x1405B81F0 (sub_1405B81F0.c)
 */

NTSTATUS __fastcall sub_1405A70EC(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  const LARGE_INTEGER *v3; // rdx

  v1 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( a1 == 1 )
  {
    v2 = *(unsigned __int16 *)(v1 + 1838);
    v3 = &stru_14003BE60;
    return sub_1405B81F0(*(_QWORD *)(qword_140C51F48 + 8 * v2), v3);
  }
  if ( a1 == 2 )
  {
    v2 = *(unsigned __int16 *)(v1 + 1838);
    v3 = &stru_14000EEA8;
    return sub_1405B81F0(*(_QWORD *)(qword_140C51F48 + 8 * v2), v3);
  }
  return KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Interval);
}

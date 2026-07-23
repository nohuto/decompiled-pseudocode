/*
 * XREFs of sub_1403DC298 @ 0x1403DC298
 * Callers:
 *     sub_140860F30 @ 0x140860F30 (sub_140860F30.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 (__fastcall *sub_1403DC298())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&stru_140C0FA60, 0, 0x70uLL);
  LODWORD(stru_140C0FA60) = 275;
  *(&stru_140C0FA60 + 4) = (ULONG_PTR)&stru_140C0FA60;
  *(&stru_140C0FA60 + 3) = (ULONG_PTR)sub_140645E40;
  stru_140C0FAA0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140645E70;
  result = sub_140860F60;
  qword_140C0FAC8 = (__int64)sub_140860F60;
  *(&stru_140C0FA60 + 7) = 0LL;
  *(&stru_140C0FA60 + 2) = 0LL;
  stru_140C0FAA0.Parameter = &stru_140C0FA60;
  stru_140C0FAA0.List.Flink = 0LL;
  dword_140C0FAC0 = 0;
  byte_140CE1AD2 = 1;
  return result;
}

/*
 * XREFs of sub_140B2C334 @ 0x140B2C334
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *sub_140B2C334()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  dword_140C22B2C = -1;
  qword_140C229C8 = (__int64)&qword_140C229C0;
  qword_140C229C0 = (__int64)&qword_140C229C0;
  qword_140C229D8 = (__int64)&qword_140C229D0;
  v0 = 4LL;
  qword_140C229D0 = (__int64)&qword_140C229D0;
  stru_140C21D60.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1407EDFC0;
  v1 = &unk_140C22AC8;
  *(_OWORD *)&xmmword_140C22B70 = 0LL;
  qword_140C229A8 = 0LL;
  xmmword_140C22B48 = 0LL;
  *(_QWORD *)&qword_140C229A0 = 0LL;
  xmmword_140C22B80 = 0LL;
  xmmword_140C22B70 = 0LL;
  *(_QWORD *)&xmmword_140C22B48 = 0LL;
  xmmword_140C22B90 = 0LL;
  LOBYTE(xmmword_140C22B80) = 1;
  byte_140C22B28 = 0;
  byte_140C22B3C = 0;
  dword_140C22B40 = 0;
  byte_140C22B44 = 0;
  dword_140C22B38 = 0;
  dword_140C22B58 = 0;
  qword_140C22B60 = 0LL;
  stru_140C21D60.Parameter = 0LL;
  stru_140C21D60.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140C22A28.Header.Lock = 8LL;
  stru_140C22AA8.Header.WaitListHead.Blink = &stru_140C22AA8.Header.WaitListHead;
  stru_140C22AA8.Header.WaitListHead.Flink = &stru_140C22AA8.Header.WaitListHead;
  qword_140C22A80 = (__int64)sub_1403B6C90;
  stru_140C22A28.Header.WaitListHead.Blink = &stru_140C22A28.Header.WaitListHead;
  stru_140C22A28.Header.WaitListHead.Flink = &stru_140C22A28.Header.WaitListHead;
  LOWORD(stru_140C22AA8.Header.Lock) = 1;
  stru_140C22AA8.Header.Size = 6;
  stru_140C22AA8.Header.SignalState = 0;
  qword_140C22B68 = 0LL;
  dword_140C22A68 = 275;
  qword_140C22A88 = 0LL;
  qword_140C22AA0 = 0LL;
  qword_140C22A78 = 0LL;
  stru_140C22A28.DueTime.QuadPart = 0LL;
  stru_140C22A28.Period = 0;
  LOWORD(stru_140C22A28.Processor) = 0;
  byte_140C229B8 = 0;
  dword_140C22A1C = 0;
  *(_QWORD *)&stru_140C21DE0.Header.Lock = 8LL;
  qword_140C095E8 = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140C21DB8 = (__int64)sub_1403B6E30;
  result = &stru_140C21DE0.Header.WaitListHead;
  stru_140C21DE0.Header.WaitListHead.Blink = &stru_140C21DE0.Header.WaitListHead;
  stru_140C21DE0.Header.WaitListHead.Flink = &stru_140C21DE0.Header.WaitListHead;
  dword_140C21DA0 = 275;
  qword_140C21DC0 = 0LL;
  qword_140C21DD8 = 0LL;
  qword_140C21DB0 = 0LL;
  stru_140C21DE0.DueTime.QuadPart = 0LL;
  stru_140C21DE0.Period = 0;
  LOWORD(stru_140C21DE0.Processor) = 0;
  byte_140C22AC0 = 1;
  byte_140C5AE18 = 1;
  return result;
}

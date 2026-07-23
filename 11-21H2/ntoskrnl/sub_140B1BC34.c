/*
 * XREFs of sub_140B1BC34 @ 0x140B1BC34
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     EtwSetInformation @ 0x1406DEBF0 (EtwSetInformation.c)
 *     sub_14081B500 @ 0x14081B500 (sub_14081B500.c)
 *     sub_1408454C0 @ 0x1408454C0 (sub_1408454C0.c)
 *     sub_140845558 @ 0x140845558 (sub_140845558.c)
 */

__int64 sub_140B1BC34()
{
  __int64 v0; // rax
  char v1; // cl
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( EtwRegister(&stru_1400128D8, (PETWENABLECALLBACK)sub_14081CBF0, &RegHandle, &RegHandle) >= 0 )
  {
    byte_140C5AE14 = 1;
    EtwSetInformation(RegHandle, (EVENT_INFO_CLASS)2, &word_1400128C0, 0x16u);
  }
  stru_140C22020.Parameter = 0LL;
  stru_140C22020.List.Flink = 0LL;
  stru_140C22020.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140990BB0;
  sub_1406D2264((char *)&dword_140C03A00, (__int64)sub_14081CBF0, (__int64)&dword_140C03A00);
  sub_1406D2264((char *)&dword_140C067B0, 0LL, 0LL);
  sub_1406D2264((char *)&dword_140C04570, 0LL, 0LL);
  if ( EtwRegister(&stru_140012870, 0LL, 0LL, &qword_140C21FB8) >= 0 )
    byte_140C5AE15 = 1;
  sub_140845558();
  if ( (int)sub_1406D2264((char *)&dword_140C045A8, 0LL, 0LL) >= 0 )
    byte_140C1C941 = 1;
  qword_140C21FC8 = 0LL;
  qword_140C21FC0 = 0LL;
  qword_140C21FD8 = MEMORY[0xFFFFF78000000014];
  qword_140C21FE0 = MEMORY[0xFFFFF78000000008];
  v0 = sub_1402F5718();
  byte_140C2200C = v1;
  qword_140C21FE8 = v0;
  sub_14081B500(1, 1);
  sub_1408454C0(v3, v2);
  return 0LL;
}

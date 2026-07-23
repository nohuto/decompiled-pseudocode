/*
 * XREFs of sub_140B247B0 @ 0x140B247B0
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1408534E0 @ 0x1408534E0 (sub_1408534E0.c)
 */

__int64 sub_140B247B0()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  int v2; // ecx
  unsigned int v3; // eax

  qword_140D06978 = (__int64)&qword_140D06970;
  v0 = 2LL;
  qword_140D06970 = (__int64)&qword_140D06970;
  dword_140C1D09C = 50;
  dword_140C1E14C = 50;
  v1 = &unk_140C1E150;
  do
  {
    *(v1 - 4272) = 1;
    *v1 = 1;
    *(v1 - 4256) = 70;
    v1[16] = 70;
    *(v1 - 4258) = 30;
    v1[14] = 30;
    *(v1 - 4270) = 100;
    v1[2] = 100;
    *(v1 - 4268) = 100;
    v1[4] = 100;
    ++v1;
    --v0;
  }
  while ( v0 );
  v2 = dword_140D05044;
  stru_140C23AF0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140224810;
  dword_140C1D0C0 = 2;
  stru_140C239C0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140224690;
  dword_140C1E170 = 2;
  v3 = dword_140D05044;
  dword_140C1D0BC = 100;
  dword_140C1E16C = 100;
  if ( dword_140D05044 == -1 )
    v3 = dword_140D05068;
  qword_140C23AE0 = 0LL;
  stru_140C23AF0.Parameter = 0LL;
  stru_140C23AF0.List.Flink = 0LL;
  stru_140C239C0.Parameter = 0LL;
  stru_140C239C0.List.Flink = 0LL;
  if ( v3 > 0x1F4 )
  {
    if ( dword_140D05044 == -1 )
      v2 = dword_140D05068;
  }
  else
  {
    v2 = 500;
  }
  qword_140D06D98 = (unsigned int)(10 * v2);
  return sub_1408534E0((__int64)&unk_140C23A00, (__int64)sub_1403A15B0, 0LL, (__int64)sub_14080BBA0, 0LL);
}

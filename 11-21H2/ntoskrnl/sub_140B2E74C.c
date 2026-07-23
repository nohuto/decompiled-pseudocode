/*
 * XREFs of sub_140B2E74C @ 0x140B2E74C
 * Callers:
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 * Callees:
 *     sub_1406A6378 @ 0x1406A6378 (sub_1406A6378.c)
 */

char sub_140B2E74C()
{
  __int64 v0; // rax

  v0 = sub_1406A6378(0LL, 0LL);
  qword_140D3B128 = v0;
  if ( v0 )
  {
    *(_BYTE *)(v0 + 44) |= 1u;
    qword_140D3B2F8 = (__int64)&qword_140D3B2F0;
    qword_140D3B2F0 = (__int64)&qword_140D3B2F0;
    stru_140C1BEC0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1406E9850;
    stru_140C1BE80.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1406CD9E0;
    stru_140C1BD30.Buffer = (PULONG)&unk_140D3CDEC;
    qword_140D3B148 = 0LL;
    qword_140D3B1F0 = 0LL;
    stru_140C1BEC0.Parameter = 0LL;
    stru_140C1BEC0.List.Flink = 0LL;
    stru_140C1BE80.Parameter = 0LL;
    stru_140C1BE80.List.Flink = 0LL;
    qword_140C1BD28 = 0LL;
    stru_140C1BD30.SizeOfBitMap = 32;
    stru_140C1BD40.SizeOfBitMap = 256;
    stru_140C1BD40.Buffer = (PULONG)&unk_140D3D478;
    if ( !dword_140D0513C )
      dword_140D0513C = 50;
    if ( !dword_140D05138 )
      dword_140D05138 = 200;
    LOBYTE(v0) = 1;
  }
  return v0;
}

/*
 * XREFs of sub_140601534 @ 0x140601534
 * Callers:
 *     sub_140A7F340 @ 0x140A7F340 (sub_140A7F340.c)
 *     sub_140A7F3D0 @ 0x140A7F3D0 (sub_140A7F3D0.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 */

void sub_140601534()
{
  unsigned __int64 v0; // rbx
  USHORT v1; // ax

  if ( qword_140D576C8 )
  {
    v0 = qword_140D576C8
       + ((unsigned __int64)(_InterlockedIncrement(&dword_140D57850) & (unsigned int)(dword_140D4E02C - 1)) << 6);
    *(_QWORD *)v0 = KeGetCurrentThread();
    v1 = RtlCaptureStackBackTrace(0, 7u, (PVOID *)(v0 + 8), 0LL);
    if ( v1 < 7u )
      *(_QWORD *)(v0 + 8LL * v1 + 8) = 0LL;
  }
}

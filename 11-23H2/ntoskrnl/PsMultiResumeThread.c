/*
 * XREFs of PsMultiResumeThread @ 0x140309D88
 * Callers:
 *     NtResumeThread @ 0x1407C0620 (NtResumeThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140937784 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x140938438 (DbgkpWakeTarget.c)
 *     DbgkUserReportWorkRoutine @ 0x140939C40 (DbgkUserReportWorkRoutine.c)
 *     NtChangeThreadState @ 0x1409AFEC0 (NtChangeThreadState.c)
 *     PspDeleteThreadStateChange @ 0x1409B1120 (PspDeleteThreadStateChange.c)
 *     PsResumeThread @ 0x1409B6080 (PsResumeThread.c)
 * Callees:
 *     KeResumeThread @ 0x14030A22C (KeResumeThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408A78C4 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsMultiResumeThread(__int64 a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v8; // ebx
  __int64 v9; // r8

  v6 = KeResumeThread(a1, a3);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  if ( v6 && v6 <= a3 )
  {
    v9 = *(_QWORD *)(a1 + 544);
    if ( (*(_DWORD *)(v9 + 2172) & 0x8000) == 0 )
      _InterlockedOr((volatile signed __int32 *)(v9 + 2172), 0x8000u);
    if ( (*(_DWORD *)(v9 + 2172) & 0x100000) != 0 )
      EtwTiLogSuspendResumeThread(0LL, CurrentThread, a1, 0LL);
  }
  if ( a2 )
    *a2 = v8;
  return 0LL;
}

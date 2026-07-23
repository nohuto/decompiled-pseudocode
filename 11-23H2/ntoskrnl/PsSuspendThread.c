/*
 * XREFs of PsSuspendThread @ 0x1407DB960
 * Callers:
 *     NtSuspendThread @ 0x1407DB890 (NtSuspendThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140937984 (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x14093990C (DbgkQueueUserExceptionReport.c)
 *     NtChangeThreadState @ 0x1409B00C0 (NtChangeThreadState.c)
 *     PsSuspendProcess @ 0x1409B62A0 (PsSuspendProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     KeSuspendThread @ 0x14030A0A8 (KeSuspendThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408A7B14 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsSuspendThread(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v5; // r15
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-38h]

  v9 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _EX_RUNDOWN_REF *)(a1 + 1352);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1352)) )
  {
    if ( (*(_DWORD *)(a1 + 1376) & 1) != 0 )
    {
      v7 = -1073741749;
    }
    else
    {
      v9 = KeSuspendThread(a1);
      v7 = 0;
    }
    ExReleaseRundownProtection_0(v5);
  }
  else
  {
    v7 = -1073741749;
  }
  if ( a2 )
  {
    *a2 = v9;
    if ( !v9 && (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 2172LL) & 0x100000) != 0 )
    {
      LOBYTE(v6) = 1;
      EtwTiLogSuspendResumeThread(v7, CurrentThread, a1, v6);
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v7;
}

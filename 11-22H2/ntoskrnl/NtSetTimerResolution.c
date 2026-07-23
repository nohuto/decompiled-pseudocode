/*
 * XREFs of NtSetTimerResolution @ 0x1407DD0A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExpUpdateTimerResolution @ 0x14036489C (ExpUpdateTimerResolution.c)
 *     ExpInsertTimerResolutionEntry @ 0x1403B4B14 (ExpInsertTimerResolutionEntry.c)
 *     ExAcquireTimeRefreshLock @ 0x14075FE64 (ExAcquireTimeRefreshLock.c)
 *     PoTraceSystemTimerResolution @ 0x1407DD2CC (PoTraceSystemTimerResolution.c)
 *     PoDiagCaptureUsermodeStack @ 0x140865548 (PoDiagCaptureUsermodeStack.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution, PULONG ActualTime)
{
  __int64 v6; // r8
  _KPROCESS *Process; // rbx
  NTSTATUS v8; // r13d
  ULONG updated; // r15d
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v11; // ett
  ULONG v12; // edx
  char v13; // cl
  void *v14; // r14
  void *v15; // rdi
  bool v17; // r14
  signed __int32 v18; // ett
  __int16 v19; // di
  unsigned __int64 LastRebalanceQpc; // rax
  bool v21; // zf
  char v24; // [rsp+88h] [rbp+20h]

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ActualTime < 0x7FFFFFFF0000LL )
      v6 = (__int64)ActualTime;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v24 = 0;
  v8 = 0;
  ExAcquireTimeRefreshLock(1u);
  updated = KeTimeIncrement;
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( SetResolution )
  {
    v17 = 1;
    do
    {
      v18 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high | 0x80001000,
                                  DirectoryTableBase_high);
    }
    while ( v18 != DirectoryTableBase_high );
    v19 = DirectoryTableBase_high;
    if ( DirectoryTableBase_high >= 0 )
      ExpInsertTimerResolutionEntry((__int64)Process);
    if ( (v19 & 0x1000) != 0 )
      v17 = DesiredTime <= LODWORD(Process[1].PerProcessorCycleTimes);
    else
      ++ExpTimerResolutionCount;
    if ( !Process[1].LastRebalanceQpc || DesiredTime < HIDWORD(Process[1].PerProcessorCycleTimes) )
      v24 = 1;
    LODWORD(Process[1].PerProcessorCycleTimes) = DesiredTime;
    PoTraceSystemTimerResolution(0LL, Process);
    if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x4000000) != 0 )
    {
      updated = KePseudoHrTimeIncrement;
      goto LABEL_10;
    }
    v12 = DesiredTime;
    v13 = v17;
  }
  else
  {
    do
    {
      v11 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high & 0xFFFFEFFF,
                                  DirectoryTableBase_high);
    }
    while ( v11 != DirectoryTableBase_high );
    if ( (DirectoryTableBase_high & 0x1000) == 0 )
    {
      v8 = -1073741243;
      goto LABEL_10;
    }
    --ExpTimerResolutionCount;
    LODWORD(Process[1].PerProcessorCycleTimes) = 0;
    PoTraceSystemTimerResolution(0LL, Process);
    v12 = 0;
    v13 = 0;
  }
  updated = ExpUpdateTimerResolution(v13, v12, 0LL);
LABEL_10:
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  v14 = 0LL;
  v15 = 0LL;
  if ( v24 )
  {
    v15 = (void *)PoDiagCaptureUsermodeStack();
    if ( v15 )
    {
      ExAcquireTimeRefreshLock(1u);
      LastRebalanceQpc = Process[1].LastRebalanceQpc;
      v21 = LastRebalanceQpc == 0;
      if ( LastRebalanceQpc )
      {
        if ( DesiredTime >= HIDWORD(Process[1].PerProcessorCycleTimes) )
        {
LABEL_33:
          ExReleaseResourceLite(&ExpTimeRefreshLock);
          KeLeaveCriticalRegion();
          goto LABEL_11;
        }
        v21 = LastRebalanceQpc == 0;
      }
      if ( !v21 )
        v14 = (void *)Process[1].LastRebalanceQpc;
      HIDWORD(Process[1].PerProcessorCycleTimes) = DesiredTime;
      Process[1].LastRebalanceQpc = (unsigned __int64)v15;
      v15 = 0LL;
      goto LABEL_33;
    }
  }
LABEL_11:
  if ( v14 )
    ExFreePoolWithTag(v14, 0x50455654u);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x50455654u);
  *ActualTime = updated;
  return v8;
}

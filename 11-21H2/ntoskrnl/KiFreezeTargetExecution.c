/*
 * XREFs of KiFreezeTargetExecution @ 0x14029AF90
 * Callers:
 *     KiCheckForFreezeExecution @ 0x14029B950 (KiCheckForFreezeExecution.c)
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 * Callees:
 *     KiSaveProcessorState @ 0x14029AEF0 (KiSaveProcessorState.c)
 *     KeRestoreSupervisorState @ 0x14029B210 (KeRestoreSupervisorState.c)
 *     KiEndDebugAccumulation @ 0x14029B270 (KiEndDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x14029B804 (KiRestoreProcessorState.c)
 *     KiStartDebugAccumulation @ 0x14029B8BC (KiStartDebugAccumulation.c)
 *     KeSaveSupervisorState @ 0x14029B8E8 (KeSaveSupervisorState.c)
 *     KiSetDebuggerOwner @ 0x1402DA760 (KiSetDebuggerOwner.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiRestoreProcessorControlState @ 0x14041F650 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x14041F720 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x1404299A0 (RtlCaptureContext.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KdpReportExceptionStateChange @ 0x140A73424 (KdpReportExceptionStateChange.c)
 *     VfStartBranchTracing @ 0x140A92FF0 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140A9307C (VfStopBranchTracing.c)
 */

__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int16 v4; // bp
  bool v5; // bp
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rax
  __int64 v10; // rdi
  volatile signed __int32 *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  LARGE_INTEGER v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-F8h] BYREF
  _QWORD v23[20]; // [rsp+30h] [rbp-E8h] BYREF
  int v24; // [rsp+110h] [rbp-8h]

  memset(v23, 0, 0x98uLL);
  if ( KiFreezeExecutionLock
    || KiFreezeLockBackup
    || (result = (unsigned int)KiBugCheckActive, (KiBugCheckActive & 3) != 0) )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v4 = v24;
    _disable();
    v5 = (v4 & 0x200) != 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KeSaveSupervisorState(CurrentPrcb->ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
    KiStartDebugAccumulation(CurrentPrcb);
    CurrentPrcb->IpiFrozen = 2;
    LOBYTE(v8) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_140C01D88[0])(v8, 0LL);
    if ( a1 )
    {
      KiSaveProcessorState(a1, a2);
    }
    else
    {
      RtlCaptureContext(CurrentPrcb->Context);
      KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
    }
    v9 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v9 )
      _InterlockedOr(v9, 0x20000u);
    KeQueryPerformanceCounter(0LL);
    while ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
      {
        memset(v23, 0, 0x98uLL);
        LODWORD(v23[0]) = -2147483641;
        v23[1] = v23;
        v23[2] = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KdpReportExceptionStateChange(v23, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      v10 = KiFreezeStallOwner;
      PerformanceFrequency.QuadPart = 0LL;
      if ( CurrentPrcb == (struct _KPRCB *)KiFreezeStallOwner )
      {
        v15 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( (unsigned __int64)(1000 * (v15.QuadPart - KiLastStallTick)) / PerformanceFrequency.QuadPart > 0x1F4 )
          KiLastStallTick = v15.QuadPart;
      }
      if ( v10
        && (struct _KPRCB *)v10 != CurrentPrcb
        && KiDebuggerOwner
        && (struct _KPRCB *)KiDebuggerOwner != CurrentPrcb )
      {
        _mm_pause();
      }
    }
    v11 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v11 )
      _InterlockedAnd(v11, 0xFFFDFFFF);
    ((void (__fastcall *)(_QWORD, _QWORD))off_140C01D88[0])(0LL, (unsigned __int8)KiResumeForReboot);
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
    v12 = __readcr4();
    if ( (v12 & 0x20080) != 0 )
    {
      __writecr4(v12 ^ 0x80);
      __writecr4(v12);
    }
    else
    {
      v16 = __readcr3();
      __writecr3(v16);
    }
    CurrentPrcb->IpiFrozen = 0;
    KiEndDebugAccumulation(CurrentPrcb);
    KeRestoreSupervisorState(CurrentPrcb->ExtendedSupervisorState, KeEnabledSupervisorXStateFeatures | 0x100);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v5 )
      _enable();
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}

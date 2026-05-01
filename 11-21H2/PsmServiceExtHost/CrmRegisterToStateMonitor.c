/*
 * XREFs of CrmRegisterToStateMonitor @ 0x18003C628
 * Callers:
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x18003C4F0 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 *     CrmStateMonitorGPUUsageStart @ 0x18003C5C0 (CrmStateMonitorGPUUsageStart.c)
 *     CrmStateMonitorAcDcBatteryStart @ 0x180042FF0 (CrmStateMonitorAcDcBatteryStart.c)
 *     CrmStateMonitorAcDcDisplayStart @ 0x18004305C (CrmStateMonitorAcDcDisplayStart.c)
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x1800472E0 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x18004C9AC (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x18004D2DC (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x18004D62C (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x18004D6A0 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x18004D714 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x18004D778 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x18004D830 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x18004D89C (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x18004D908 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x18006DEE0 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorDelayedInternetLossStart @ 0x18006E1E8 (CrmStateMonitorDelayedInternetLossStart.c)
 * Callees:
 *     CrmStateMonitorStart @ 0x18002F304 (CrmStateMonitorStart.c)
 *     CrmStateMonitorCleanup @ 0x180035E7C (CrmStateMonitorCleanup.c)
 *     CrmStateMonitorListenerRemove @ 0x180036060 (CrmStateMonitorListenerRemove.c)
 *     CrmStateMonitorListenerAdd @ 0x18003C74C (CrmStateMonitorListenerAdd.c)
 *     CrmStateMonitorInitialize @ 0x18003C84C (CrmStateMonitorInitialize.c)
 *     CrmStateMonitorSizeGet @ 0x18003CC10 (CrmStateMonitorSizeGet.c)
 */

__int64 __fastcall CrmRegisterToStateMonitor(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // r8
  int v7; // ebx
  unsigned int v9; // eax
  _QWORD *Heap; // rax
  _QWORD *v11; // rdi
  __int64 v12; // r8

  v3 = a2;
  RtlAcquireSRWLockShared(&CrmGlobals);
  v4 = *((_QWORD *)&CrmGlobals + v3 + 2);
  v5 = v3;
  if ( v4 )
  {
    v6 = 2LL;
  }
  else
  {
    RtlReleaseSRWLockShared(&CrmGlobals);
    v9 = CrmStateMonitorSizeGet((unsigned int)v3);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    v11 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    CrmStateMonitorInitialize(Heap, (unsigned int)v3);
    v7 = CrmStateMonitorStart(v11, a1, v12);
    if ( v7 < 0 )
    {
      CrmStateMonitorCleanup((__int64)v11);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      return (unsigned int)v7;
    }
    RtlAcquireSRWLockExclusive(&CrmGlobals);
    dword_1800DD028 = GetCurrentThreadId();
    if ( !*((_QWORD *)&CrmGlobals + v5 + 2) )
    {
      *((_QWORD *)&CrmGlobals + v5 + 2) = v11;
      dword_1800DD028 = 0;
      RtlReleaseSRWLockExclusive(&CrmGlobals);
      return (unsigned int)v7;
    }
    CrmStateMonitorListenerRemove((char *)v11, a1, 1);
    v4 = *((_QWORD *)&CrmGlobals + v5 + 2);
    v6 = 1LL;
  }
  CrmStateMonitorListenerAdd(v4, a1, v6);
  return 0;
}

/*
 * XREFs of CrmRegisterToStateMonitor @ 0x180009414
 * Callers:
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x180008880 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 *     CrmStateMonitorAcDcDisplayStart @ 0x180008950 (CrmStateMonitorAcDcDisplayStart.c)
 *     CrmStateMonitorAcDcBatteryStart @ 0x1800089C0 (CrmStateMonitorAcDcBatteryStart.c)
 *     CrmStateMonitorGPUUsageStart @ 0x18000A6D8 (CrmStateMonitorGPUUsageStart.c)
 *     CrmStateMonitorFanNoiseHysteresisStart @ 0x18000B29C (CrmStateMonitorFanNoiseHysteresisStart.c)
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x180043230 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180047C4C (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x1800481BC (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x1800484BC (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180048534 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x1800485D0 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x180048638 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x1800486F4 (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180048764 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x180048834 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x18006DF00 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorDelayedInternetLossStart @ 0x18006E250 (CrmStateMonitorDelayedInternetLossStart.c)
 * Callees:
 *     CrmStateMonitorCleanup @ 0x180008C9C (CrmStateMonitorCleanup.c)
 *     CrmStateMonitorStart @ 0x1800095D8 (CrmStateMonitorStart.c)
 *     CrmStateMonitorListenerRemove @ 0x18000A7B8 (CrmStateMonitorListenerRemove.c)
 *     CrmStateMonitorSizeGet @ 0x18000AC98 (CrmStateMonitorSizeGet.c)
 *     CrmStateMonitorInitialize @ 0x18000ADF4 (CrmStateMonitorInitialize.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     CrmStateMonitorListenerAdd @ 0x18006E3C0 (CrmStateMonitorListenerAdd.c)
 */

__int64 __fastcall CrmRegisterToStateMonitor(__int64 a1, int a2)
{
  __int64 v3; // rbp
  unsigned int *v4; // rbx
  unsigned int *v5; // rcx
  unsigned int **v6; // rdx
  int v7; // ebx
  unsigned int v9; // eax
  PVOID Heap; // rax
  void *v11; // rdi
  int v12; // [rsp+30h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-78h] BYREF
  UUID *v14; // [rsp+60h] [rbp-58h]
  int v15; // [rsp+68h] [rbp-50h]
  int v16; // [rsp+6Ch] [rbp-4Ch]
  int *v17; // [rsp+70h] [rbp-48h]
  int v18; // [rsp+78h] [rbp-40h]
  int v19; // [rsp+7Ch] [rbp-3Ch]

  v3 = a2;
  RtlAcquireSRWLockShared(&CrmGlobals);
  v4 = (unsigned int *)*((_QWORD *)&CrmGlobals + v3 + 2);
  if ( v4 )
  {
    RtlAcquireSRWLockExclusive(v4 + 2);
    v4[4] = GetCurrentThreadId();
    v5 = (unsigned int *)(a1 + 8);
    v6 = (unsigned int **)*((_QWORD *)v4 + 4);
    if ( *v6 != v4 + 6 )
      __fastfail(3u);
    *(_QWORD *)v5 = v4 + 6;
    *(_QWORD *)(a1 + 16) = v6;
    *v6 = v5;
    *((_QWORD *)v4 + 4) = v5;
    RtlReleaseSRWLockShared(&CrmGlobals);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))a1)(a1, *v4, *((_QWORD *)v4 + 5));
    v4[4] = 0;
    RtlReleaseSRWLockExclusive(v4 + 2);
    if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 8) != 0 && (qword_1800DB268 & 8) == qword_1800DB268 )
    {
      v16 = 0;
      v19 = 0;
      v14 = &Uuid;
      v12 = *v4;
      v18 = 4;
      v17 = &v12;
      v15 = 16;
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BF008, 0, 0, 4u, &v13);
    }
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
    v7 = CrmStateMonitorStart(v11);
    if ( v7 < 0 )
    {
      CrmStateMonitorCleanup((__int64)v11);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      return (unsigned int)v7;
    }
    RtlAcquireSRWLockExclusive(&CrmGlobals);
    dword_1800DC048 = GetCurrentThreadId();
    if ( !*((_QWORD *)&CrmGlobals + v3 + 2) )
    {
      *((_QWORD *)&CrmGlobals + v3 + 2) = v11;
      dword_1800DC048 = 0;
      RtlReleaseSRWLockExclusive(&CrmGlobals);
      return (unsigned int)v7;
    }
    CrmStateMonitorListenerRemove(v11);
    CrmStateMonitorListenerAdd(*((_QWORD *)&CrmGlobals + v3 + 2), a1, 1LL);
  }
  return 0;
}

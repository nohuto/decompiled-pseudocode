/*
 * XREFs of WheaInitialize @ 0x140B490E8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     WheapCallErrorSourceInitialize @ 0x140380E44 (WheapCallErrorSourceInitialize.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403B437C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     WheapInitializeWorkQueue @ 0x1403B50AC (WheapInitializeWorkQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     WheapLogInitEvent @ 0x14085699C (WheapLogInitEvent.c)
 *     WheapInitWnfCallbacks @ 0x140864724 (WheapInitWnfCallbacks.c)
 *     IoWMIRegistrationControl @ 0x14086C0F0 (IoWMIRegistrationControl.c)
 *     WheapInitializeErrorSourceTable @ 0x140B48FA0 (WheapInitializeErrorSourceTable.c)
 *     WheapQueryPshedForErrorSources @ 0x140B49520 (WheapQueryPshedForErrorSources.c)
 *     WheapInitializeEventing @ 0x140B66418 (WheapInitializeEventing.c)
 *     WheapLoadPolicy @ 0x140B6D580 (WheapLoadPolicy.c)
 *     WheapCreatePerProcessorInfo @ 0x140B73F00 (WheapCreatePerProcessorInfo.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // r12
  int v4; // eax
  int PerProcessorInfo; // eax
  int v6; // eax
  unsigned int v7; // esi
  int *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v18; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // rbx
  int SessionId; // eax
  int v23; // eax
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rbx
  __int64 v27; // rbx
  int v28; // r15d
  bool v29; // zf
  int v30; // eax
  int v31; // eax
  char v32; // al
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-30h]
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-30h]
  _QWORD v47[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v48; // [rsp+40h] [rbp-10h]
  unsigned int v49; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v50; // [rsp+A0h] [rbp+50h]
  PVOID Address; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a2;
  Address = 0LL;
  v47[0] = 0LL;
  v49 = 0;
  if ( a2 )
  {
    qword_140C2CB38 = (__int64)&WheapPrevErrList;
    WheapPrevErrList = (__int64)&WheapPrevErrList;
    v12 = PshedInitialize(a1, v47);
    if ( v12 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v12, 0LL, 0LL);
    WheapInitializeWorkQueue();
    WheapInitWnfCallbacks();
    v13 = WheapQueryPshedForErrorSources(&v49, &Address);
    if ( v13 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v13, v2, 0LL);
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    v50 = 0;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v14, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward(&v18, AbEntrySummary);
      v50 = v18;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v18);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v33 = *SchedulerAssist;
        do
        {
          v34 = v33;
          v33 = _InterlockedCompareExchange(SchedulerAssist, v33 & 0xFFDFFFFF, v33);
        }
        while ( v34 != v33 );
        if ( (v33 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v16 = (__int64)(&CurrentThread[1].Process + 12 * v50);
      if ( (unsigned __int64)&WheapConfigTableLock - qword_140C659E8 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      *(_DWORD *)(v16 + 8) = SessionId;
      *(_QWORD *)v16 = (unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&WheapConfigTableLock, v16, (__int64)&WheapConfigTableLock);
    if ( v16 )
      *(_BYTE *)(v16 + 18) = 1;
    v23 = WheapInitializeErrorSourceTable(v49, (unsigned int *)Address);
    if ( v23 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v23, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0;
          i < (unsigned int)KeNumberProcessors_0;
          *(_QWORD *)(*(_QWORD *)(Prcb + 34464) + 8LL) = &WheapErrorSourceTable )
    {
      Prcb = KeGetPrcb(i++);
      **(_DWORD **)(Prcb + 34464) = v49;
      *(_QWORD *)(*(_QWORD *)(Prcb + 34464) + 16LL) = &WheapWorkQueue;
    }
    for ( j = qword_140CF7A68; (__int64 *)j != &qword_140CF7A68; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 104) == 7 )
      {
        *(_DWORD *)(j + 108) = 2;
        v31 = WheapCallErrorSourceInitialize(j, v2);
        if ( v31 < 0 )
        {
          BugCheckParameter4 = *(int *)(j + 104);
          *(_DWORD *)(j + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v31, v2, BugCheckParameter4);
        }
      }
    }
    v48 = 0LL;
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      *(_QWORD *)&v48 = __PAIR64__(_RBX, _RAX);
      *((_QWORD *)&v48 + 1) = __PAIR64__(_RDX, _RCX);
      if ( (unsigned int)_RAX >= 0x80000008 )
      {
        _RAX = 2147483656LL;
        __asm { cpuid }
        *(_QWORD *)&v48 = __PAIR64__(_RBX, _RAX);
        *((_QWORD *)&v48 + 1) = __PAIR64__(_RDX, _RCX);
        if ( (_RBX & 1) != 0 )
          WheapClearPoisonSupported = 1;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      WheapCheckForAndReportErrorsFromPreviousSession();
    v27 = qword_140CF7A68;
    v28 = 1;
    while ( (__int64 *)v27 != &qword_140CF7A68 )
    {
      v29 = *(_DWORD *)(v27 + 104) == 7;
      *(_DWORD *)(v27 + 124) = v28;
      if ( !v29 && !*(_BYTE *)(v27 + 88) && *(_DWORD *)(v27 + 108) == 1 )
      {
        *(_DWORD *)(v27 + 108) = 2;
        v30 = WheapCallErrorSourceInitialize(v27, v2);
        if ( v30 < 0 )
        {
          BugCheckParameter4a = *(int *)(v27 + 104);
          *(_DWORD *)(v27 + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v30, v2, BugCheckParameter4a);
        }
      }
      v27 = *(_QWORD *)v27;
      ++v28;
    }
    WheapLogInitEvent();
    *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
    IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
    WheapInitializationComplete = 1;
    v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)&WheapConfigTableLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v32 & 2) != 0 && (v32 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapConfigTableLock);
    KeAbPostRelease((ULONG_PTR)&WheapConfigTableLock);
  }
  else
  {
    WheapStatus = 0LL;
    dword_140C2CBD8 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v4 = PshedInitialize(a1, v47);
    if ( v4 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v4, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v6 = WheapQueryPshedForErrorSources(&v49, &Address);
    if ( v6 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v6, 0LL, 0LL);
    WheapErrorSourceTable = 1279410516LL;
    stru_140CF7A78.Header.WaitListHead.Blink = &stru_140CF7A78.Header.WaitListHead;
    qword_140CF7A70 = (__int64)&qword_140CF7A68;
    qword_140CF7A68 = (__int64)&qword_140CF7A68;
    stru_140CF7A78.Header.WaitListHead.Flink = &stru_140CF7A78.Header.WaitListHead;
    dword_140CF7A60 = 1;
    LOWORD(stru_140CF7A78.Header.Lock) = 1;
    stru_140CF7A78.Header.Size = 6;
    stru_140CF7A78.Header.SignalState = 1;
    WheapInitializeEventing();
    v7 = 0;
    v8 = (int *)Address;
    if ( v49 )
    {
      do
      {
        v9 = qword_140D16D08[8 * (__int64)v8[2]](0LL, v8, 0LL);
        if ( v9 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v9, 0LL, v8[2]);
        v10 = (unsigned int)*v8;
        ++v7;
        v8[3] = 2;
        v8 = (int *)((char *)v8 + v10);
      }
      while ( v7 < v49 );
      v8 = (int *)Address;
    }
    PshedFreeMemory(v8);
  }
  return 0LL;
}

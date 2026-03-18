/*
 * XREFs of WheaInitialize @ 0x140AFF910
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     WheapCallErrorSourceInitialize @ 0x1403C08BC (WheapCallErrorSourceInitialize.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403DAA2C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     WheapInitializeWorkQueue @ 0x1403DE210 (WheapInitializeWorkQueue.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 *     WheapLogInitEvent @ 0x14084E760 (WheapLogInitEvent.c)
 *     WheapInitWnfCallbacks @ 0x140863FD4 (WheapInitWnfCallbacks.c)
 *     WheapInitializeErrorSourceTable @ 0x140AFF7C8 (WheapInitializeErrorSourceTable.c)
 *     WheapQueryPshedForErrorSources @ 0x140AFFE48 (WheapQueryPshedForErrorSources.c)
 *     WheapInitializeEventing @ 0x140B24410 (WheapInitializeEventing.c)
 *     WheapLoadPolicy @ 0x140B2A640 (WheapLoadPolicy.c)
 *     WheapCreatePerProcessorInfo @ 0x140B2F394 (WheapCreatePerProcessorInfo.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // r14
  int v4; // eax
  int PerProcessorInfo; // eax
  int v6; // eax
  unsigned int v7; // edi
  int *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  int v12; // eax
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v17; // rdx
  int SessionId; // eax
  int v20; // eax
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rbx
  __int64 v24; // rbx
  int v25; // r12d
  bool v26; // zf
  int v27; // eax
  struct _KTHREAD *v28; // r14
  unsigned int v29; // ebx
  __int64 p_Process; // rdi
  unsigned int v31; // ecx
  int v32; // r8d
  int v33; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-30h]
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-30h]
  __int64 v46; // [rsp+30h] [rbp-20h] BYREF
  __int128 v47; // [rsp+38h] [rbp-18h]
  unsigned int v48; // [rsp+98h] [rbp+48h] BYREF
  int v49; // [rsp+A0h] [rbp+50h]
  PVOID Address; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a2;
  Address = 0LL;
  v46 = 0LL;
  v48 = 0;
  if ( a2 )
  {
    qword_140C10BD8 = (__int64)&WheapPrevErrList;
    WheapPrevErrList = (__int64)&WheapPrevErrList;
    v12 = PshedInitialize(a1, &v46);
    if ( v12 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v12, 0LL, 0LL);
    WheapInitializeWorkQueue();
    WheapInitWnfCallbacks();
    v13 = WheapQueryPshedForErrorSources(&v48, &Address);
    if ( v13 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v13, v2, 0LL);
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    v49 = 0;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&WheapConfigTableLock, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v17, AbEntrySummary);
      v49 = v17;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
      _enable();
      v15 = (__int64)(&CurrentThread[1].Process + 12 * v17);
      if ( (unsigned __int64)&WheapConfigTableLock - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      *(_DWORD *)(v15 + 8) = SessionId;
      *(_QWORD *)v15 = (unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&WheapConfigTableLock, v15, (__int64)&WheapConfigTableLock);
    if ( v15 )
      *(_BYTE *)(v15 + 18) = 1;
    v20 = WheapInitializeErrorSourceTable(v48, (unsigned int *)Address);
    if ( v20 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v20, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0;
          i < (unsigned int)KeNumberProcessors_0;
          *(_QWORD *)(*(_QWORD *)(Prcb + 34464) + 8LL) = &WheapErrorSourceTable )
    {
      Prcb = KeGetPrcb(i++);
      **(_DWORD **)(Prcb + 34464) = v48;
      *(_QWORD *)(*(_QWORD *)(Prcb + 34464) + 16LL) = &WheapWorkQueue;
    }
    for ( j = qword_140CE1AA8; (__int64 *)j != &qword_140CE1AA8; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 104) == 7 )
      {
        *(_DWORD *)(j + 108) = 2;
        v33 = WheapCallErrorSourceInitialize(j, v2);
        if ( v33 < 0 )
        {
          BugCheckParameter4 = *(int *)(j + 104);
          *(_DWORD *)(j + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v33, v2, BugCheckParameter4);
        }
      }
    }
    v47 = 0LL;
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      *(_QWORD *)&v47 = __PAIR64__(_RBX, _RAX);
      *((_QWORD *)&v47 + 1) = __PAIR64__(_RDX, _RCX);
      if ( (unsigned int)_RAX >= 0x80000008 )
      {
        _RAX = 2147483656LL;
        __asm { cpuid }
        *(_QWORD *)&v47 = __PAIR64__(_RBX, _RAX);
        *((_QWORD *)&v47 + 1) = __PAIR64__(_RDX, _RCX);
        if ( (_RBX & 1) != 0 )
          WheapClearPoisonSupported = 1;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      WheapCheckForAndReportErrorsFromPreviousSession();
    v24 = qword_140CE1AA8;
    v25 = 1;
    while ( (__int64 *)v24 != &qword_140CE1AA8 )
    {
      v26 = *(_DWORD *)(v24 + 104) == 7;
      *(_DWORD *)(v24 + 124) = v25;
      if ( !v26 && !*(_BYTE *)(v24 + 88) && *(_DWORD *)(v24 + 108) == 1 )
      {
        *(_DWORD *)(v24 + 108) = 2;
        v27 = WheapCallErrorSourceInitialize(v24, v2);
        if ( v27 < 0 )
        {
          BugCheckParameter4a = *(int *)(v24 + 104);
          *(_DWORD *)(v24 + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v27, v2, BugCheckParameter4a);
        }
      }
      v24 = *(_QWORD *)v24;
      ++v25;
    }
    WheapLogInitEvent();
    *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
    IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
    WheapInitializationComplete = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapConfigTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&WheapConfigTableLock);
    v28 = KeGetCurrentThread();
    if ( (unsigned __int64)&WheapConfigTableLock - qword_140C50630 >= 0x8000000000LL )
      v29 = -1;
    else
      v29 = MmGetSessionIdEx((__int64)v28->ApcState.Process);
    _disable();
    p_Process = (__int64)&v28[1].Process;
    v31 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != v29 )
    {
      ++v31;
      p_Process += 96LL;
      if ( v31 >= 6 )
        goto LABEL_52;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_52:
      if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, (ULONG_PTR)&WheapConfigTableLock, v29, 0LL);
      _enable();
      return 0LL;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v32 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v28->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v32 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v28, (__int64)&WheapConfigTableLock, v32);
  }
  else
  {
    WheapStatus = 0LL;
    dword_140C10C78 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v4 = PshedInitialize(a1, &v46);
    if ( v4 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v4, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v6 = WheapQueryPshedForErrorSources(&v48, &Address);
    if ( v6 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v6, 0LL, 0LL);
    WheapErrorSourceTable = 1279410516LL;
    stru_140CE1AB8.Header.WaitListHead.Blink = &stru_140CE1AB8.Header.WaitListHead;
    qword_140CE1AB0 = (__int64)&qword_140CE1AA8;
    qword_140CE1AA8 = (__int64)&qword_140CE1AA8;
    stru_140CE1AB8.Header.WaitListHead.Flink = &stru_140CE1AB8.Header.WaitListHead;
    dword_140CE1AA0 = 1;
    LOWORD(stru_140CE1AB8.Header.Lock) = 1;
    stru_140CE1AB8.Header.Size = 6;
    stru_140CE1AB8.Header.SignalState = 1;
    WheapInitializeEventing();
    v7 = 0;
    v8 = (int *)Address;
    if ( v48 )
    {
      do
      {
        v9 = qword_140D00C68[8 * (__int64)v8[2]](0LL, v8, 0LL);
        if ( v9 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v9, 0LL, v8[2]);
        v10 = (unsigned int)*v8;
        ++v7;
        v8[3] = 2;
        v8 = (int *)((char *)v8 + v10);
      }
      while ( v7 < v48 );
      v8 = (int *)Address;
    }
    PshedFreeMemory(v8);
  }
  return 0LL;
}

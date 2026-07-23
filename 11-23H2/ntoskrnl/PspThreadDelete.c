/*
 * XREFs of PspThreadDelete @ 0x1407475B0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x140222B70 (KeEnumerateKernelStackSegments.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeInsertQueueDpc @ 0x140254830 (KeInsertQueueDpc.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KeInitializeDpc @ 0x1402BFC30 (KeInitializeDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     KeCleanupThreadState @ 0x1402EADB0 (KeCleanupThreadState.c)
 *     KeFoldProcessStatisticsThread @ 0x1402EAF44 (KeFoldProcessStatisticsThread.c)
 *     KeBugCheck @ 0x14041EDC0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExDestroyHandle @ 0x14073FC8C (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x14073FE00 (ExMapHandleToPointer.c)
 *     PspDeleteThreadSecurity @ 0x1407479C0 (PspDeleteThreadSecurity.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // r9
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v5; // rax
  void *v6; // rcx
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // r9d
  _QWORD *v14; // r8
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  volatile signed __int64 *v18; // rsi
  __int64 *v19; // r14
  __int64 *v20; // rcx
  __int64 **v21; // rax

  KeCleanupThreadState(BugCheckParameter2);
  if ( *(_DWORD *)(BugCheckParameter2 + 1452) )
    KeBugCheckEx(0x94u, 1uLL, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1452), 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1440) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1440), 0LL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1444) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1444), 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1448) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1448), 2uLL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter2 + 1656);
  if ( v2 != BugCheckParameter2 + 1656 )
    KeBugCheckEx(0x1C6u, 0x14uLL, BugCheckParameter2, v2, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 1680);
  if ( v3 != BugCheckParameter2 + 1680 )
    KeBugCheckEx(0x1C6u, 0x15uLL, BugCheckParameter2, v3, 0LL);
  if ( *(_QWORD *)(BugCheckParameter2 + 40) )
    KeEnumerateKernelStackSegments(
      BugCheckParameter2,
      (__int64 (__fastcall *)(__int64, _OWORD *, __int64))PspDeleteKernelStack,
      0LL);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 1232) )
  {
    --CurrentThread->KernelApcDisable;
    v5 = (_QWORD *)ExMapHandleToPointer((unsigned int *)PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1232));
    if ( !v5 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1232), v5);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  PspDeleteThreadSecurity(BugCheckParameter2);
  v6 = *(void **)(BugCheckParameter2 + 1632);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E6854u);
  result = KiQueryUnbiasedInterruptTime();
  if ( result >= qword_140C64AF0 )
  {
    v8 = qword_140C64AE0;
    if ( qword_140C64AE0 )
    {
      if ( (_DWORD)qword_140C64AF8 )
      {
        v9 = 0LL;
        v10 = &ObpObjectTypes;
        v11 = (unsigned int)qword_140C64AF8;
        do
        {
          v12 = *v10;
          if ( ((*(unsigned __int8 *)(*v10 + 66) >> 6) & 1) != _bittest64(&qword_140C64B00, v9) && !qword_140C64AB0 )
          {
            qword_140C64AB0 = (unsigned int)__ROL4__(1207959560, 133);
            xmmword_140C64AB8 = 0LL;
            qword_140C64AC8 = 268LL;
            qword_140C64AD0 = v12;
          }
          ++v9;
          ++v10;
          --v11;
        }
        while ( v11 );
        v8 = qword_140C64AE0;
      }
      v13 = 64;
      v14 = (_QWORD *)(qword_140C64B20 + 112);
      v15 = (const char *)(qword_140C64B20 + 112);
      if ( qword_140C64B20 + 112 < (unsigned __int64)(qword_140C64B20 + 176) )
      {
        do
        {
          _mm_prefetch(v15, 0);
          v15 += 64;
        }
        while ( (unsigned __int64)v15 < qword_140C64B20 + 176 );
      }
      v16 = 8LL;
      do
      {
        v8 = __ROR8__(v8 - *v14++, qword_140C64AE8);
        v13 -= 8;
        --v16;
      }
      while ( v16 );
      for ( ; v13; --v13 )
      {
        v17 = *(unsigned __int8 *)v14;
        v14 = (_QWORD *)((char *)v14 + 1);
        v8 = __ROR8__(v8 - v17, qword_140C64AE8);
      }
      if ( qword_140C64B28 != v8 )
      {
        if ( qword_140C64AB0 )
          goto LABEL_46;
        qword_140C64AB0 = (unsigned int)__ROR4__(150994945, 152);
        xmmword_140C64AB8 = 0LL;
        qword_140C64AC8 = 268LL;
        qword_140C64AD0 = qword_140C64B20;
      }
    }
    if ( !qword_140C64AB0 )
    {
LABEL_31:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140C64AF0 = result;
      goto LABEL_32;
    }
LABEL_46:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))DeferredContext.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiScanQueues, &DeferredContext);
    qword_140C64AD8 = 1934400LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_31;
  }
LABEL_32:
  v18 = *(volatile signed __int64 **)(BugCheckParameter2 + 544);
  if ( v18 )
  {
    v19 = (__int64 *)(BugCheckParameter2 + 1336);
    if ( *(_QWORD *)(BugCheckParameter2 + 1336) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 135), 0LL);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 268), 0LL);
      KeFoldProcessStatisticsThread(BugCheckParameter2);
      v20 = (__int64 *)*v19;
      if ( *(__int64 **)(*v19 + 8) != v19 || (v21 = *(__int64 ***)(BugCheckParameter2 + 1344), *v21 != v19) )
        __fastfail(3u);
      *v21 = v20;
      v20[1] = (__int64)v21;
      if ( (_InterlockedExchangeAdd64(v18 + 268, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v18 + 268);
      KeAbPostRelease((ULONG_PTR)(v18 + 268));
      if ( (_InterlockedExchangeAdd64(v18 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v18 + 135);
      KeAbPostRelease((ULONG_PTR)(v18 + 135));
      result = (unsigned __int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 1376) & 0x100000) != 0 )
      result = ((__int64 (__fastcall *)(ULONG_PTR))xmmword_140C380F0)(BugCheckParameter2);
    if ( v18 != PsIdleProcess )
      return ObfDereferenceObjectWithTag((PVOID)v18, 0x72437350u);
  }
  return result;
}

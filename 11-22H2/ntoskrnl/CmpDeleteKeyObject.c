/*
 * XREFs of CmpDeleteKeyObject @ 0x1406DB3F0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14022D510 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FB70 (CmpIsRegistryLockAcquired.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x1402314A4 (CmpInitializeDelayDerefContext.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     CmpArmDelayedCloseTimer @ 0x1402B953C (CmpArmDelayedCloseTimer.c)
 *     ExpReleaseFastMutexContended @ 0x1402BBF30 (ExpReleaseFastMutexContended.c)
 *     ExfReleasePushLock @ 0x1402BD800 (ExfReleasePushLock.c)
 *     CmpWaitForLateUnloadWorker @ 0x1402EC614 (CmpWaitForLateUnloadWorker.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCD4C (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpFreeCallbackObjectContexts @ 0x14068EF1C (CmpFreeCallbackObjectContexts.c)
 *     CmpFlushNotify @ 0x140699940 (CmpFlushNotify.c)
 *     CmpFreeKeyControlBlock @ 0x140699D40 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1406D8518 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1406D85C0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCallCallBacksEx @ 0x1406E86A0 (CmpCallCallBacksEx.c)
 *     CmpDeleteHive @ 0x14074EBE4 (CmpDeleteHive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140752244 (CmpDoQueueLateUnloadWorker.c)
 *     CmpFreePostBlock @ 0x140768860 (CmpFreePostBlock.c)
 *     CmpReferenceHive @ 0x14076AA9C (CmpReferenceHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076B020 (CmpDereferenceKeyControlBlock.c)
 *     CmpFireCleanupNotifications @ 0x1407DC0C4 (CmpFireCleanupNotifications.c)
 *     CmpUnlockKeyBodyFromMemory @ 0x140A179EC (CmpUnlockKeyBodyFromMemory.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A240B4 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpLockRegistry @ 0x140AF64A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF64F0 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140AF65A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpDeleteKeyObject(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  signed __int64 v9; // rcx
  __int64 v10; // r8
  signed __int64 v11; // r9
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned int i; // ecx
  signed __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r14
  unsigned __int64 *v18; // rcx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  struct _PRIVILEGE_SET *v21; // rcx
  __int64 v22; // r10
  unsigned __int64 v23; // rax
  ULONG_PTR v24; // r15
  unsigned __int64 *v25; // r12
  __int64 v26; // rax
  __int64 v27; // r13
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rcx
  signed __int64 v36; // rax
  __int64 v37; // r13
  struct _KTHREAD *v38; // rax
  bool v39; // dl
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r13
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // r12
  bool v48; // r13
  signed __int32 v49; // eax
  unsigned __int8 v50; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v53; // eax
  bool v54; // zf
  __int64 *v55; // rdi
  signed __int64 v56; // rax
  signed __int64 v57; // rdx
  __int64 v58; // rtt
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // r9
  struct _WORK_QUEUE_ITEM *v62; // rcx
  struct _KEVENT *v63; // rcx
  struct _KTHREAD *v64; // rcx
  _QWORD v66[2]; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v67[2]; // [rsp+50h] [rbp-79h] BYREF
  __int128 v68; // [rsp+60h] [rbp-69h] BYREF
  __int128 v69; // [rsp+70h] [rbp-59h] BYREF
  __int128 v70; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v71[3]; // [rsp+90h] [rbp-39h] BYREF
  int v72; // [rsp+A8h] [rbp-21h]
  __int128 v73; // [rsp+ACh] [rbp-1Dh]
  __int64 v74; // [rsp+BCh] [rbp-Dh]
  int v75; // [rsp+C4h] [rbp-5h]
  _OWORD v76[5]; // [rsp+C8h] [rbp-1h] BYREF
  char v77; // [rsp+130h] [rbp+67h]
  unsigned int v78; // [rsp+138h] [rbp+6Fh]
  __int64 v79; // [rsp+140h] [rbp+77h]

  v1 = 0LL;
  v77 = 0;
  v70 = 0LL;
  memset(v76, 0, 32);
  v69 = 0LL;
  CmpInitializeThreadInfo((__int64)&v70);
  v67[1] = v67;
  v67[0] = v67;
  CmpInitializeDelayDerefContext(&v69);
  if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
    return CmCleanupThreadInfo((__int64 *)&v70);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v76[0] = a1;
      LOBYTE(v5) = 1;
      CmpCallCallBacksEx(14, (unsigned int)v76, 0, v5, 25, a1, (__int64)v67);
      if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
      {
        CmpFireCleanupNotifications(a1);
        CmpFreeCallbackObjectContexts(a1);
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    ObfDereferenceObject((PVOID)(v7 & 0xFFFFFFFFFFFFFFFEuLL));
  v66[1] = v66;
  v66[0] = v66;
  CmpLockRegistry(v7, v3, v4, v5);
  BugCheckParameter4 = *(_QWORD *)(a1 + 8);
  if ( BugCheckParameter4 )
  {
    if ( *(_DWORD *)a1 == 1803104306 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
        CmpFlushNotify(a1, 0, (__int64)v66);
        CmpUnlockKcb(BugCheckParameter4);
      }
      LOBYTE(v11) = 0;
      if ( (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
      {
LABEL_14:
        for ( i = 0; i < 4; ++i )
        {
          v8 = i;
          v10 = *(_QWORD *)(a1 + 8) + 8LL * i;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 136), 0LL, a1);
          if ( a1 == v14 )
            goto LABEL_29;
          if ( (unsigned __int64)(v14 - 1) <= 1 )
          {
            CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
            LOBYTE(v11) = 1;
            goto LABEL_14;
          }
        }
        if ( !(_BYTE)v11 )
        {
          v15 = *(_QWORD *)(a1 + 8);
          v16 = KeAbPreAcquire(v15 + 48, 0LL);
          v17 = v16;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 48), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v15 + 48), v16, v15 + 48);
          if ( v17 )
            *(_BYTE *)(v17 + 18) = 1;
          LOBYTE(v11) = 1;
          *(_QWORD *)(v15 + 56) = KeGetCurrentThread();
        }
        v8 = *(_QWORD *)(a1 + 32);
        v18 = *(unsigned __int64 **)(a1 + 40);
        if ( *(_QWORD *)(v8 + 8) != a1 + 32 || *v18 != a1 + 32 )
          __fastfail(3u);
        *v18 = v8;
        *(_QWORD *)(v8 + 8) = v18;
LABEL_29:
        *(_WORD *)(a1 + 48) &= ~0x40u;
        if ( (_BYTE)v11 )
          CmpUnlockKcb(*(_QWORD *)(a1 + 8));
      }
      v1 = *(_QWORD *)(BugCheckParameter4 + 32);
      _m_prefetchw((const void *)(v1 + 4232));
      v19 = *(_DWORD *)(v1 + 4232);
      if ( v19 )
      {
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 4232), v19 + 1, v19);
        }
        while ( v20 != v19 && v19 );
      }
      if ( *(_BYTE *)(v1 + 2944) == 1 )
      {
        v77 = 1;
        *(_DWORD *)(v1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4236), 1u) & 0x7F) + 4240) = 16;
      }
      v21 = *(struct _PRIVILEGE_SET **)(a1 + 88);
      if ( v21 )
      {
        CmpKeyEnumStackFreeResumeContext(v21);
        CmpDrainDelayDerefContext((_QWORD **)&v69);
      }
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 )
        CmpUnlockKeyBodyFromMemory(a1, v8, v10, v11);
      v68 = 0LL;
      CmpInitializeDelayDerefContext(&v68);
      v9 = *(_QWORD *)BugCheckParameter4;
      v22 = *(_QWORD *)(BugCheckParameter4 + 32);
      if ( *(_QWORD *)BugCheckParameter4 <= 1uLL )
      {
LABEL_49:
        v24 = *(_QWORD *)(BugCheckParameter4 + 32);
        v78 = 101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9));
        v25 = (unsigned __int64 *)(*(_QWORD *)(v24 + 1648)
                                 + 24
                                 * ((unsigned int)(*(_DWORD *)(v24 + 1656) - 1) & (v78 ^ ((unsigned __int64)v78 >> 9))));
        v26 = KeAbPreAcquire((__int64)v25, 0LL);
        v27 = v26;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
          ExfAcquirePushLockExclusiveEx(v25, v26, (__int64)v25);
        if ( v27 )
          *(_BYTE *)(v27 + 18) = 1;
        v25[1] = (unsigned __int64)KeGetCurrentThread();
        _m_prefetchw((const void *)(v24 + 4232));
        v28 = *(_DWORD *)(v24 + 4232);
        if ( !v28 )
LABEL_143:
          KeBugCheckEx(0x51u, 0x17uLL, v24, 8uLL, BugCheckParameter4);
        while ( 1 )
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 4232), v28 + 1, v28);
          if ( v29 == v28 )
            break;
          if ( !v28 )
            goto LABEL_143;
        }
        v30 = KeAbPreAcquire(BugCheckParameter4 + 48, 0LL);
        v31 = v30;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter4 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter4 + 48), v30, BugCheckParameter4 + 48);
        if ( v31 )
          *(_BYTE *)(v31 + 18) = 1;
        *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
        v32 = *(_QWORD *)(BugCheckParameter4 + 192);
        v79 = 0LL;
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 24);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 16);
            v79 = v34;
            CmpUnlockKcb(BugCheckParameter4);
            CmpLockKcbExclusive(v34);
            CmpLockKcbExclusive(BugCheckParameter4);
          }
        }
        v35 = *(_QWORD *)(BugCheckParameter4 + 32);
        v36 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter4);
        if ( v36 == 2 )
        {
          if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v35 + 2944) == 1 )
            CmpDoQueueLateUnloadWorker(v35);
        }
        else if ( !v36 )
        {
          if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
          {
            v37 = *(_QWORD *)(BugCheckParameter4 + 32);
            CmpCleanUpKcbCacheWithLock(BugCheckParameter4, (__int64)&v68);
            v38 = KeGetCurrentThread();
            *(_DWORD *)(v37 + 160) |= 0x80u;
            *(_QWORD *)(v37 + 4176) = v38;
            *(_DWORD *)(v37 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 4236), 1u) & 0x7F) + 4240) = 31;
            if ( (*(_DWORD *)(v37 + 160) & 0x20) == 0
              && _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 4232), 0xFFFFFFFF) == 1 )
            {
              CmpDeleteHive((PVOID)v37);
            }
          }
          else
          {
            v39 = 0;
            v40 = *(_DWORD *)(BugCheckParameter4 + 8);
            if ( (v40 & 0x20) == 0 )
              v39 = (v40 & 0x20000) == 0;
            if ( (!CmpHoldLazyFlush
               || (*(_DWORD *)(BugCheckParameter4 + 184) & 0x100000) != 0
               || (*(_DWORD *)(BugCheckParameter4 + 8) & 8) != 0)
              && v39 )
            {
              v41 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
              v43 = v41;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(1uLL);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
                ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, v41, v42);
              if ( v43 )
                *(_BYTE *)(v43 + 18) = 1;
              *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
              *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
              v45 = (_QWORD *)(BugCheckParameter4 + 224);
              if ( (_QWORD *)*v45 != v45 )
                KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter4, 0LL, 0LL);
              v46 = CmpDelayedLRUListHead;
              if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
LABEL_127:
                __fastfail(3u);
              *v45 = CmpDelayedLRUListHead;
              *(_QWORD *)(BugCheckParameter4 + 232) = &CmpDelayedLRUListHead;
              *(_QWORD *)(v46 + 8) = v45;
              CmpDelayedLRUListHead = BugCheckParameter4 + 224;
              *(_BYTE *)(BugCheckParameter4 + 64) |= 2u;
              ++qword_140D552E8;
              v47 = *((unsigned __int8 *)&CmpDelayedCloseTableLock + 48);
              v48 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
              *(&CmpDelayedCloseTableLock + 1) = 0LL;
              v49 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
              if ( v49 )
                ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v49);
              if ( (_DWORD)KiIrqlFlags )
              {
                v50 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v50 <= 0xFu && (unsigned __int8)v47 <= 0xFu && v50 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v47 + 1));
                  v54 = (v53 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v53;
                  if ( v54 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
              __writecr8(v47);
              KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
              if ( v48 )
                CmpArmDelayedCloseTimer();
            }
            else
            {
              CmpCleanUpKcbCacheWithLock(BugCheckParameter4, (__int64)&v68);
              if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread()
                && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x80000) != 0 )
              {
                CmpFreeKeyControlBlock(BugCheckParameter4);
              }
            }
          }
        }
        CmpUnlockKcb(BugCheckParameter4);
        if ( v79 )
          CmpUnlockKcb(v79);
        v55 = (__int64 *)(*(_QWORD *)(v24 + 1648)
                        + 24 * ((unsigned int)(*(_DWORD *)(v24 + 1656) - 1) & (v78 ^ ((unsigned __int64)v78 >> 9))));
        v55[1] = 0LL;
        _m_prefetchw(v55);
        v56 = *v55;
        v57 = *v55 - 16;
        if ( (*v55 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v57 = 0LL;
        if ( (v56 & 2) != 0 || (v58 = *v55, v58 != _InterlockedCompareExchange64(v55, v57, v56)) )
          ExfReleasePushLock(v55);
        KeAbPostRelease((ULONG_PTR)v55);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 4232), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v24);
        CmpDrainDelayDerefContext((_QWORD **)&v68);
      }
      else
      {
        while ( 1 )
        {
          v8 = v9 - 1;
          v11 = v9;
          if ( v9 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v22 + 2944) == 1 )
            v10 = 1LL;
          else
            LOBYTE(v10) = 0;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v8, v9);
          v9 = v23;
          if ( v23 == v11 )
            break;
          if ( v23 <= 1 )
            goto LABEL_49;
        }
        if ( v23 < v8 )
          KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
        if ( (_BYTE)v10 )
          CmpDoQueueLateUnloadWorker(v22);
      }
    }
    else
    {
      v1 = *(_QWORD *)(BugCheckParameter4 + 32);
      CmpReferenceHive(v1);
      if ( *(_BYTE *)(v1 + 2944) == 1 )
      {
        v77 = 1;
        *(_DWORD *)(v1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4236), 1u) & 0x7F) + 4240) = 17;
      }
      CmpDereferenceKeyControlBlock(BugCheckParameter4);
    }
  }
  CmpUnlockRegistry(v9, v8, v10, v11);
  while ( 1 )
  {
    v59 = v66[0];
    if ( (_QWORD *)v66[0] == v66 )
      break;
    v60 = *(_QWORD *)v66[0];
    if ( *(_QWORD **)(v66[0] + 8LL) != v66 || *(_QWORD *)(v60 + 8) != v66[0] )
      goto LABEL_127;
    v66[0] = *(_QWORD *)v66[0];
    *(_QWORD *)(v60 + 8) = v66;
    v61 = *(_QWORD *)(v59 + 48);
    if ( (unsigned __int16)*(_DWORD *)(v59 + 40) != 3 )
    {
      v63 = *(struct _KEVENT **)v61;
LABEL_125:
      KeSetEvent(v63, 0, 0);
      ObfDereferenceObject(**(PVOID **)(v59 + 48));
      goto LABEL_126;
    }
    v62 = *(struct _WORK_QUEUE_ITEM **)(v61 + 8);
    if ( v62 )
      ExQueueWorkItem(v62, *(WORK_QUEUE_TYPE *)(v61 + 16));
    v63 = **(struct _KEVENT ***)(v59 + 48);
    if ( v63 )
      goto LABEL_125;
LABEL_126:
    CmpFreePostBlock((PVOID)(v59 - 16));
  }
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v67[0] != v67 )
  {
    v71[1] = 0LL;
    v71[2] = v76;
    v74 = 0LL;
    v75 = 0;
    v73 = 0LL;
    v71[0] = 0LL;
    v72 = 0;
    CmpCallCallBacksEx(25, (unsigned int)v71, 0, 0, 25, 0LL, (__int64)v67);
  }
  if ( v77 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker(v1);
  if ( v1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4232), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)v1);
  v64 = KeGetCurrentThread();
  v54 = v64->KernelApcDisable++ == -1;
  if ( v54
    && ($C71981A45BEB2B45F82C232A7085991E *)v64->ApcState.ApcListHead[0].Flink != &v64->152
    && !v64->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return CmCleanupThreadInfo((__int64 *)&v70);
}

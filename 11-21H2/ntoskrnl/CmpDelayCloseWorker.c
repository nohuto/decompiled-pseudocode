/*
 * XREFs of CmpDelayCloseWorker @ 0x1407C0D40
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ExpAcquireFastMutexContended @ 0x14029EF4C (ExpAcquireFastMutexContended.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExpReleaseFastMutexContended @ 0x140359548 (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x1407C0940 (CmpLockHashEntryExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407C09E0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpDelayCloseWorker(__int64 a1)
{
  bool v1; // r12
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // di
  _BYTE *v9; // r9
  int v10; // eax
  unsigned __int64 v11; // rbx
  signed __int32 v12; // eax
  unsigned int v13; // ebp
  char *v14; // r14
  ULONG_PTR *v15; // r13
  unsigned int v16; // r15d
  ULONG_PTR *v17; // rdi
  ULONG_PTR v18; // rbx
  __int64 v19; // rbx
  ULONG_PTR v20; // rax
  __int64 v21; // rdx
  ULONG_PTR v22; // rbx
  ULONG_PTR v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // r8
  _QWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int8 v33; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  bool v37; // zf
  __int128 v38; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v39; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v40[3]; // [rsp+40h] [rbp-C8h] BYREF
  char v41; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v42[88]; // [rsp+78h] [rbp-90h] BYREF

  v1 = a1 != 0;
  v38 = 0LL;
  memset(v40, 0, sizeof(v40));
  v39 = 0LL;
  CmpInitializeThreadInfo((__int64)&v39);
  CmpAttachToRegistryProcess(v40);
  CmpInitializeDelayDerefContext(&v38);
  CmpLockRegistry(v3, v2, v4);
  do
  {
    if ( !v1 )
      _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
      v5 = 0;
      v6 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
      v7 = v6;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
        ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, v6);
      if ( v7 )
        *(_BYTE *)(v7 + 18) = 1;
      v9 = v42;
      *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
      *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
      do
      {
        v10 = CmpDelayedCloseElements;
        if ( CmpDelayedCloseElements <= (unsigned int)CmpDelayedCloseSize && (!v1 || !CmpDelayedCloseElements) )
          break;
        v29 = qword_140C49328 - 224;
        v30 = *(_QWORD **)(qword_140C49328 + 8);
        if ( *(__int64 **)qword_140C49328 != &CmpDelayedLRUListHead || *v30 != qword_140C49328 )
          __fastfail(3u);
        qword_140C49328 = *(_QWORD *)(qword_140C49328 + 8);
        *v30 = &CmpDelayedLRUListHead;
        --qword_140D3D2C8;
        CmpDelayedCloseElements = v10 - 1;
        *((_QWORD *)v9 - 1) = *(_QWORD *)(v29 + 32);
        *(_QWORD *)v9 = v29;
        v31 = v5++;
        v42[24 * v31 + 8] = 0;
        *((_DWORD *)v9 + 3) = *(_DWORD *)(v29 + 16);
        v9 += 24;
        *(_BYTE *)(v29 + 64) |= 4u;
        *(_QWORD *)(v29 + 224) = &v42[24 * v31 + 8];
      }
      while ( v5 < 4 );
      v11 = *((unsigned __int8 *)&CmpDelayedCloseTableLock + 48);
      *(&CmpDelayedCloseTableLock + 1) = 0LL;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
      if ( v12 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v12);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v33 = KeGetCurrentIrql();
          if ( v33 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v33 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v37 = (v36 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v36;
            if ( v37 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
      KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
      v13 = 0;
      if ( v5 )
      {
        v14 = &v41;
        v15 = (ULONG_PTR *)v42;
        do
        {
          CmpLockHashEntryExclusive(*(_QWORD *)v14, *((unsigned int *)v15 + 3));
          v16 = v13;
          if ( v13 < v5 )
          {
            v17 = v15;
            do
            {
              if ( *((_DWORD *)v17 + 3) == *((_DWORD *)v14 + 5) && *(v17 - 1) == *(_QWORD *)v14 && !*((_BYTE *)v17 + 8) )
              {
                v18 = *v17;
                ExAcquirePushLockExclusiveEx(*v17 + 48, 0LL);
                *(_QWORD *)(v18 + 56) = KeGetCurrentThread();
                v19 = 0LL;
                v20 = *v17;
                v21 = *(_QWORD *)(*v17 + 192);
                if ( v21 )
                {
                  v32 = *(_QWORD *)(v21 + 24);
                  if ( v32 )
                  {
                    v19 = *(_QWORD *)(v32 + 16);
                    CmpUnlockKcb(*v17);
                    CmpLockKcbExclusive(v19);
                    CmpLockKcbExclusive(*v17);
                    v20 = *v17;
                  }
                }
                CmpCleanUpKcbCacheWithLock(v20, (__int64)&v38);
                CmpUnlockKcb(*v17);
                if ( v19 )
                  CmpUnlockKcb(v19);
                v42[24 * v16 + 8] = 1;
              }
              ++v16;
              v17 += 3;
            }
            while ( v16 < v5 );
          }
          v22 = *(_QWORD *)v14;
          v23 = *(_QWORD *)(*(_QWORD *)v14 + 1648LL)
              + 24
              * ((unsigned int)(*(_DWORD *)(*(_QWORD *)v14 + 1656LL) - 1) & ((unsigned int)(101027
                                                                                          * (*((_DWORD *)v14 + 5) ^ (*((_DWORD *)v14 + 5) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*((_DWORD *)v14 + 5) ^ (*((_DWORD *)v14 + 5) >> 9))) >> 9)));
          *(_QWORD *)(v23 + 8) = 0LL;
          ExReleasePushLockEx(v23, 0LL);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 4232), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((_QWORD *)v22);
          ++v13;
          v15 += 3;
          v14 += 24;
        }
        while ( v13 < v5 );
      }
    }
    while ( v5 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  CmpDrainDelayDerefContext((_QWORD **)&v38);
  CmpUnlockRegistry(v25, v24, v26, v27);
  CmpDetachFromRegistryProcess(v40);
  return CmCleanupThreadInfo((__int64 *)&v39);
}

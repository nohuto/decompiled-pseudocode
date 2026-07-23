/*
 * XREFs of NtCancelTimer @ 0x14032E4C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ObDereferenceObjectExWithTag @ 0x1402A2804 (ObDereferenceObjectExWithTag.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x1403180D0 (KiAbThreadRemoveBoostsSlow.c)
 *     PoDestroyReasonContext @ 0x14032D55C (PoDestroyReasonContext.c)
 *     ExpCancelTimer @ 0x14032F040 (ExpCancelTimer.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpSetTimerObject2 @ 0x140339AB4 (ExpSetTimerObject2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS result; // eax
  char *v6; // rsi
  struct _OBJECT_TYPE *v7; // rcx
  unsigned __int64 v8; // r12
  _QWORD *v9; // r15
  BOOLEAN v10; // bl
  __int64 v11; // rcx
  struct _KTHREAD *v12; // r15
  __int64 v13; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v15; // ecx
  struct _KPRCB *v16; // rcx
  signed __int32 *v17; // r8
  int SessionId; // eax
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  _QWORD *v21; // rax
  char v22; // bl
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int64 v25; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // edx
  bool v30; // zf
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  NTSTATUS v35; // [rsp+30h] [rbp-58h]
  int v36; // [rsp+34h] [rbp-54h]
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  _QWORD *v39; // [rsp+48h] [rbp-40h]
  __int64 v40; // [rsp+50h] [rbp-38h]
  char v41; // [rsp+98h] [rbp+10h]
  unsigned int v42; // [rsp+A8h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v25 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v25 = (__int64)CurrentState;
    *(_BYTE *)v25 = *(_BYTE *)v25;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, PreviousMode, &Object, 0LL);
  v35 = result;
  if ( result >= 0 )
  {
    v6 = (char *)Object;
    v7 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v7 == ExpIRTimerObjectType )
    {
      if ( CurrentState )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return -1073741811;
      }
      else
      {
        return ExpSetTimerObject2(Object);
      }
    }
    else if ( v7 == ExTimerObjectType )
    {
      CurrentThread = 0LL;
      v41 = 0;
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 8);
      v9 = (_QWORD *)*((_QWORD *)v6 + 32);
      v39 = v9;
      if ( v9 )
      {
        KxReleaseSpinLock((volatile signed __int64 *)v6 + 8);
        v11 = (unsigned int)KiIrqlFlags;
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v8 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = (unsigned int)(v8 + 1);
            v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v30 = (v29 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v29;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v8);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v40 = 0LL;
        v12 = KeGetCurrentThread();
        v13 = 0LL;
        _disable();
        AbEntrySummary = v12->AbEntrySummary;
        if ( v12->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v11, v12)) != 0 )
        {
          _BitScanForward(&v15, AbEntrySummary);
          v42 = v15;
          v12->AbEntrySummary = AbEntrySummary & ~(1 << v15);
          v16 = KeGetCurrentPrcb();
          v17 = (signed __int32 *)v16->SchedulerAssist;
          if ( v17 )
          {
            _m_prefetchw(v17);
            v23 = *v17;
            do
            {
              v24 = v23;
              v23 = _InterlockedCompareExchange(v17, v23 & 0xFFDFFFFF, v23);
            }
            while ( v24 != v23 );
            if ( (v23 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
          _enable();
          v13 = (__int64)(&v12[1].Process + 12 * v42);
          if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C659E8 < 0x8000000000LL )
            SessionId = MmGetSessionIdEx((__int64)v12->ApcState.Process);
          else
            SessionId = -1;
          *(_DWORD *)(v13 + 8) = SessionId;
          *(_QWORD *)v13 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( (_DWORD)v40 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v12, (__int64)&ExpWakeTimerLock, v40);
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v13, (__int64)&ExpWakeTimerLock);
        if ( v13 )
          *(_BYTE *)(v13 + 18) = 1;
        v41 = 1;
        v6 = (char *)Object;
        LOBYTE(v8) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 8);
        v9 = (_QWORD *)*((_QWORD *)v6 + 32);
        v39 = v9;
        *((_QWORD *)v6 + 32) = 0LL;
      }
      v36 = ExpCancelTimer((PKTIMER)v6) + 1;
      KxReleaseSpinLock((volatile signed __int64 *)v6 + 8);
      if ( (_DWORD)KiIrqlFlags )
      {
        v31 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v30 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v32);
          v6 = (char *)Object;
        }
      }
      __writecr8((unsigned __int8)v8);
      if ( v41 )
      {
        if ( v9 )
        {
          v19 = v6 + 264;
          v20 = *v19;
          v21 = (_QWORD *)v19[1];
          if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v21 != v19 )
            __fastfail(3u);
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          *v19 = 0LL;
        }
        v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v22 & 2) != 0 && (v22 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
        KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v6 = (char *)Object;
      }
      v10 = v6[4];
      ObDereferenceObjectExWithTag((ULONG_PTR)v6, v36);
      if ( CurrentState )
        *CurrentState = v10;
      if ( v9 )
        PoDestroyReasonContext(v9);
      return v35;
    }
    else
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741788;
    }
  }
  return result;
}

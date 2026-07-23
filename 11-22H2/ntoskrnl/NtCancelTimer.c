/*
 * XREFs of NtCancelTimer @ 0x14032E090
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ObDereferenceObjectExWithTag @ 0x1402A2454 (ObDereferenceObjectExWithTag.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140317C60 (KiAbThreadRemoveBoostsSlow.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     ExpCancelTimer @ 0x14032EC10 (ExpCancelTimer.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpSetTimerObject2 @ 0x140339684 (ExpSetTimerObject2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  struct _KTHREAD *v15; // r15
  __int64 v16; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v18; // ecx
  struct _KPRCB *v19; // rcx
  signed __int32 *v20; // r8
  int SessionId; // eax
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  _QWORD *v24; // rax
  char v25; // bl
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int64 v28; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // edx
  bool v33; // zf
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  NTSTATUS v38; // [rsp+30h] [rbp-58h]
  int v39; // [rsp+34h] [rbp-54h]
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  _QWORD *v42; // [rsp+48h] [rbp-40h]
  __int64 v43; // [rsp+50h] [rbp-38h]
  char v44; // [rsp+98h] [rbp+10h]
  unsigned int v45; // [rsp+A8h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v28 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v28 = (__int64)CurrentState;
    *(_BYTE *)v28 = *(_BYTE *)v28;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, PreviousMode, &Object, 0LL);
  v38 = result;
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
      v44 = 0;
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 8);
      v9 = (_QWORD *)*((_QWORD *)v6 + 32);
      v42 = v9;
      if ( v9 )
      {
        KxReleaseSpinLock((volatile signed __int64 *)v6 + 8);
        v14 = (unsigned int)KiIrqlFlags;
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
            v14 = (unsigned int)(v8 + 1);
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v33 = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v8);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v43 = 0LL;
        v15 = KeGetCurrentThread();
        v16 = 0LL;
        _disable();
        AbEntrySummary = v15->AbEntrySummary;
        if ( v15->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v14, v15)) != 0 )
        {
          _BitScanForward(&v18, AbEntrySummary);
          v45 = v18;
          v15->AbEntrySummary = AbEntrySummary & ~(1 << v18);
          v19 = KeGetCurrentPrcb();
          v20 = (signed __int32 *)v19->SchedulerAssist;
          if ( v20 )
          {
            _m_prefetchw(v20);
            v26 = *v20;
            do
            {
              v27 = v26;
              v26 = _InterlockedCompareExchange(v20, v26 & 0xFFDFFFFF, v26);
            }
            while ( v27 != v26 );
            if ( (v26 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
          _enable();
          v16 = (__int64)(&v15[1].Process + 12 * v45);
          if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C65AE8 < 0x8000000000LL )
            SessionId = MmGetSessionIdEx((__int64)v15->ApcState.Process);
          else
            SessionId = -1;
          *(_DWORD *)(v16 + 8) = SessionId;
          *(_QWORD *)v16 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( (_DWORD)v43 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v15, (__int64)&ExpWakeTimerLock, v43);
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v16, (__int64)&ExpWakeTimerLock);
        if ( v16 )
          *(_BYTE *)(v16 + 18) = 1;
        v44 = 1;
        v6 = (char *)Object;
        LOBYTE(v8) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 8);
        v9 = (_QWORD *)*((_QWORD *)v6 + 32);
        v42 = v9;
        *((_QWORD *)v6 + 32) = 0LL;
      }
      v39 = ExpCancelTimer((PKTIMER)v6) + 1;
      KxReleaseSpinLock((volatile signed __int64 *)v6 + 8);
      if ( (_DWORD)KiIrqlFlags )
      {
        v34 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v34 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v33 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v35);
          v6 = (char *)Object;
        }
      }
      __writecr8((unsigned __int8)v8);
      if ( v44 )
      {
        if ( v9 )
        {
          v22 = v6 + 264;
          v23 = *v22;
          v24 = (_QWORD *)v22[1];
          if ( *(_QWORD **)(*v22 + 8LL) != v22 || (_QWORD *)*v24 != v22 )
            __fastfail(3u);
          *v24 = v23;
          *(_QWORD *)(v23 + 8) = v24;
          *v22 = 0LL;
        }
        v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v25 & 2) != 0 && (v25 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
        KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v6 = (char *)Object;
      }
      v10 = v6[4];
      ObDereferenceObjectExWithTag((ULONG_PTR)v6, v39);
      if ( CurrentState )
        *CurrentState = v10;
      if ( v9 )
        PoDestroyReasonContext(v9, v11, v12, v13);
      return v38;
    }
    else
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741788;
    }
  }
  return result;
}

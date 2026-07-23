/*
 * XREFs of ExpSetTimerObject @ 0x14032EAB4
 * Callers:
 *     ExpSetTimer @ 0x14032E9B8 (ExpSetTimer.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KeSetCoalescableTimer @ 0x140252620 (KeSetCoalescableTimer.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ObDereferenceObjectExWithTag @ 0x1402A2804 (ObDereferenceObjectExWithTag.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KeInitializeApc @ 0x1402BE960 (KeInitializeApc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x1403180D0 (KiAbThreadRemoveBoostsSlow.c)
 *     PoDestroyReasonContext @ 0x14032D55C (PoDestroyReasonContext.c)
 *     ExpCancelTimer @ 0x14032F040 (ExpCancelTimer.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     PsInsertVirtualizedTimer @ 0x140356800 (PsInsertVirtualizedTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpCheckWakeTimerAccess @ 0x1407EBB98 (ExpCheckWakeTimerAccess.c)
 *     ExpCheckTestsigningEnabled @ 0x1409FBCF8 (ExpCheckTestsigningEnabled.c)
 */

__int64 __fastcall ExpSetTimerObject(
        ULONG_PTR BugCheckParameter2,
        char a2,
        LARGE_INTEGER *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        ULONG Period,
        ULONG TolerableDelay,
        _BYTE *a10)
{
  __int64 v11; // rcx
  _KPROCESS *Process; // rbx
  unsigned __int8 CurrentIrql; // r12
  int v14; // r13d
  ULONG v15; // r14d
  LARGE_INTEGER *v16; // r11
  LARGE_INTEGER v17; // rbx
  KSPIN_LOCK *v18; // r10
  char v19; // cl
  __int64 v20; // r14
  _QWORD *v21; // rbx
  _DWORD *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  struct _KTHREAD *v26; // rbx
  volatile signed __int64 *p_StackLimit; // r14
  char *v28; // rax
  void **p_StackBase; // rbx
  char **v30; // rdx
  struct _KTHREAD *v31; // r14
  __int64 v32; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v34; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int8 v38; // cf
  _QWORD *v39; // rax
  _QWORD *v40; // rcx
  char v41; // di
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  unsigned int v44; // r14d
  __int64 v45; // rcx
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  bool v49; // zf
  struct _KTHREAD *v50; // r14
  __int64 v51; // rbx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  struct _KPRCB *v54; // rcx
  signed __int32 *v55; // r8
  signed __int32 v56; // eax
  signed __int32 v57; // ett
  int v58; // eax
  unsigned __int8 v59; // r8
  _DWORD *v60; // r10
  __int64 v61; // rdx
  LARGE_INTEGER v62; // rcx
  LARGE_INTEGER v63; // rcx
  unsigned int v64; // edx
  unsigned int v65; // eax
  unsigned __int8 v66; // cl
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // eax
  _QWORD *v70; // rax
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  __int64 v73; // rcx
  char v74; // [rsp+40h] [rbp-88h]
  char v75; // [rsp+41h] [rbp-87h]
  unsigned int v76; // [rsp+44h] [rbp-84h]
  unsigned int v77; // [rsp+48h] [rbp-80h]
  unsigned int v78; // [rsp+4Ch] [rbp-7Ch]
  __int64 v79; // [rsp+50h] [rbp-78h]
  KSPIN_LOCK *Object; // [rsp+58h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-68h]
  struct _KDPC *Dpc; // [rsp+68h] [rbp-60h]
  LARGE_INTEGER v83; // [rsp+70h] [rbp-58h]
  char v87; // [rsp+F8h] [rbp+30h]

  v76 = 0;
  v74 = 0;
  CurrentThread = 0LL;
  v11 = a6;
  v79 = a6;
  if ( a6 )
  {
    if ( a7 )
    {
      if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
      {
        LOBYTE(v11) = KeGetCurrentThread()->PreviousMode;
        v44 = ExpCheckWakeTimerAccess(v11);
        v76 = v44;
        if ( v44 )
        {
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
          return v44;
        }
      }
    }
    if ( (int)qword_140C3DA40 >= 2 || byte_140C3DA13 )
    {
      v74 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v31 = KeGetCurrentThread();
      v32 = 0LL;
      _disable();
      AbEntrySummary = v31->AbEntrySummary;
      if ( v31->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v11, v31)) != 0 )
      {
        _BitScanForward(&v34, AbEntrySummary);
        v77 = v34;
        v31->AbEntrySummary = AbEntrySummary & ~(1 << v34);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v42 = *SchedulerAssist;
          do
          {
            v43 = v42;
            v42 = _InterlockedCompareExchange(SchedulerAssist, v42 & 0xFFDFFFFF, v42);
          }
          while ( v43 != v42 );
          if ( (v42 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        v32 = (__int64)(&v31[1].Process + 12 * v77);
        if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C659E8 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx((__int64)v31->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v32 + 8) = SessionId;
        *(_QWORD *)v32 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
      }
      v38 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
      if ( v38 )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v32, (__int64)&ExpWakeTimerLock);
      if ( v32 )
        *(_BYTE *)(v32 + 18) = 1;
    }
    else
    {
      v76 = 1073741861;
      v79 = 0LL;
    }
  }
  Dpc = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = (KSPIN_LOCK *)Process;
  v87 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v23 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v24) = 4;
    else
      v24 = (-1LL << (CurrentIrql + 1)) & 4;
    v23[5] |= v24;
  }
  if ( a2 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock(&Process[2].Affinity.StaticBitmap[24]);
    v87 = 1;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  if ( !v74 && *(_QWORD *)(BugCheckParameter2 + 256) )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(BugCheckParameter2 + 64));
    if ( v87 )
      KxReleaseSpinLock((volatile signed __int64 *)&Process[2].Affinity.StaticBitmap[24]);
    if ( (_DWORD)KiIrqlFlags )
    {
      v45 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)v45 <= 0xFu
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v45 >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        v45 = (unsigned int)CurrentIrql + 1;
        v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v49 = (v48 & v47[5]) == 0;
        v47[5] &= v48;
        if ( v49 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
    __writecr8(CurrentIrql);
    v74 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v50 = KeGetCurrentThread();
    v51 = 0LL;
    _disable();
    v52 = v50->AbEntrySummary;
    if ( v50->AbEntrySummary || (v52 = KiAbTryReclaimOrphanedEntries(v45, v50)) != 0 )
    {
      _BitScanForward(&v53, v52);
      v78 = v53;
      v50->AbEntrySummary = v52 & ~(1 << v53);
      v54 = KeGetCurrentPrcb();
      v55 = (signed __int32 *)v54->SchedulerAssist;
      if ( v55 )
      {
        _m_prefetchw(v55);
        v56 = *v55;
        do
        {
          v57 = v56;
          v56 = _InterlockedCompareExchange(v55, v56 & 0xFFDFFFFF, v56);
        }
        while ( v57 != v56 );
        if ( (v56 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
      _enable();
      v51 = (__int64)(&v50[1].Process + 12 * v78);
      if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C659E8 < 0x8000000000LL )
        v58 = MmGetSessionIdEx((__int64)v50->ApcState.Process);
      else
        v58 = -1;
      *(_DWORD *)(v51 + 8) = v58;
      *(_QWORD *)v51 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    v38 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    if ( v38 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v51, (__int64)&ExpWakeTimerLock);
    if ( v51 )
      *(_BYTE *)(v51 + 18) = 1;
    v59 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v59 <= 0xFu )
    {
      v60 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v59 == 2 )
        LODWORD(v61) = 4;
      else
        v61 = (-1LL << (v59 + 1)) & 4;
      v60[5] |= v61;
    }
    CurrentIrql = v59;
    if ( v87 )
      KxAcquireSpinLock(Object + 305);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v14 = ExpCancelTimer((PKTIMER)BugCheckParameter2) + 1;
  v75 = *(_BYTE *)(BugCheckParameter2 + 4);
  v15 = Period;
  *(_QWORD *)(BugCheckParameter2 + 240) = Period;
  *(_DWORD *)(BugCheckParameter2 + 320) = TolerableDelay;
  if ( a4 )
  {
    v26 = KeGetCurrentThread();
    KeInitializeApc(BugCheckParameter2 + 72, (__int64)v26, 2, (__int64)ExpTimerApcRoutine, 0LL, a4, a2, a5);
    p_StackLimit = (volatile signed __int64 *)&v26[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v26[1].StackLimit);
    v28 = (char *)(BugCheckParameter2 + 224);
    p_StackBase = &v26[1].StackBase;
    v30 = (char **)p_StackBase[1];
    if ( *v30 != (char *)p_StackBase )
      goto LABEL_128;
    *(_QWORD *)v28 = p_StackBase;
    *(_QWORD *)(BugCheckParameter2 + 232) = v30;
    *v30 = v28;
    p_StackBase[1] = v28;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    KxReleaseSpinLock(p_StackLimit);
    Dpc = (struct _KDPC *)(BugCheckParameter2 + 160);
    --v14;
    v15 = 0;
  }
  v16 = a3;
  v17 = *a3;
  v83 = *a3;
  v18 = Object;
  if ( v87 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      PsInsertVirtualizedTimer(Object, BugCheckParameter2 + 280);
      v18 = Object;
      v16 = a3;
    }
    _InterlockedIncrement((volatile signed __int32 *)v18 + 606);
    if ( (v18[79] & 0x10) != 0 )
    {
      v25 = *((unsigned int *)v18 + 17);
      if ( (_DWORD)v25 )
      {
        v17 = *v16;
        v62 = *v16;
        if ( v16->QuadPart >= 0 )
        {
          if ( v62.QuadPart <= MEMORY[0xFFFFF78000000014] )
            v62.QuadPart = MEMORY[0xFFFFF78000000014];
          v17.QuadPart = v25 + v62.QuadPart;
          if ( v25 + v62.QuadPart < v16->QuadPart )
            v17 = *v16;
        }
        else
        {
          v63.QuadPart = v62.QuadPart - v25;
          if ( v63.QuadPart <= v17.QuadPart )
            v17 = v63;
        }
        v83.HighPart = v17.HighPart;
        v64 = (unsigned int)v25 / 0x2710;
        if ( v15 && v64 + v15 > v15 )
        {
          v15 += v64;
          *(_DWORD *)(BugCheckParameter2 + 240) += v64;
LABEL_112:
          *(_DWORD *)(BugCheckParameter2 + 244) = v64;
          goto LABEL_10;
        }
        v65 = *(_DWORD *)(BugCheckParameter2 + 240);
        if ( v65 && v65 + v64 > v65 )
        {
          *(_DWORD *)(BugCheckParameter2 + 240) = v65 + v64;
          goto LABEL_112;
        }
      }
    }
  }
LABEL_10:
  v19 = 2;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 )
  {
    *(LARGE_INTEGER *)(BugCheckParameter2 + 312) = v17;
    v20 = v79;
    if ( v83.HighPart >= 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    }
    else
    {
      if ( v79 )
        v19 = 3;
      *(_BYTE *)(BugCheckParameter2 + 248) = v19;
    }
  }
  else
  {
    KeSetCoalescableTimer((PKTIMER)BugCheckParameter2, v17, v15, TolerableDelay, Dpc);
    v20 = v79;
    if ( v79 )
      _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
  }
  v21 = *(_QWORD **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v20;
  *(_BYTE *)(BugCheckParameter2 + 304) ^= (*(_BYTE *)(BugCheckParameter2 + 304) ^ (4 * a7)) & 4;
  KxReleaseSpinLock((volatile signed __int64 *)(BugCheckParameter2 + 64));
  if ( v87 )
    KxReleaseSpinLock((volatile signed __int64 *)Object + 305);
  if ( (_DWORD)KiIrqlFlags )
  {
    v66 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v66 <= 0xFu && CurrentIrql <= 0xFu && v66 >= 2u )
    {
      v67 = KeGetCurrentPrcb();
      v68 = v67->SchedulerAssist;
      v69 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v49 = (v69 & v68[5]) == 0;
      v68[5] &= v69;
      if ( v49 )
        KiRemoveSystemWorkPriorityKick(v67);
    }
  }
  __writecr8(CurrentIrql);
  if ( !v74 )
    goto LABEL_17;
  if ( !v21 )
  {
    if ( !v20 )
      goto LABEL_49;
    v39 = (_QWORD *)(BugCheckParameter2 + 264);
    v40 = (_QWORD *)qword_140C2D5C8;
    if ( *(__int64 **)qword_140C2D5C8 == &ExpWakeTimerList )
    {
      *v39 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v40;
      *v40 = v39;
      qword_140C2D5C8 = BugCheckParameter2 + 264;
      goto LABEL_49;
    }
LABEL_128:
    __fastfail(3u);
  }
  if ( !v20 )
  {
    v70 = (_QWORD *)(BugCheckParameter2 + 264);
    v71 = *(_QWORD *)(BugCheckParameter2 + 264);
    v72 = *(_QWORD **)(BugCheckParameter2 + 272);
    if ( *(_QWORD *)(v71 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v72 != v70 )
      goto LABEL_128;
    *v72 = v71;
    *(_QWORD *)(v71 + 8) = v72;
    *v70 = 0LL;
  }
LABEL_49:
  v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v41 & 2) != 0 && (v41 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v21 )
    PoDestroyReasonContext(v21);
LABEL_17:
  if ( v14 )
    ObDereferenceObjectExWithTag(BugCheckParameter2, v14);
  if ( !a10 )
    return v76;
  if ( !a2 )
  {
    *a10 = v75;
    return v76;
  }
  v73 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
    v73 = (__int64)a10;
  *(_BYTE *)v73 = *(_BYTE *)v73;
  *a10 = v75;
  return v76;
}

/*
 * XREFs of ExpSetTimerObject @ 0x14032E684
 * Callers:
 *     ExpSetTimer @ 0x14032E588 (ExpSetTimer.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     KeSetCoalescableTimer @ 0x140252440 (KeSetCoalescableTimer.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ObDereferenceObjectExWithTag @ 0x1402A2454 (ObDereferenceObjectExWithTag.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KeInitializeApc @ 0x1402BE6A0 (KeInitializeApc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140317C60 (KiAbThreadRemoveBoostsSlow.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     ExpCancelTimer @ 0x14032EC10 (ExpCancelTimer.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     PsInsertVirtualizedTimer @ 0x140356060 (PsInsertVirtualizedTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpCheckWakeTimerAccess @ 0x1407EBE48 (ExpCheckWakeTimerAccess.c)
 *     ExpCheckTestsigningEnabled @ 0x1409FBB18 (ExpCheckTestsigningEnabled.c)
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
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  signed __int32 v45; // eax
  signed __int32 v46; // ett
  unsigned int v47; // r14d
  __int64 v48; // rcx
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  bool v52; // zf
  struct _KTHREAD *v53; // r14
  __int64 v54; // rbx
  unsigned int v55; // eax
  unsigned int v56; // ecx
  struct _KPRCB *v57; // rcx
  signed __int32 *v58; // r8
  signed __int32 v59; // eax
  signed __int32 v60; // ett
  int v61; // eax
  unsigned __int8 v62; // r8
  _DWORD *v63; // r10
  __int64 v64; // rdx
  LARGE_INTEGER v65; // rcx
  LARGE_INTEGER v66; // rcx
  unsigned int v67; // edx
  unsigned int v68; // eax
  unsigned __int8 v69; // cl
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  _QWORD *v73; // rax
  __int64 v74; // rdx
  _QWORD *v75; // rcx
  __int64 v76; // rcx
  char v77; // [rsp+40h] [rbp-88h]
  char v78; // [rsp+41h] [rbp-87h]
  unsigned int v79; // [rsp+44h] [rbp-84h]
  unsigned int v80; // [rsp+48h] [rbp-80h]
  unsigned int v81; // [rsp+4Ch] [rbp-7Ch]
  __int64 v82; // [rsp+50h] [rbp-78h]
  KSPIN_LOCK *Object; // [rsp+58h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-68h]
  struct _KDPC *Dpc; // [rsp+68h] [rbp-60h]
  LARGE_INTEGER v86; // [rsp+70h] [rbp-58h]
  char v90; // [rsp+F8h] [rbp+30h]

  v79 = 0;
  v77 = 0;
  CurrentThread = 0LL;
  v11 = a6;
  v82 = a6;
  if ( a6 )
  {
    if ( a7 )
    {
      if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
      {
        LOBYTE(v11) = KeGetCurrentThread()->PreviousMode;
        v47 = ExpCheckWakeTimerAccess(v11);
        v79 = v47;
        if ( v47 )
        {
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
          return v47;
        }
      }
    }
    if ( (int)qword_140C3DB00 >= 2 || byte_140C3DAD3 )
    {
      v77 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v31 = KeGetCurrentThread();
      v32 = 0LL;
      _disable();
      AbEntrySummary = v31->AbEntrySummary;
      if ( v31->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v11, v31)) != 0 )
      {
        _BitScanForward(&v34, AbEntrySummary);
        v80 = v34;
        v31->AbEntrySummary = AbEntrySummary & ~(1 << v34);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v45 = *SchedulerAssist;
          do
          {
            v46 = v45;
            v45 = _InterlockedCompareExchange(SchedulerAssist, v45 & 0xFFDFFFFF, v45);
          }
          while ( v46 != v45 );
          if ( (v45 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        v32 = (__int64)(&v31[1].Process + 12 * v80);
        if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C65AE8 < 0x8000000000LL )
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
      v79 = 1073741861;
      v82 = 0LL;
    }
  }
  Dpc = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = (KSPIN_LOCK *)Process;
  v90 = 0;
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
    v90 = 1;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  if ( !v77 && *(_QWORD *)(BugCheckParameter2 + 256) )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(BugCheckParameter2 + 64));
    if ( v90 )
      KxReleaseSpinLock((volatile signed __int64 *)&Process[2].Affinity.StaticBitmap[24]);
    if ( (_DWORD)KiIrqlFlags )
    {
      v48 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)v48 <= 0xFu
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v48 >= 2u )
      {
        v49 = KeGetCurrentPrcb();
        v50 = v49->SchedulerAssist;
        v48 = (unsigned int)CurrentIrql + 1;
        v51 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v52 = (v51 & v50[5]) == 0;
        v50[5] &= v51;
        if ( v52 )
          KiRemoveSystemWorkPriorityKick(v49);
      }
    }
    __writecr8(CurrentIrql);
    v77 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v53 = KeGetCurrentThread();
    v54 = 0LL;
    _disable();
    v55 = v53->AbEntrySummary;
    if ( v53->AbEntrySummary || (v55 = KiAbTryReclaimOrphanedEntries(v48, v53)) != 0 )
    {
      _BitScanForward(&v56, v55);
      v81 = v56;
      v53->AbEntrySummary = v55 & ~(1 << v56);
      v57 = KeGetCurrentPrcb();
      v58 = (signed __int32 *)v57->SchedulerAssist;
      if ( v58 )
      {
        _m_prefetchw(v58);
        v59 = *v58;
        do
        {
          v60 = v59;
          v59 = _InterlockedCompareExchange(v58, v59 & 0xFFDFFFFF, v59);
        }
        while ( v60 != v59 );
        if ( (v59 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v57);
      }
      _enable();
      v54 = (__int64)(&v53[1].Process + 12 * v81);
      if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C65AE8 < 0x8000000000LL )
        v61 = MmGetSessionIdEx((__int64)v53->ApcState.Process);
      else
        v61 = -1;
      *(_DWORD *)(v54 + 8) = v61;
      *(_QWORD *)v54 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    v38 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    if ( v38 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v54, (__int64)&ExpWakeTimerLock);
    if ( v54 )
      *(_BYTE *)(v54 + 18) = 1;
    v62 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v62 <= 0xFu )
    {
      v63 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v62 == 2 )
        LODWORD(v64) = 4;
      else
        v64 = (-1LL << (v62 + 1)) & 4;
      v63[5] |= v64;
    }
    CurrentIrql = v62;
    if ( v90 )
      KxAcquireSpinLock(Object + 305);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v14 = ExpCancelTimer((PKTIMER)BugCheckParameter2) + 1;
  v78 = *(_BYTE *)(BugCheckParameter2 + 4);
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
  v86 = *a3;
  v18 = Object;
  if ( v90 )
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
        v65 = *v16;
        if ( v16->QuadPart >= 0 )
        {
          if ( v65.QuadPart <= MEMORY[0xFFFFF78000000014] )
            v65.QuadPart = MEMORY[0xFFFFF78000000014];
          v17.QuadPart = v25 + v65.QuadPart;
          if ( v25 + v65.QuadPart < v16->QuadPart )
            v17 = *v16;
        }
        else
        {
          v66.QuadPart = v65.QuadPart - v25;
          if ( v66.QuadPart <= v17.QuadPart )
            v17 = v66;
        }
        v86.HighPart = v17.HighPart;
        v67 = (unsigned int)v25 / 0x2710;
        if ( v15 && v67 + v15 > v15 )
        {
          v15 += v67;
          *(_DWORD *)(BugCheckParameter2 + 240) += v67;
LABEL_112:
          *(_DWORD *)(BugCheckParameter2 + 244) = v67;
          goto LABEL_10;
        }
        v68 = *(_DWORD *)(BugCheckParameter2 + 240);
        if ( v68 && v68 + v67 > v68 )
        {
          *(_DWORD *)(BugCheckParameter2 + 240) = v68 + v67;
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
    v20 = v82;
    if ( v86.HighPart >= 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    }
    else
    {
      if ( v82 )
        v19 = 3;
      *(_BYTE *)(BugCheckParameter2 + 248) = v19;
    }
  }
  else
  {
    KeSetCoalescableTimer((PKTIMER)BugCheckParameter2, v17, v15, TolerableDelay, Dpc);
    v20 = v82;
    if ( v82 )
      _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
  }
  v21 = *(_QWORD **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v20;
  *(_BYTE *)(BugCheckParameter2 + 304) ^= (*(_BYTE *)(BugCheckParameter2 + 304) ^ (4 * a7)) & 4;
  KxReleaseSpinLock((volatile signed __int64 *)(BugCheckParameter2 + 64));
  if ( v90 )
    KxReleaseSpinLock((volatile signed __int64 *)Object + 305);
  if ( (_DWORD)KiIrqlFlags )
  {
    v69 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v69 <= 0xFu && CurrentIrql <= 0xFu && v69 >= 2u )
    {
      v70 = KeGetCurrentPrcb();
      v71 = v70->SchedulerAssist;
      v72 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v52 = (v72 & v71[5]) == 0;
      v71[5] &= v72;
      if ( v52 )
        KiRemoveSystemWorkPriorityKick(v70);
    }
  }
  __writecr8(CurrentIrql);
  if ( !v77 )
    goto LABEL_17;
  if ( !v21 )
  {
    if ( !v20 )
      goto LABEL_49;
    v39 = (_QWORD *)(BugCheckParameter2 + 264);
    v40 = (_QWORD *)qword_140C2D5E8;
    if ( *(__int64 **)qword_140C2D5E8 == &ExpWakeTimerList )
    {
      *v39 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v40;
      *v40 = v39;
      qword_140C2D5E8 = BugCheckParameter2 + 264;
      goto LABEL_49;
    }
LABEL_128:
    __fastfail(3u);
  }
  if ( !v20 )
  {
    v73 = (_QWORD *)(BugCheckParameter2 + 264);
    v74 = *(_QWORD *)(BugCheckParameter2 + 264);
    v75 = *(_QWORD **)(BugCheckParameter2 + 272);
    if ( *(_QWORD *)(v74 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v75 != v73 )
      goto LABEL_128;
    *v75 = v74;
    *(_QWORD *)(v74 + 8) = v75;
    *v73 = 0LL;
  }
LABEL_49:
  v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v41 & 2) != 0 && (v41 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v21 )
    PoDestroyReasonContext(v21, v42, v43, v44);
LABEL_17:
  if ( v14 )
    ObDereferenceObjectExWithTag(BugCheckParameter2, v14);
  if ( !a10 )
    return v79;
  if ( !a2 )
  {
    *a10 = v78;
    return v79;
  }
  v76 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
    v76 = (__int64)a10;
  *(_BYTE *)v76 = *(_BYTE *)v76;
  *a10 = v78;
  return v79;
}

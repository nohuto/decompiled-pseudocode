/*
 * XREFs of ExpShareAddressSpaceWithDevice @ 0x14060DC10
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x140A017D0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CAB0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAllocateAsid @ 0x14060D4A0 (ExpAllocateAsid.c)
 *     ExpConvertSvmDevice @ 0x14060D7E4 (ExpConvertSvmDevice.c)
 *     ExpPrepareNewSvmDevice @ 0x14060D9A8 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14060E628 (ExpSvmDereferenceDevice.c)
 *     MmEnableProcessSvm @ 0x140619854 (MmEnableProcessSvm.c)
 *     IoQueryInterface @ 0x14082A2D0 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x140A01800 (ExpAssignPasid.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpShareAddressSpaceWithDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v5; // r12d
  _QWORD *v6; // r15
  __int64 v7; // r13
  struct _KTHREAD *CurrentThread; // rdi
  struct _EX_RUNDOWN_REF *Process; // rsi
  __int64 v11; // rcx
  _DWORD *v12; // r9
  int Interface; // r14d
  struct _KTHREAD *v14; // rsi
  __int64 v15; // rdi
  unsigned int AbEntrySummary; // eax
  __int64 v17; // rcx
  unsigned int v18; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  int SessionId; // eax
  unsigned int Asid; // edi
  unsigned __int8 CurrentIrql; // di
  _DWORD *v26; // r9
  __int64 v27; // rdx
  struct _KPRCB *v28; // r10
  int v29; // eax
  bool v30; // zf
  struct _KTHREAD *v31; // rsi
  __int64 v32; // rdi
  unsigned int v33; // eax
  unsigned int v34; // ecx
  struct _KPRCB *v35; // rcx
  signed __int32 *v36; // r8
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  __int64 *v40; // rax
  __int64 *v41; // rsi
  __int64 *v42; // rdi
  __int64 Pool2; // rax
  char v44; // si
  unsigned __int8 v45; // di
  _DWORD *v46; // r9
  __int64 v47; // rdx
  struct _EX_RUNDOWN_REF *v48; // r13
  struct _EX_RUNDOWN_REF *v49; // rcx
  struct _EX_RUNDOWN_REF *i; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  unsigned __int8 v56; // di
  _DWORD *v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  _QWORD *v60; // rax
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r10
  _DWORD *v63; // r9
  int v64; // eax
  volatile signed __int64 *v65; // rdi
  struct _KTHREAD *v66; // rdx
  __int64 Count; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B8h]
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v70; // [rsp+60h] [rbp-A8h]
  __int64 v71; // [rsp+68h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-98h] BYREF
  __int64 v73; // [rsp+88h] [rbp-80h]
  struct _KTHREAD *v74; // [rsp+A0h] [rbp-68h]
  PEX_RUNDOWN_REF RunRef; // [rsp+A8h] [rbp-60h]
  _QWORD v76[18]; // [rsp+B8h] [rbp-50h] BYREF
  int v78; // [rsp+160h] [rbp+58h]
  unsigned int v80; // [rsp+170h] [rbp+68h]

  memset(v76, 0, 0x50uLL);
  v5 = -1;
  *a3 = -1;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v73 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  Count = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v74 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  Object = Process;
  if ( (HIDWORD(Process[271].Ptr) & 0x1000) != 0 )
    return 3221225659LL;
  RunRef = Process + 139;
  if ( !ExAcquireRundownProtection_0(Process + 139) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0, (int)&GUID_IOMMU_BUS_INTERFACE, 80, 1, a1, v76);
  if ( Interface < 0 )
    goto LABEL_132;
  --CurrentThread->SpecialApcDisable;
  v71 = (__int64)&Process[274];
  v14 = KeGetCurrentThread();
  v15 = 0LL;
  _disable();
  AbEntrySummary = v14->AbEntrySummary;
  if ( v14->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v11, (__int64)v14)) != 0 )
  {
    _BitScanForward(&v18, AbEntrySummary);
    v80 = v18;
    v14->AbEntrySummary = AbEntrySummary & ~(1 << v18);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v21 = *SchedulerAssist;
      do
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange(SchedulerAssist, v21 & 0xFFDFFFFF, v21);
      }
      while ( v22 != v21 );
      if ( (v21 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v15 = (__int64)(&v14[1].Process + 12 * v80);
    if ( (unsigned __int64)(v71 - qword_140C65AE8) >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v14->ApcState.Process);
    *(_DWORD *)(v15 + 8) = SessionId;
    v17 = 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v15 = v71 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v71, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v71, v15, v71);
  if ( v15 )
    *(_BYTE *)(v15 + 18) = 1;
  Process = (struct _EX_RUNDOWN_REF *)Object;
  LODWORD(LockHandle.LockQueue.Next) = 0x8000;
  Asid = *((_DWORD *)Object + 544);
  if ( !Asid )
  {
    Asid = ExpAllocateAsid(v17, (__int64)Object);
    if ( !Asid )
    {
      Interface = -1073741709;
      goto LABEL_108;
    }
    if ( !(unsigned int)ExpAssignPasid(Object) )
      Asid = *((_DWORD *)Object + 544);
  }
  v78 = --Asid;
  Count = *((_QWORD *)Object + 273);
  if ( !Count )
  {
    Interface = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(HalIommuDispatch + 16))(Asid, 0LL, &Count);
    if ( Interface < 0 )
      goto LABEL_108;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v26 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v27) = LockHandle.LockQueue.Next;
      else
        v27 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      v26[5] |= v27;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[275].Count, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
    if ( Process[273].Count )
    {
      v7 = Count;
      Count = Process[273].Count;
    }
    else
    {
      Process[273].Count = Count;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle.LockQueue.Lock);
    if ( (_DWORD)KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)v17 <= 0xFu
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v17 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v17 = (unsigned int)CurrentIrql + 1;
        v12 = v28->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v30 = (v29 & v12[5]) == 0;
        v12[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick((__int64)v28);
      }
    }
    __writecr8(CurrentIrql);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(HalIommuDispatch + 64))(v7);
  }
  LODWORD(v70) = 0;
  v31 = KeGetCurrentThread();
  v32 = 0LL;
  _disable();
  v33 = v31->AbEntrySummary;
  if ( v31->AbEntrySummary || (v33 = KiAbTryReclaimOrphanedEntries(v17, (__int64)v31)) != 0 )
  {
    _BitScanForward(&v34, v33);
    LODWORD(v70) = v34;
    v31->AbEntrySummary = v33 & ~(1 << v34);
    v35 = KeGetCurrentPrcb();
    v36 = (signed __int32 *)v35->SchedulerAssist;
    if ( v36 )
    {
      _m_prefetchw(v36);
      v37 = *v36;
      do
      {
        v38 = v37;
        v37 = _InterlockedCompareExchange(v36, v37 & 0xFFDFFFFF, v37);
      }
      while ( v38 != v37 );
      if ( (v37 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v35);
    }
    _enable();
    v32 = (__int64)(&v31[1].Process + 12 * (unsigned int)v70);
    if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C65AE8 < 0x8000000000LL )
      v5 = MmGetSessionIdEx((__int64)v31->ApcState.Process);
    *(_DWORD *)(v32 + 8) = v5;
    *(_QWORD *)v32 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v32, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v32 )
    *(_BYTE *)(v32 + 18) = 1;
  v40 = (__int64 *)ExpAtsSvmDevices;
  if ( (__int64 *)ExpAtsSvmDevices == &ExpAtsSvmDevices )
    goto LABEL_68;
  do
  {
    v41 = v40;
    v42 = v40;
    P = v40;
    if ( v40[3] == a1 )
      break;
    v40 = (__int64 *)*v40;
  }
  while ( v40 != &ExpAtsSvmDevices );
  if ( v41[3] != a1 )
  {
    P = 0LL;
    goto LABEL_68;
  }
  if ( !v41 )
  {
LABEL_68:
    Interface = ExpPrepareNewSvmDevice(a1, Count, (__int64)v76, (char)v12, &P);
    if ( Interface >= 0 )
      goto LABEL_69;
LABEL_76:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
    goto LABEL_79;
  }
  if ( *((_BYTE *)v41 + 17) )
  {
    Interface = -1073741637;
    goto LABEL_76;
  }
  if ( *((_BYTE *)v41 + 16) )
  {
    Interface = ExpConvertSvmDevice(Count, v42);
    if ( Interface < 0 )
      goto LABEL_76;
    *((_BYTE *)v41 + 16) = 0;
  }
  ++*((_DWORD *)v42 + 8);
  ++*((_DWORD *)v42 + 9);
LABEL_69:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  Pool2 = ExAllocatePool2(64LL, 24LL, 1682995269LL);
  v6 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    Interface = -1073741670;
LABEL_79:
    Process = (struct _EX_RUNDOWN_REF *)Object;
    goto LABEL_107;
  }
  v44 = 0;
  *(_QWORD *)(Pool2 + 16) = P;
  v45 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v45 <= 0xFu )
  {
    v46 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v45 == 15 )
      LODWORD(v47) = LockHandle.LockQueue.Next;
    else
      v47 = (-1LL << (v45 + 1)) & 0xFFFC;
    v46[5] |= v47;
  }
  v48 = (struct _EX_RUNDOWN_REF *)Object;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)Object + 275, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  v49 = v48 + 276;
  for ( i = (struct _EX_RUNDOWN_REF *)v48[276].Count; i != v49; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( *(_QWORD *)(i[2].Count + 24) == a1 )
    {
      v44 = 1;
      goto LABEL_97;
    }
  }
  v51 = v49->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(v49->Count + 8) != v49 )
    goto LABEL_140;
  *v6 = v51;
  v6[1] = v49;
  *(_QWORD *)(v51 + 8) = v6;
  v49->Count = (unsigned __int64)v6;
LABEL_97:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle.LockQueue.Lock);
  if ( (_DWORD)KiIrqlFlags )
  {
    v52 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)v52 <= 0xFu
      && v45 <= 0xFu
      && (unsigned __int8)v52 >= 2u )
    {
      v53 = KeGetCurrentPrcb();
      v52 = (unsigned int)v45 + 1;
      v54 = v53->SchedulerAssist;
      v55 = ~(unsigned __int16)(-1LL << (v45 + 1));
      v30 = (v55 & v54[5]) == 0;
      v54[5] &= v55;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick((__int64)v53);
    }
  }
  __writecr8(v45);
  if ( v44 )
  {
    ExFreePoolWithTag(v6, 0);
    v6 = 0LL;
  }
  else
  {
    MmEnableProcessSvm(v52);
    Interface = (*(__int64 (__fastcall **)(__int64, _QWORD))(HalIommuDispatch + 32))(Count, *((_QWORD *)P + 22));
    if ( Interface >= 0 )
    {
      Process = v48;
      Interface = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(HalIommuDispatch + 40))(
                    Count,
                    v48[5].Count & 0xFFFFFFFFFFFFF000uLL);
      goto LABEL_107;
    }
  }
  Process = v48;
LABEL_107:
  Asid = v78;
LABEL_108:
  ((void (__fastcall *)(_QWORD))v76[3])(v76[1]);
  if ( Interface >= 0 )
  {
    *a3 = Asid;
    v65 = (volatile signed __int64 *)v71;
    goto LABEL_133;
  }
  if ( P )
    ExpSvmDereferenceDevice(P);
  if ( v6 )
  {
    v56 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v56 <= 0xFu )
    {
      v57 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v56 == 15 )
        LODWORD(v58) = LockHandle.LockQueue.Next;
      else
        v58 = (-1LL << (v56 + 1)) & 0xFFFC;
      v57[5] |= v58;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[275].Count, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
    v59 = *v6;
    v60 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) == v6 && (_QWORD *)*v60 == v6 )
    {
      *v60 = v59;
      *(_QWORD *)(v59 + 8) = v60;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle.LockQueue.Lock);
      if ( (_DWORD)KiIrqlFlags )
      {
        v61 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v61 <= 0xFu && v56 <= 0xFu && v61 >= 2u )
        {
          v62 = KeGetCurrentPrcb();
          v63 = v62->SchedulerAssist;
          v64 = ~(unsigned __int16)(-1LL << (v56 + 1));
          v30 = (v64 & v63[5]) == 0;
          v63[5] &= v64;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick((__int64)v62);
        }
      }
      __writecr8(v56);
      ExFreePoolWithTag(v6, 0);
      goto LABEL_132;
    }
LABEL_140:
    __fastfail(3u);
  }
LABEL_132:
  v65 = (volatile signed __int64 *)&Process[274];
LABEL_133:
  if ( (_InterlockedExchangeAdd64(v65, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v65);
  KeAbPostRelease((ULONG_PTR)v65);
  v66 = v74;
  v30 = v74->SpecialApcDisable++ == -1;
  if ( v30 && ($C71981A45BEB2B45F82C232A7085991E *)v66->ApcState.ApcListHead[0].Flink != &v66->152 )
    KiCheckForKernelApcDelivery();
  ExReleaseRundownProtection_0(RunRef);
  return (unsigned int)Interface;
}

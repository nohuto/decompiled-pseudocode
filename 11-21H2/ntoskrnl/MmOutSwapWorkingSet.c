/*
 * XREFs of MmOutSwapWorkingSet @ 0x140260144
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140687754 (PspChangeProcessExecutionState.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiFindBestOutswapPagefile @ 0x14025FE60 (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x14025FF40 (MiGetKernelStackSwapSupport.c)
 *     MiOutSwapWorkingSet @ 0x1402608AC (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14026099C (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1402609F4 (MiAllocateWorkingSetSwapSupport.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402829A8 (MiGetWorkingSetSwapSupport.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     SmStoreExistsForProcess @ 0x1402A10EC (SmStoreExistsForProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14030EA00 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadMapsLargeImage @ 0x14030EC40 (MiVadMapsLargeImage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiVadSupportsPrivateCommit @ 0x14032E910 (MiVadSupportsPrivateCommit.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406EC158 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1406EC288 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1406EC338 (EtwTraceWorkingSetSwap.c)
 *     SmStoreSetProcessVaRanges @ 0x1406EC47C (SmStoreSetProcessVaRanges.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1407F71B0 (MiReserveWorkingSetSwapSpace.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x14097FF04 (MiExtendWorkingSetSwapPagefile.c)
 *     VmCheckLargePageInswap @ 0x1409D8CD4 (VmCheckLargePageInswap.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  unsigned __int64 *v2; // rsi
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v6; // edi
  __int64 v7; // r15
  unsigned int BestOutswapPagefile; // r12d
  PVOID *Pool; // r15
  unsigned __int64 v10; // r14
  __int64 WorkingSetSwapSupport; // rax
  __int64 v12; // rcx
  __int64 SharedVm; // rax
  volatile LONG *v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  PVOID v18; // rax
  PEPROCESS v19; // rsi
  struct _KTHREAD *v20; // r12
  ULONG_PTR v21; // r12
  _QWORD *v22; // rax
  unsigned __int64 v23; // rsi
  unsigned __int64 *v24; // r13
  _QWORD *v25; // rax
  unsigned __int64 v26; // rcx
  struct _KTHREAD *v27; // r14
  unsigned int SessionId; // ecx
  char *p_Process; // rsi
  __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // r8d
  struct _KTHREAD *v33; // r12
  bool v34; // zf
  PEPROCESS v35; // r14
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rsi
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // esi
  volatile LONG *v45; // r12
  unsigned __int64 v46; // r14
  __int64 v47; // rax
  ULONG_PTR v48; // r15
  struct _KTHREAD *v49; // r14
  __int64 v50; // r8
  char *v51; // rbx
  __int64 v52; // rdx
  unsigned int v53; // ecx
  int v54; // r8d
  struct _KTHREAD *v55; // rcx
  PVOID v56; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v61; // eax
  PVOID *v62; // rdx
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // eax
  unsigned int v67; // r14d
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  int v71; // eax
  int v72; // ecx
  __int64 v73; // rsi
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v79; // [rsp+38h] [rbp-D0h]
  __int64 v80; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v81; // [rsp+48h] [rbp-C0h]
  __int64 v82; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v84; // [rsp+60h] [rbp-A8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-A0h]
  struct _KTHREAD *v86; // [rsp+70h] [rbp-98h]
  PEPROCESS Processa; // [rsp+78h] [rbp-90h]
  _OWORD v88[10]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v89; // [rsp+128h] [rbp+20h]
  __int128 v90; // [rsp+138h] [rbp+30h]
  __int64 v91; // [rsp+148h] [rbp+40h]

  LODWORD(v82) = 0;
  v2 = &Process[1].ActiveProcessors.StaticBitmap[26];
  Processa = Process;
  v81 = 0LL;
  v89 = 0LL;
  v91 = 0LL;
  v90 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v86 = CurrentThread;
  v79 = &Process[1].ActiveProcessors.StaticBitmap[26];
  P = 0LL;
  v6 = 0;
  memset(v88, 0, 0x98uLL);
  v7 = *(_QWORD *)(qword_140C51F48 + 8LL * *((unsigned __int16 *)v2 + 87));
  v80 = v7;
  LODWORD(v89) = a2 != 0;
  *((_QWORD *)&v88[1] + 1) = v7;
  if ( (unsigned int)SmStoreExistsForProcess(Process) )
  {
    LODWORD(v88[2]) = -1;
    v6 = 2;
    LODWORD(v89) = v89 | 4;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v7, (unsigned int *)&v82);
  if ( BestOutswapPagefile == 16 )
  {
    v44 = -1073741497;
    goto LABEL_58;
  }
  Pool = (PVOID *)MiAllocatePool(64LL, 80LL, 1129540941LL);
  if ( !Pool )
  {
    v44 = -1073741670;
    goto LABEL_57;
  }
  v6 |= 1u;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v80 + 1152, 0LL);
  SpinLock = (PEX_SPIN_LOCK)(v80 + 1160);
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v80 + 1160));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v2);
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 1 )
    {
      v44 = -1073740682;
    }
    else
    {
      v44 = -1073741791;
      if ( WorkingSetSwapSupport == 2 )
        v44 = -1073741558;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v34 = (v61 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v61;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    goto LABEL_103;
  }
  SharedVm = MiGetSharedVm(v12);
  v14 = SpinLock;
  *(_QWORD *)(SharedVm + 24) = 1LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v14);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v63 = KeGetCurrentIrql();
      if ( v63 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v63 >= 2u )
      {
        v64 = KeGetCurrentPrcb();
        v65 = v64->SchedulerAssist;
        v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v34 = (v66 & v65[5]) == 0;
        v15 = (unsigned int)v66 & v65[5];
        v65[5] = v15;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v64);
      }
    }
  }
  __writecr8(v10);
  while ( 1 )
  {
    v16 = v2[17];
    v81 = v16;
    if ( !v16 )
    {
      v44 = -1073741779;
      goto LABEL_131;
    }
    if ( LODWORD(v88[2]) == -1 )
      goto LABEL_10;
    v67 = v82;
    LODWORD(BugCheckParameter4) = v82;
    v44 = MiReserveWorkingSetSwapSpace(v80, (char *)&v88[2] + 8, v15, BestOutswapPagefile);
    if ( v44 >= 0 )
      break;
    if ( v67 >= 0x10 )
      goto LABEL_131;
    BestOutswapPagefile = v67;
    v44 = MiExtendWorkingSetSwapPagefile(v80, v81, v67);
    if ( v44 < 0 )
      goto LABEL_131;
    v2 = v79;
  }
  v2 = v79;
  v16 = v81;
LABEL_10:
  v17 = MiAllocateWorkingSetSwapSupport(v16);
  *Pool = (PVOID)v17;
  if ( !v17 )
    goto LABEL_115;
  if ( LODWORD(v88[2]) != -1 )
    *(_DWORD *)(v17 + 32) |= 1u;
  v84 = 0LL;
  if ( a2 )
  {
    v68 = v2[18] - v2[19];
    v69 = v2[18];
    v84 = v68;
    if ( v68 > v69 )
    {
      v68 = v2[18];
      v84 = v68;
    }
    if ( v68 )
    {
      v70 = MiAllocateWorkingSetSwapSupport(v68);
      Pool[1] = (PVOID)v70;
      if ( !v70 )
      {
LABEL_115:
        v44 = -1073741670;
LABEL_131:
        v24 = v79;
        goto LABEL_52;
      }
    }
  }
  *(_QWORD *)&v88[0] = *Pool;
  v18 = Pool[1];
  *(_QWORD *)&v88[1] = v2;
  v19 = Processa;
  *((_QWORD *)&v88[0] + 1) = v18;
  if ( Processa[2].Affinity.StaticBitmap[5] )
  {
    v71 = VmCheckLargePageInswap(Processa);
    v72 = v88[9];
    if ( v71 )
      v72 = 1;
    LODWORD(v88[9]) = v72;
  }
  v20 = v86;
  --v86->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&v19[1].Affinity.StaticBitmap[7], 0LL);
  LOBYTE(v20[1].Queue) |= 2u;
  if ( (v19[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED(v20, v19);
    v44 = -1073741558;
    goto LABEL_131;
  }
  --v20->SpecialApcDisable;
  v21 = (ULONG_PTR)&v19[1].Affinity.StaticBitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v19[1].Affinity.StaticBitmap[8], 0LL);
  v22 = *(_QWORD **)&v19[1].Spare2[15];
  if ( v22 )
  {
    do
    {
      v23 = (unsigned __int64)v22;
      v22 = (_QWORD *)*v22;
    }
    while ( v22 );
    v24 = v79;
    while ( v23 )
    {
      if ( !(unsigned int)MiVadMapsLargeImage(v23) && (unsigned int)MiVadSupportsPrivateCommit() )
        MiOutSwapWorkingSet(
          (_DWORD)v79,
          v23,
          *(_DWORD *)(v23 + 24) << 12,
          (*(_DWORD *)(v23 + 28) << 12) | 0xFFF,
          (__int64)v88);
      v25 = *(_QWORD **)(v23 + 8);
      v26 = v23;
      if ( v25 )
      {
        do
        {
          v23 = (unsigned __int64)v25;
          v25 = (_QWORD *)*v25;
        }
        while ( v25 );
      }
      else
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v23 || *(_QWORD *)v23 == v26 )
            break;
          v26 = v23;
        }
      }
    }
  }
  else
  {
    v24 = v79;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v21);
  v27 = KeGetCurrentThread();
  if ( v21 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(v27->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&v27[1].Process;
  v30 = v21 & 0x7FFFFFFFFFFFFFFCLL;
  v31 = 0LL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v30
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v31 = (unsigned int)(v31 + 1);
    p_Process += 96;
    if ( (unsigned int)v31 >= 6 )
      goto LABEL_82;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v31, v30);
      _disable();
    }
    v32 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    v27->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v32 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v27, v21, v32);
    goto LABEL_42;
  }
LABEL_82:
  if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v27, v21, SessionId, 0LL);
  _enable();
LABEL_42:
  v33 = v86;
  v34 = v86->SpecialApcDisable++ == -1;
  if ( v34 && ($CEA84C04E3712D858E5667A507841A2A *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
    KiCheckForKernelApcDelivery();
  v35 = Processa;
  UNLOCK_ADDRESS_SPACE_SHARED(v33, Processa);
  if ( *((_QWORD *)*Pool + 2) < v81 )
  {
    v39 = MiReAllocateWorkingSetSwapSupport(*Pool, v36, v37, v38, BugCheckParameter4);
    if ( v39 )
    {
      ExFreePoolWithTag(*Pool, 0);
      *Pool = (PVOID)v39;
    }
  }
  v40 = Pool[1];
  if ( v40 )
  {
    if ( v40[2] < v84 )
    {
      v73 = MiReAllocateWorkingSetSwapSupport(v40, v36, v37, v38, BugCheckParameter4);
      if ( v73 )
      {
        ExFreePoolWithTag(Pool[1], 0);
        Pool[1] = (PVOID)v73;
      }
    }
  }
  v81 = *((_QWORD *)*Pool + 3);
  MiGetKernelStackSwapSupport((__int64)Pool, (__int64)v35);
  if ( v6 >= 2 )
    P = (PVOID)MiReAllocateWorkingSetSwapSupport(*Pool, v41, v42, v43, BugCheckParameter4);
  v6 |= 4u;
  v44 = 0;
LABEL_52:
  v45 = SpinLock;
  v46 = ExAcquireSpinLockExclusive(SpinLock);
  if ( MiGetWorkingSetSwapSupport(v24) == 1 )
  {
    v47 = MiGetSharedVm(v24);
    if ( v6 < 4 )
    {
      *(_QWORD *)(v47 + 24) = 0LL;
    }
    else
    {
      *(_QWORD *)(v47 + 24) = Pool;
      Pool = 0LL;
      v44 = 0;
    }
  }
  else
  {
    v44 = -1073741558;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v45);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v74 = KeGetCurrentIrql();
      if ( v74 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v74 >= 2u )
      {
        v75 = KeGetCurrentPrcb();
        v76 = v75->SchedulerAssist;
        v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
        v34 = (v77 & v76[5]) == 0;
        v76[5] &= v77;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v75);
      }
    }
  }
  __writecr8(v46);
  MiFreeReservationRuns(v80, (char *)&v88[2] + 8);
  if ( !Pool )
  {
LABEL_57:
    v7 = v80;
    goto LABEL_58;
  }
LABEL_103:
  v62 = Pool;
  v7 = v80;
  MiFreeWorkingSetSwapContext(v80, v62);
LABEL_58:
  if ( (v6 & 1) != 0 )
  {
    v48 = v7 + 1152;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v48);
    v49 = KeGetCurrentThread();
    if ( v48 - qword_140C50630 < 0x8000000000LL )
      v50 = (unsigned int)MmGetSessionIdEx(v49->ApcState.Process);
    else
      v50 = 0xFFFFFFFFLL;
    _disable();
    v51 = (char *)&v49[1].Process;
    v52 = v48 & 0x7FFFFFFFFFFFFFFCLL;
    v53 = 0;
    while ( (*(_QWORD *)v51 & 0x7FFFFFFFFFFFFFFCLL) != v52
         || !v51[18]
         || (*(_DWORD *)v51 & 1) != 0
         || *((_DWORD *)v51 + 2) != (_DWORD)v50 )
    {
      ++v53;
      v51 += 96;
      if ( v53 >= 6 )
        goto LABEL_85;
    }
    v51[18] = 0;
    if ( v51 )
    {
      if ( *(__int64 *)v51 < 0 )
      {
        *v51 |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(v51, v52, v50);
        _disable();
      }
      v54 = *((_DWORD *)v51 + 22);
      *((_DWORD *)v51 + 22) = 0;
      v51[17] = 0;
      *(_QWORD *)v51 = 0LL;
      v49->AbEntrySummary |= 1 << v51[16];
      _enable();
      if ( v54 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v49, v48, v54);
      goto LABEL_73;
    }
LABEL_85:
    if ( (*((_DWORD *)&v49->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v49, v48, (unsigned int)v50, 0LL);
    _enable();
LABEL_73:
    v55 = v86;
    v34 = v86->SpecialApcDisable++ == -1;
    if ( v34 && ($CEA84C04E3712D858E5667A507841A2A *)v55->ApcState.ApcListHead[0].Flink != &v55->152 )
      KiCheckForKernelApcDelivery();
  }
  v56 = P;
  if ( P )
  {
    if ( v6 >= 4 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v56, 0);
  }
  *((_QWORD *)&v89 + 1) = *((_QWORD *)&v88[7] + 1);
  v90 = v88[8];
  LODWORD(v91) = v44;
  *(_QWORD *)&v89 = v81;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v44;
}

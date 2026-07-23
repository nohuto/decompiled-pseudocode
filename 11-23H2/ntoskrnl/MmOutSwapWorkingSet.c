/*
 * XREFs of MmOutSwapWorkingSet @ 0x140342290
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406A6C04 (PspChangeProcessExecutionState.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiVadSupportsPrivateCommit @ 0x140274DE0 (MiVadSupportsPrivateCommit.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402754E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140275550 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadMapsLargeImage @ 0x14027D1D0 (MiVadMapsLargeImage.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiGetKernelStackSwapSupport @ 0x14034209C (MiGetKernelStackSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x1403421B0 (MiFindBestOutswapPagefile.c)
 *     MiOutSwapWorkingSet @ 0x1403429A4 (MiOutSwapWorkingSet.c)
 *     MiGetWorkingSetSwapSupport @ 0x140342C08 (MiGetWorkingSetSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140342C30 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x140342C88 (MiAllocateWorkingSetSwapSupport.c)
 *     SmStoreExistsForProcess @ 0x140344D24 (SmStoreExistsForProcess.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiFreeWorkingSetSwapContext @ 0x14068196C (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1407B73D8 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1407B7488 (EtwTraceWorkingSetSwap.c)
 *     SmStoreSetProcessVaRanges @ 0x1407B750C (SmStoreSetProcessVaRanges.c)
 *     VmCheckLargePageInswap @ 0x1409DC0C4 (VmCheckLargePageInswap.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x140A43444 (MiExtendWorkingSetSwapPagefile.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140A43580 (MiReserveWorkingSetSwapSpace.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  unsigned __int64 *v2; // r15
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v6; // ebx
  __int64 v7; // r15
  unsigned int BestOutswapPagefile; // r13d
  PVOID *Pool; // r12
  __int64 v10; // r14
  struct _KTHREAD *v11; // r15
  __int64 v12; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v14; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  volatile LONG *v18; // r15
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // r14
  __int64 WorkingSetSwapSupport; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  PEPROCESS v27; // r14
  bool v28; // zf
  ULONG_PTR v29; // r14
  struct _KTHREAD *v30; // r15
  __int64 v31; // rsi
  unsigned int v32; // eax
  unsigned int v33; // ecx
  struct _KPRCB *v34; // r8
  signed __int32 *v35; // rdx
  int v36; // eax
  PEPROCESS v37; // r15
  _QWORD *v38; // rax
  unsigned __int64 v39; // rsi
  __int64 v40; // rcx
  _QWORD *v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rsi
  _QWORD *v44; // rcx
  int v45; // esi
  unsigned __int64 v46; // r14
  __int64 v47; // rcx
  _QWORD *SharedVm; // rax
  PVOID v49; // rdi
  signed __int32 v51; // eax
  signed __int32 v52; // eax
  signed __int32 v53; // ett
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  unsigned int v62; // r14d
  __int64 v63; // rax
  int v64; // eax
  int v65; // ecx
  signed __int32 v66; // ett
  __int64 v67; // rsi
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // eax
  unsigned __int64 v72; // [rsp+30h] [rbp-D0h]
  unsigned __int64 *v74; // [rsp+40h] [rbp-C0h]
  __int64 v75; // [rsp+48h] [rbp-B8h]
  __int64 v76; // [rsp+50h] [rbp-B0h]
  unsigned int v77; // [rsp+58h] [rbp-A8h]
  unsigned int v78; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v79; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h]
  PEPROCESS Processa; // [rsp+70h] [rbp-90h]
  _OWORD v82[10]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v83; // [rsp+130h] [rbp+30h]
  __int128 v84; // [rsp+140h] [rbp+40h]
  __int64 v85; // [rsp+150h] [rbp+50h]

  v78 = 0;
  v2 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v72 = 0LL;
  v83 = 0LL;
  v85 = 0LL;
  v84 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Processa = Process;
  v76 = (__int64)CurrentThread;
  v74 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v6 = 0;
  P = 0LL;
  memset(v82, 0, 0x98uLL);
  v7 = *(_QWORD *)(qword_140C673C8 + 8LL * *((unsigned __int16 *)v2 + 87));
  v75 = v7;
  LODWORD(v83) = a2 != 0;
  *((_QWORD *)&v82[1] + 1) = v7;
  if ( (unsigned int)SmStoreExistsForProcess(Process) )
  {
    LODWORD(v82[2]) = -1;
    v6 = 2;
    LODWORD(v83) = v83 | 4;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v7, &v78);
  if ( BestOutswapPagefile != 16 || v6 == 2 )
  {
    Pool = (PVOID *)MiAllocatePool(64, 0x50uLL, 0x43536D4Du);
    if ( Pool )
    {
      v6 |= 1u;
      --*(_WORD *)(v76 + 486);
      v10 = v7 + 1168;
      v11 = KeGetCurrentThread();
      v12 = 0LL;
      _disable();
      AbEntrySummary = v11->AbEntrySummary;
      if ( v11->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(0LL, (__int64)v11)) != 0 )
      {
        _BitScanForward(&v14, AbEntrySummary);
        v77 = v14;
        v11->AbEntrySummary = AbEntrySummary & ~(1 << v14);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v51 = *SchedulerAssist;
          do
          {
            v53 = v51;
            v51 = _InterlockedCompareExchange(SchedulerAssist, v51 & 0xFFDFFFFF, v51);
          }
          while ( v53 != v51 );
          if ( (v51 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        v12 = (__int64)(&v11[1].Process + 12 * v77);
        if ( (unsigned __int64)(v10 - qword_140C659E8) < 0x8000000000LL )
          SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v12 + 8) = SessionId;
        *(_QWORD *)v12 = v10 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, v12, v10);
      if ( v12 )
        *(_BYTE *)(v12 + 18) = 1;
      v18 = (volatile LONG *)(v75 + 1176);
      v19 = v74;
      v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v75 + 1176));
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v74);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v45 = -1073740682;
        }
        else
        {
          v45 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v45 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v18);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v20 <= 0xFu
            && CurrentIrql >= 2u )
          {
            v55 = KeGetCurrentPrcb();
            v56 = v55->SchedulerAssist;
            v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
            v28 = (v57 & v56[5]) == 0;
            v56[5] &= v57;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(v55);
          }
        }
        __writecr8(v20);
        v7 = v75;
      }
      else
      {
        *((_QWORD *)MiGetSharedVm(v22) + 3) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v18);
        if ( (_DWORD)KiIrqlFlags )
        {
          v58 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v58 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v58 >= 2u )
          {
            v59 = KeGetCurrentPrcb();
            v60 = v59->SchedulerAssist;
            v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
            v28 = (v61 & v60[5]) == 0;
            v23 = (unsigned int)v61 & v60[5];
            v60[5] = v23;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(v59);
          }
        }
        __writecr8(v20);
        while ( 1 )
        {
          v24 = v19[17];
          v72 = v24;
          if ( !v24 )
          {
            v45 = -1073741779;
            goto LABEL_55;
          }
          if ( LODWORD(v82[2]) == -1 )
            break;
          v62 = v78;
          v45 = MiReserveWorkingSetSwapSpace(v75, (char *)&v82[2] + 8, v23, BestOutswapPagefile, v78, v24);
          if ( v45 >= 0 )
          {
            v19 = v74;
            v24 = v72;
            break;
          }
          if ( v62 >= 0x10 )
            goto LABEL_55;
          BestOutswapPagefile = v62;
          v45 = MiExtendWorkingSetSwapPagefile(v75, v72, v62);
          if ( v45 < 0 )
            goto LABEL_55;
          v19 = v74;
        }
        v25 = MiAllocateWorkingSetSwapSupport(v24);
        *Pool = (PVOID)v25;
        if ( !v25 )
          goto LABEL_113;
        if ( LODWORD(v82[2]) != -1 )
          *(_DWORD *)(v25 + 32) |= 1u;
        v26 = 0LL;
        if ( !a2 )
          goto LABEL_23;
        v26 = v19[18] - v19[19];
        if ( v26 > v19[18] )
          v26 = v19[18];
        if ( v26 && (v63 = MiAllocateWorkingSetSwapSupport(v26), (Pool[1] = (PVOID)v63) == 0LL) )
        {
LABEL_113:
          v45 = -1073741670;
        }
        else
        {
LABEL_23:
          v27 = Processa;
          v82[0] = *(_OWORD *)Pool;
          v28 = Processa[2].Affinity.StaticBitmap[5] == 0;
          *(_QWORD *)&v82[1] = v19;
          if ( !v28 )
          {
            v64 = VmCheckLargePageInswap(Processa);
            v65 = v82[9];
            if ( v64 )
              v65 = 1;
            LODWORD(v82[9]) = v65;
          }
          LOCK_ADDRESS_SPACE_SHARED(v76, (__int64)v27);
          if ( (v27[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED(v76, (__int64)v27);
            v45 = -1073741558;
          }
          else
          {
            --*(_WORD *)(v76 + 486);
            v29 = (ULONG_PTR)&v27[1].Affinity.StaticBitmap[8];
            v30 = KeGetCurrentThread();
            v31 = 0LL;
            v79 = 0;
            _disable();
            v32 = v30->AbEntrySummary;
            if ( v30->AbEntrySummary || (v32 = KiAbTryReclaimOrphanedEntries(0LL, (__int64)v30)) != 0 )
            {
              _BitScanForward(&v33, v32);
              v79 = v33;
              v30->AbEntrySummary = v32 & ~(1 << v33);
              v34 = KeGetCurrentPrcb();
              v35 = (signed __int32 *)v34->SchedulerAssist;
              if ( v35 )
              {
                _m_prefetchw(v35);
                v52 = *v35;
                do
                {
                  v66 = v52;
                  v52 = _InterlockedCompareExchange(v35, v52 & 0xFFDFFFFF, v52);
                }
                while ( v66 != v52 );
                if ( (v52 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick(v34);
              }
              _enable();
              v31 = (__int64)(&v30[1].Process + 12 * v79);
              if ( v29 - qword_140C659E8 < 0x8000000000LL )
                v36 = MmGetSessionIdEx((__int64)v30->ApcState.Process);
              else
                v36 = -1;
              *(_DWORD *)(v31 + 8) = v36;
              *(_QWORD *)v31 = v29 & 0x7FFFFFFFFFFFFFFCLL;
            }
            if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v29, v31, v29);
            if ( v31 )
              *(_BYTE *)(v31 + 18) = 1;
            v37 = Processa;
            v38 = *(_QWORD **)&Processa[1].Spare2[15];
            if ( v38 )
            {
              do
              {
                v39 = (unsigned __int64)v38;
                v38 = (_QWORD *)*v38;
              }
              while ( v38 );
              do
              {
                if ( !(unsigned int)MiVadMapsLargeImage(v39) && MiVadSupportsPrivateCommit(v40) )
                  MiOutSwapWorkingSet(
                    (_DWORD)v74,
                    v39,
                    *(_DWORD *)(v39 + 24) << 12,
                    (*(_DWORD *)(v39 + 28) << 12) | 0xFFF,
                    (__int64)v82);
                v41 = *(_QWORD **)(v39 + 8);
                v42 = v39;
                if ( v41 )
                {
                  do
                  {
                    v39 = (unsigned __int64)v41;
                    v41 = (_QWORD *)*v41;
                  }
                  while ( v41 );
                }
                else
                {
                  while ( 1 )
                  {
                    v39 = *(_QWORD *)(v39 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( !v39 || *(_QWORD *)v39 == v42 )
                      break;
                    v42 = v39;
                  }
                }
              }
              while ( v39 );
              v37 = Processa;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v29);
            KeAbPostRelease(v29);
            v28 = (*(_WORD *)(v76 + 486))++ == 0xFFFF;
            if ( v28 && *(_QWORD *)(v76 + 152) != v76 + 152 )
              KiCheckForKernelApcDelivery();
            UNLOCK_ADDRESS_SPACE_SHARED(v76, (__int64)v37);
            if ( *((_QWORD *)*Pool + 2) < v72 )
            {
              v43 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
              if ( v43 )
              {
                ExFreePoolWithTag(*Pool, 0);
                *Pool = (PVOID)v43;
              }
            }
            v44 = Pool[1];
            if ( v44 )
            {
              if ( v44[2] < v26 )
              {
                v67 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
                if ( v67 )
                {
                  ExFreePoolWithTag(Pool[1], 0);
                  Pool[1] = (PVOID)v67;
                }
              }
            }
            v72 = *((_QWORD *)*Pool + 3);
            MiGetKernelStackSwapSupport((__int64)Pool, (__int64)v37);
            if ( v6 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*Pool);
            v6 |= 4u;
            v45 = 0;
          }
        }
LABEL_55:
        v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v75 + 1176));
        if ( MiGetWorkingSetSwapSupport(v74) == 1 )
        {
          SharedVm = MiGetSharedVm(v47);
          if ( v6 < 4 )
          {
            SharedVm[3] = 0LL;
          }
          else
          {
            SharedVm[3] = Pool;
            Pool = 0LL;
            v45 = 0;
          }
        }
        else
        {
          v45 = -1073741558;
        }
        v7 = v75;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v75 + 1176));
        if ( (_DWORD)KiIrqlFlags )
        {
          v68 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v68 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v68 >= 2u )
          {
            v69 = KeGetCurrentPrcb();
            v70 = v69->SchedulerAssist;
            v71 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
            v28 = (v71 & v70[5]) == 0;
            v70[5] &= v71;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(v69);
          }
        }
        __writecr8(v46);
        MiFreeReservationRuns(v75, (char *)&v82[2] + 8);
        if ( !Pool )
          goto LABEL_60;
      }
      MiFreeWorkingSetSwapContext(v7, Pool);
    }
    else
    {
      v45 = -1073741670;
    }
LABEL_60:
    CurrentThread = (struct _KTHREAD *)v76;
    goto LABEL_61;
  }
  v45 = -1073741497;
LABEL_61:
  if ( (v6 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 1168), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 1168));
    KeAbPostRelease(v7 + 1168);
    v28 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v28 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  v49 = P;
  if ( P )
  {
    if ( v6 >= 4 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v49, 0);
  }
  *((_QWORD *)&v83 + 1) = *((_QWORD *)&v82[7] + 1);
  v84 = v82[8];
  LODWORD(v85) = v45;
  *(_QWORD *)&v83 = v72;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v45;
}

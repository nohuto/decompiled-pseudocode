/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x14065319C
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x1405CDC2C (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402754E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140275550 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiFindBestOutswapPagefile @ 0x1403421B0 (MiFindBestOutswapPagefile.c)
 *     MiOutSwapWorkingSet @ 0x1403429A4 (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140342C30 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x140342C88 (MiAllocateWorkingSetSwapSupport.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiValidateMemoryRangeEntries @ 0x1407A48AC (MiValidateMemoryRangeEntries.c)
 *     MiFreeReservationRuns @ 0x1407B73D8 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1407B7488 (EtwTraceWorkingSetSwap.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x140A43444 (MiExtendWorkingSetSwapPagefile.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140A43580 (MiReserveWorkingSetSwapSpace.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // rcx
  __int64 v9; // r14
  unsigned int BestOutswapPagefile; // r13d
  __int64 v12; // rcx
  ULONG_PTR v13; // r12
  struct _KTHREAD *v14; // rdi
  __int64 v15; // rbx
  unsigned int AbEntrySummary; // eax
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v18; // ecx
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  int SessionId; // eax
  __int64 v23; // r14
  unsigned int v24; // esi
  __int64 v25; // r9
  __int64 v26; // r13
  int v27; // edi
  struct _KPROCESS *v28; // r14
  bool v29; // zf
  _QWORD *WorkingSetSwapSupport; // rsi
  PEPROCESS v31; // rdi
  ULONG_PTR v32; // rdi
  struct _KTHREAD *v33; // r13
  __int64 v34; // r14
  unsigned int v35; // eax
  unsigned int v36; // ecx
  struct _KPRCB *v37; // r8
  signed __int32 *v38; // rdx
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  int v41; // eax
  unsigned __int64 *v42; // r14
  unsigned __int64 v43; // r13
  __int64 v44; // r12
  __int64 **Address; // rax
  int v46; // ecx
  __int64 v47; // rdi
  unsigned int v48; // [rsp+30h] [rbp-D0h]
  unsigned int v49; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v50; // [rsp+38h] [rbp-C8h]
  PEPROCESS Processa; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v56; // [rsp+78h] [rbp-88h]
  ULONG_PTR v57; // [rsp+80h] [rbp-80h]
  _QWORD *v58; // [rsp+88h] [rbp-78h]
  _OWORD v59[10]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v60; // [rsp+130h] [rbp+30h]
  __int128 v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+50h]

  v52 = 0LL;
  v49 = 0;
  v62 = 0LL;
  Processa = Process;
  v60 = 0LL;
  v54 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v61 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = Process[1].IdealProcessor[25];
  v56 = a2;
  v58 = a4;
  v55 = a3;
  v9 = *(_QWORD *)(qword_140C673C8 + 8 * v8);
  v53 = v9;
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, &v49);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v60) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v52);
  memset(v59, 0, 0x98uLL);
  --CurrentThread->SpecialApcDisable;
  v13 = v9 + 1168;
  v57 = v9 + 1168;
  v14 = KeGetCurrentThread();
  v15 = 0LL;
  _disable();
  AbEntrySummary = v14->AbEntrySummary;
  if ( v14->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v12, (__int64)v14)) != 0 )
  {
    _BitScanForward(&v18, AbEntrySummary);
    v48 = v18;
    v14->AbEntrySummary = AbEntrySummary & ~(1 << v18);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v20 = *SchedulerAssist;
      do
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange(SchedulerAssist, v20 & 0xFFDFFFFF, v20);
      }
      while ( v21 != v20 );
      if ( (v20 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v15 = (__int64)(&v14[1].Process + 12 * v48);
    if ( v13 - qword_140C659E8 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v14->ApcState.Process);
    *(_DWORD *)(v15 + 8) = SessionId;
    *(_QWORD *)v15 = v13 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13, v15, v13);
  if ( v15 )
    *(_BYTE *)(v15 + 18) = 1;
  v23 = v52;
  v24 = v49;
  while ( 1 )
  {
    v25 = BestOutswapPagefile;
    v26 = v53;
    v27 = MiReserveWorkingSetSwapSpace(v53, (char *)&v59[2] + 8, CurrentPrcb, v25, v24, v23);
    if ( v27 >= 0 )
      break;
    if ( v24 < 0x10 )
    {
      BestOutswapPagefile = v24;
      v27 = MiExtendWorkingSetSwapPagefile(v53, v23, v24);
      if ( v27 >= 0 )
        continue;
    }
    goto LABEL_22;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v23);
  if ( !WorkingSetSwapSupport )
  {
    v27 = -1073741670;
LABEL_22:
    v28 = Processa;
    goto LABEL_23;
  }
  v31 = Processa;
  *(_QWORD *)&v59[0] = WorkingSetSwapSupport;
  *(_QWORD *)&v59[1] = v54;
  *((_QWORD *)&v59[1] + 1) = v26;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Processa);
  --CurrentThread->SpecialApcDisable;
  v32 = (ULONG_PTR)&v31[1].Affinity.StaticBitmap[8];
  v33 = KeGetCurrentThread();
  v34 = 0LL;
  v50 = 0;
  _disable();
  v35 = v33->AbEntrySummary;
  if ( v33->AbEntrySummary || (v35 = KiAbTryReclaimOrphanedEntries(0LL, (__int64)v33)) != 0 )
  {
    _BitScanForward(&v36, v35);
    v50 = v36;
    v33->AbEntrySummary = v35 & ~(1 << v36);
    v37 = KeGetCurrentPrcb();
    v38 = (signed __int32 *)v37->SchedulerAssist;
    if ( v38 )
    {
      _m_prefetchw(v38);
      v39 = *v38;
      do
      {
        v40 = v39;
        v39 = _InterlockedCompareExchange(v38, v39 & 0xFFDFFFFF, v39);
      }
      while ( v40 != v39 );
      if ( (v39 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v37);
    }
    _enable();
    v34 = (__int64)(&v33[1].Process + 12 * v50);
    if ( v32 - qword_140C659E8 >= 0x8000000000LL )
      v41 = -1;
    else
      v41 = MmGetSessionIdEx((__int64)v33->ApcState.Process);
    *(_DWORD *)(v34 + 8) = v41;
    *(_QWORD *)v34 = v32 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v32, v34, v32);
  if ( v34 )
    *(_BYTE *)(v34 + 18) = 1;
  v42 = v56;
  v43 = (unsigned __int64)&v56[2 * v55];
  if ( (unsigned __int64)v56 < v43 )
  {
    v44 = (__int64)v54;
    do
    {
      Address = MiLocateAddress(*v42);
      if ( Address )
      {
        v46 = *((_DWORD *)Address + 12);
        if ( (v46 & 0x70) == 0
          && (v46 & 0x200000) != 0
          && (v46 & 0x800000) == 0
          && (v46 & 0x180000u) < 0x100000
          && (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32)) >= (*v42 + v42[1] - 1) >> 12 )
        {
          MiOutSwapWorkingSet(v44, (__int64)Address, *v42, *v42 + v42[1] - 1, (__int64)v59);
        }
      }
      v42 += 2;
    }
    while ( (unsigned __int64)v42 < v43 );
    v13 = v57;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v32);
  KeAbPostRelease(v32);
  v29 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v29 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v28 = Processa;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Processa);
  if ( WorkingSetSwapSupport[2] < v52 )
  {
    v47 = MiReAllocateWorkingSetSwapSupport((__int64)WorkingSetSwapSupport);
    if ( v47 )
    {
      ExFreePoolWithTag(WorkingSetSwapSupport, 0);
      WorkingSetSwapSupport = (_QWORD *)v47;
    }
  }
  v27 = 0;
  v52 = WorkingSetSwapSupport[3];
  *v58 = WorkingSetSwapSupport;
LABEL_23:
  MiFreeReservationRuns(v53, (char *)&v59[2] + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v13);
  KeAbPostRelease(v13);
  v29 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v29 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  *(_QWORD *)&v60 = v52;
  *((_QWORD *)&v60 + 1) = *((_QWORD *)&v59[7] + 1);
  v61 = v59[8];
  LODWORD(v62) = v27;
  EtwTraceWorkingSetSwap(v28);
  return (unsigned int)v27;
}

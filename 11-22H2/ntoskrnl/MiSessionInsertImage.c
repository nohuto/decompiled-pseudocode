/*
 * XREFs of MiSessionInsertImage @ 0x14020AE84
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140696090 (MiGetSystemAddressForImage.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B13C (MiGetSessionVm.c)
 *     MiControlAreaRequiresCharge @ 0x140214CE4 (MiControlAreaRequiresCharge.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiChargeCommit @ 0x1402763A0 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x140286D54 (MiGetSharedVm.c)
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     MiReferenceActiveSubsection @ 0x140288C80 (MiReferenceActiveSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A1D0 (MiUnlockWorkingSetExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x140290AF8 (MmLockLoadedModuleListExclusive.c)
 *     MiManageSubsectionView @ 0x1402A03E0 (MiManageSubsectionView.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140625D6C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiBytesToMapSystemImage @ 0x140696AE4 (MiBytesToMapSystemImage.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionInsertImage(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  __int64 Pool; // rbp
  unsigned __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r13d
  __int64 SharedVm; // rbx
  __int64 *v14; // rbx
  char v15; // r15
  __int64 *v16; // rax
  __int64 v17; // rdx
  unsigned __int8 v18; // bl
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int8 v22; // bl
  int active; // ebx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v32; // eax
  __int64 SessionVm; // [rsp+20h] [rbp-F8h]
  __int64 v34; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v35; // [rsp+30h] [rbp-E8h]
  _QWORD v36[27]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+130h] [rbp+18h] BYREF
  KIRQL v39; // [rsp+138h] [rbp+20h]

  v38 = a3;
  v4 = 0;
  LOBYTE(v38) = 0;
  memset(v36, 0, 0x98uLL);
  v35 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  v5 = *(_QWORD *)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(v35 + 366));
  SessionVm = MiGetSessionVm();
  Pool = MiAllocatePool(64LL, 96LL, 1766354253LL);
  if ( !Pool )
    return 3221225495LL;
  v7 = *(unsigned int *)(*(_QWORD *)a2 + 8LL);
  if ( *(_DWORD *)(*(_QWORD *)a2 + 8LL) && !(unsigned int)MiChargeCommit(v5, (unsigned int)v7, 0LL) )
  {
    active = -1073741670;
LABEL_29:
    ExFreePoolWithTag((PVOID)Pool, 0);
    return (unsigned int)active;
  }
  v34 = MiBytesToMapSystemImage(v7 << 12);
  v8 = MiControlAreaRequiresCharge(a2, 2LL);
  v12 = v8;
  if ( !v8 )
  {
    MiReturnCommit(v5, v7);
    active = -1073740277;
    goto LABEL_29;
  }
  if ( v8 == 2 )
  {
    active = MiReferenceActiveSubsection(a2 + 128);
    if ( active < 0 )
    {
      MiReturnCommit(v5, v7);
      goto LABEL_29;
    }
  }
  SharedVm = MiGetSharedVm(SessionVm, v9, v10, v11);
  v39 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  MmLockLoadedModuleListExclusive(&v38);
  v14 = *(__int64 **)(v35 + 64);
  v15 = 0;
  if ( !v14 )
  {
LABEL_19:
    memset((void *)Pool, 0, 0x60uLL);
    *(_QWORD *)(Pool + 40) = a1 | 3;
    *(_QWORD *)(Pool + 72) = v7;
    *(_QWORD *)(Pool + 48) = a1 + v34 - 1;
    *(_DWORD *)(Pool + 60) = 1;
    *(_DWORD *)(Pool + 56) = *(_DWORD *)(v35 + 8);
    *(_QWORD *)(Pool + 80) = a2;
    *(_QWORD *)(Pool + 88) = -2LL;
    if ( v12 == 2 )
      *(_BYTE *)(Pool + 65) = 1;
    LOBYTE(v20) = v15;
    RtlAvlInsertNodeEx(v35 + 64, v14, v20, Pool);
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    if ( (_DWORD)KiIrqlFlags
      && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
      && CurrentIrql <= 0xFu )
    {
      v22 = v38;
      if ( (unsigned __int8)v38 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = v38;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
        v28 = (v32 & SchedulerAssist[5]) == 0;
        v21 = (unsigned int)v32 & SchedulerAssist[5];
        SchedulerAssist[5] = v21;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v22 = v38;
    }
    __writecr8(v22);
    LOBYTE(v21) = v39;
    MiUnlockWorkingSetExclusive(SessionVm, v21);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 40), v7);
    v36[0] = a2;
    MiManageSubsectionView(v36, Pool + 24, 3LL);
    return v4;
  }
  while ( a1 > v14[6] )
  {
    v16 = (__int64 *)v14[1];
    if ( !v16 )
    {
      v15 = 1;
      goto LABEL_19;
    }
LABEL_9:
    v14 = v16;
  }
  if ( a1 < (v14[5] & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v16 = (__int64 *)*v14;
    if ( !*v14 )
      goto LABEL_19;
    goto LABEL_9;
  }
  ++*((_DWORD *)v14 + 15);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( (_DWORD)KiIrqlFlags && (v24 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0) && v24 <= 0xFu )
  {
    v18 = v38;
    if ( (unsigned __int8)v38 <= 0xFu && v24 >= 2u )
    {
      v25 = KeGetCurrentPrcb();
      v26 = v25->SchedulerAssist;
      v18 = v38;
      v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
      v28 = (v27 & v26[5]) == 0;
      v17 = (unsigned int)v27 & v26[5];
      v26[5] = v17;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(v25);
    }
  }
  else
  {
    v18 = v38;
  }
  __writecr8(v18);
  LOBYTE(v17) = v39;
  MiUnlockWorkingSetExclusive(SessionVm, v17);
  v4 = 272;
  ExFreePoolWithTag((PVOID)Pool, 0);
  MiReturnCommit(v5, v7);
  if ( v12 == 2 )
    MiReturnCrossPartitionControlAreaCharges(a2);
  return v4;
}

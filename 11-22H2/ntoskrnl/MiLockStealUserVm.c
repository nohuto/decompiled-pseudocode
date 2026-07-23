/*
 * XREFs of MiLockStealUserVm @ 0x1403BD8B8
 * Callers:
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x140215FC0 (MiGetTopLevelPfn.c)
 *     MiLocateAddress @ 0x140217260 (MiLocateAddress.c)
 *     MiPrepareAttachThread @ 0x1402178D0 (MiPrepareAttachThread.c)
 *     MiFastLockLeafPageTable @ 0x140237260 (MiFastLockLeafPageTable.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiLockLowestValidPageTable @ 0x14025A170 (MiLockLowestValidPageTable.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140286D54 (MiGetSharedVm.c)
 *     MiUnlockVadTree @ 0x140287758 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028A7A0 (MiLockVadTree.c)
 *     MiFillPteHierarchy @ 0x14028ADD0 (MiFillPteHierarchy.c)
 *     MiCheckSlabPfnBitmap @ 0x140324550 (MiCheckSlabPfnBitmap.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x140348BF8 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiVadPagesTradable @ 0x14035193C (MiVadPagesTradable.c)
 *     KeForceAttachProcess @ 0x140352F38 (KeForceAttachProcess.c)
 *     MiSmallVaStillMapsFrame @ 0x1403A88A0 (MiSmallVaStillMapsFrame.c)
 *     MiUnlockStealVm @ 0x1403BD420 (MiUnlockStealVm.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRotatedToFrameBuffer @ 0x140632EC4 (MiRotatedToFrameBuffer.c)
 *     MiClusterVadActive @ 0x140669F18 (MiClusterVadActive.c)
 */

__int64 MiLockStealUserVm(__int64 a1, ULONG_PTR a2, unsigned __int8 a3, ...)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // r12
  unsigned int v7; // r14d
  unsigned __int64 v8; // r13
  __int64 TopLevelPfn; // rax
  unsigned __int64 v10; // r15
  volatile LONG *SharedVm; // rbx
  char v12; // al
  __int64 **Address; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // r12
  __int64 v17; // r9
  __int64 v18; // r10
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // cl
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r8
  int v29; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v33; // eax
  unsigned __int64 valid; // rax
  unsigned int v35; // ecx
  __int64 v36; // [rsp+20h] [rbp-40h]
  __int128 v37; // [rsp+28h] [rbp-38h] BYREF
  __int64 v38; // [rsp+38h] [rbp-28h]
  _OWORD v39[2]; // [rsp+40h] [rbp-20h] BYREF
  int v41; // [rsp+A8h] [rbp+48h]
  unsigned __int64 v42; // [rsp+B8h] [rbp+58h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h]
  unsigned __int64 v44; // [rsp+C0h] [rbp+60h] BYREF
  va_list va1; // [rsp+C0h] [rbp+60h]
  va_list va2; // [rsp+C8h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v42 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v44 = va_arg(va2, _QWORD);
  v3 = v44;
  v38 = 0LL;
  v4 = a3;
  v37 = 0LL;
  v6 = (__int64)(v42 << 25) >> 16;
  LODWORD(v44) = v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL;
  v7 = 2;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL) == v8 )
    ++dword_140C13684;
  TopLevelPfn = MiGetTopLevelPfn(a2);
  v10 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  v36 = v10 + 1664;
  if ( TopLevelPfn != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)v10 == PsIdleProcess )
  {
    ++dword_140C136D4;
    goto LABEL_49;
  }
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL) == v8 && (*(_DWORD *)(v10 + 2172) & 0x1000) != 0 )
  {
    ++dword_140C136D0;
LABEL_49:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_51;
  }
  if ( (_KPROCESS *)v10 == KeGetCurrentThread()->ApcState.Process )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v4 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v25 = (v33 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v33;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
LABEL_13:
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 24) = v36;
    if ( (_DWORD)v44 )
    {
      *(_BYTE *)(v3 + 37) |= 1u;
      SharedVm = (volatile LONG *)MiGetSharedVm(v36);
      v12 = ExAcquireSpinLockExclusive(SharedVm);
      *((_DWORD *)SharedVm + 1) = 0;
    }
    else
    {
      v12 = MiLockWorkingSetShared(v36);
    }
    *(_BYTE *)(v3 + 36) = v12;
    if ( (*(_DWORD *)(v3 + 8) & 8) != 0 )
    {
      Address = 0LL;
    }
    else
    {
      MiLockVadTree(1);
      Address = MiLocateAddress(v6);
      MiUnlockVadTree(1, 0x11u);
      if ( !Address )
      {
        ++dword_140C136E0;
LABEL_24:
        MiUnlockStealVm(v3, v14);
        ++dword_140C136A0;
        return v7;
      }
      if ( !(unsigned int)MiVadPagesTradable((__int64)Address) )
      {
        if ( ((_DWORD)Address[6] & 0x70) != 0x40 )
          goto LABEL_76;
        *(_DWORD *)(v3 + 8) |= 0x800u;
      }
    }
    if ( (_DWORD)v44 )
    {
      if ( !MiSmallVaStillMapsFrame(v6, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) )
      {
        ++dword_140C136EC;
        goto LABEL_24;
      }
      v15 = v42;
    }
    else
    {
      v44 = 0LL;
      if ( (unsigned int)MiFastLockLeafPageTable(v36, v6, 0)
        && (memset(v39, 0, sizeof(v39)),
            MiFillPteHierarchy(v6, (unsigned __int64 *)v39),
            v19 = *((_QWORD *)v39 + v18),
            v14 = (int)v18 - 1,
            v20 = *((_QWORD *)v39 + v14),
            v44 = v20,
            v19) )
      {
        v15 = v42;
      }
      else
      {
        v15 = v42;
        valid = MiLockLowestValidPageTable(v36, v42, (unsigned __int64 *)va1, v17);
        v20 = v44;
        v19 = valid;
      }
      *(_QWORD *)(v3 + 40) = v19;
      if ( v20 != v15 )
        goto LABEL_24;
      v42 = MI_READ_PTE_LOCK_FREE(v20);
      if ( (v42 & 1) == 0
        || (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)va) >> 12) & 0xFFFFFFFFFFLL) != v8 )
      {
        goto LABEL_24;
      }
    }
    if ( v8 > qword_140C65CA0 )
      goto LABEL_24;
    if ( !_bittest64((const signed __int64 *)(16 * ((__int64)(a2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL), 0x36u) )
      goto LABEL_24;
    v14 = *(_QWORD *)(a2 + 40);
    if ( *(_QWORD *)(qword_140C674C8 + 8 * (((unsigned __int64)v14 >> 43) & 0x3FF)) != a1
      || v14 < 0
      || (v14 & 0x20000000000000LL) != 0
      || (unsigned int)MiCheckSlabPfnBitmap(a2, 1LL, 0) )
    {
      goto LABEL_24;
    }
    if ( (*(_DWORD *)v3 & 0x800000) != 0 )
    {
      if ( Address )
      {
        v35 = *((_DWORD *)Address + 12);
        if ( MiVadPageSizes[(v35 >> 19) & 3] == 16
          && (v35 & 0x200000) != 0
          && (unsigned int)MiClusterVadActive(Address, a2, v3 + 120) )
        {
          ++dword_140C136E4;
          goto LABEL_77;
        }
      }
    }
    if ( (*(_DWORD *)(v3 + 8) & 0x800) == 0 || !(unsigned int)MiRotatedToFrameBuffer(v15) )
      return 1LL;
LABEL_76:
    ++dword_140C136E0;
LABEL_77:
    v7 = 0;
    goto LABEL_24;
  }
  if ( !MiTryToAcquireExpansionLockAtDpc((__int64)&v37) )
  {
    ++dword_140C136D8;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_51:
    if ( (_DWORD)KiIrqlFlags )
    {
      v21 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v25 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
    __writecr8(v4);
    return 0LL;
  }
  v41 = MiPrepareAttachThread(v10, v10 + 1664);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v37);
  if ( (_DWORD)KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v26 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v26 >= 2u )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v25 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
  }
  __writecr8(v4);
  if ( v41 )
  {
    *(_QWORD *)(v3 + 64) = v10 + 1664;
    KeForceAttachProcess((_KPROCESS *)v10, (_OWORD *)(v3 + 72), 0);
    goto LABEL_13;
  }
  ++dword_140C136DC;
  return 0LL;
}

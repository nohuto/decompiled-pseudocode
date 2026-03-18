/*
 * XREFs of MiLockStealUserVm @ 0x1402EACBC
 * Callers:
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 * Callees:
 *     KeForceAttachProcess @ 0x1402393FC (KeForceAttachProcess.c)
 *     MiRotatedToFrameBuffer @ 0x1402433D0 (MiRotatedToFrameBuffer.c)
 *     MiSmallVaStillMapsFrame @ 0x14024F014 (MiSmallVaStillMapsFrame.c)
 *     MiGetTopLevelPfn @ 0x14026B1C0 (MiGetTopLevelPfn.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiPrepareAttachThread @ 0x14027D9E8 (MiPrepareAttachThread.c)
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiUnlockStealVm @ 0x1402EA5E4 (MiUnlockStealVm.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1402EB0E0 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     MiVadPagesTradable @ 0x14031285C (MiVadPagesTradable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x14031D9B0 (MiFastLockLeafPageTable.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiFillPteHierarchy @ 0x140352E50 (MiFillPteHierarchy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiClusterVadActive @ 0x1405C3684 (MiClusterVadActive.c)
 */

__int64 MiLockStealUserVm(__int64 a1, ULONG_PTR a2, unsigned __int8 a3, ...)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // r13
  unsigned int v7; // r14d
  unsigned __int64 v8; // r12
  __int64 TopLevelPfn; // rax
  unsigned __int64 v10; // r15
  char v11; // al
  __int64 Address; // rbx
  __int64 v13; // r10
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  volatile LONG *SharedVm; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r8
  int v32; // eax
  unsigned __int64 valid; // rax
  unsigned int v34; // ecx
  __int64 v35; // [rsp+20h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-38h] BYREF
  _OWORD v37[2]; // [rsp+40h] [rbp-20h] BYREF
  int v39; // [rsp+A8h] [rbp+48h]
  unsigned __int64 v40; // [rsp+B8h] [rbp+58h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h]
  unsigned __int64 v42; // [rsp+C0h] [rbp+60h] BYREF
  va_list va1; // [rsp+C0h] [rbp+60h]
  va_list va2; // [rsp+C8h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v40 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  v3 = v42;
  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = (__int64)(v40 << 25) >> 16;
  LODWORD(v42) = v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL;
  v7 = 2;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL) == v8 )
    ++dword_140C29CE4;
  TopLevelPfn = MiGetTopLevelPfn(a2);
  v10 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  v35 = v10 + 1664;
  if ( TopLevelPfn != a2 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (PVOID)v10 == PsIdleProcess )
  {
    ++dword_140C29D3C;
    goto LABEL_52;
  }
  if ( (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL) == v8 && (*(_DWORD *)(v10 + 2172) & 0x1000) != 0 )
  {
    ++dword_140C29D34;
LABEL_52:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_48:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v24 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    return 0LL;
  }
  if ( (_KPROCESS *)v10 == KeGetCurrentThread()->ApcState.Process )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v24 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
    }
    __writecr8(v4);
LABEL_14:
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 24) = v35;
    if ( (_DWORD)v42 )
    {
      *(_BYTE *)(v3 + 37) |= 1u;
      SharedVm = (volatile LONG *)MiGetSharedVm(v35);
      v11 = ExAcquireSpinLockExclusive(SharedVm);
      *((_DWORD *)SharedVm + 1) = 0;
    }
    else
    {
      v11 = MiLockWorkingSetShared(v35);
    }
    *(_BYTE *)(v3 + 36) = v11;
    if ( (*(_DWORD *)(v3 + 8) & 8) != 0 )
    {
      Address = 0LL;
    }
    else
    {
      MiLockVadTree(1LL);
      Address = MiLocateAddress(v6);
      MiUnlockVadTree(1, 0x11u);
      if ( !Address )
      {
        ++dword_140C29D48;
        goto LABEL_36;
      }
      if ( !(unsigned int)MiVadPagesTradable(Address) )
      {
        if ( (*(_BYTE *)(Address + 48) & 0x70) != 0x40 )
          goto LABEL_75;
        *(_DWORD *)(v3 + 8) |= 0x800u;
      }
    }
    if ( !(_DWORD)v42 )
    {
      v42 = 0LL;
      if ( (unsigned int)MiFastLockLeafPageTable(v35, v6, 0LL)
        && (memset(v37, 0, sizeof(v37)),
            MiFillPteHierarchy(v6, v37),
            v14 = *((_QWORD *)v37 + v13),
            v15 = *((_QWORD *)v37 + (int)v13 - 1),
            v42 = v15,
            v14) )
      {
        v16 = v40;
      }
      else
      {
        v16 = v40;
        valid = MiLockLowestValidPageTable(v35, v40, (unsigned __int64 *)va1);
        v15 = v42;
        v14 = valid;
      }
      *(_QWORD *)(v3 + 40) = v14;
      if ( v15 != v16 )
        goto LABEL_36;
      v40 = MI_READ_PTE_LOCK_FREE(v15);
      if ( (v40 & 1) == 0
        || (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64 *)va) >> 12) & 0xFFFFFFFFFFLL) != v8 )
      {
        goto LABEL_36;
      }
      goto LABEL_26;
    }
    if ( MiSmallVaStillMapsFrame(v6, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4)) )
    {
      v16 = v40;
LABEL_26:
      if ( v8 > qword_140C50840 )
        goto LABEL_36;
      if ( (*(_QWORD *)(16 * ((__int64)(a2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
        goto LABEL_36;
      v17 = *(_QWORD *)(a2 + 40);
      if ( *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v17 >> 43) & 0x3FF)) != a1
        || v17 < 0
        || (v17 & 0x20000000000000LL) != 0
        || MiIsPfnFromSlabAllocation(a2) )
      {
        goto LABEL_36;
      }
      if ( (*(_DWORD *)v3 & 0x800000) != 0 )
      {
        if ( Address )
        {
          v34 = *(_DWORD *)(Address + 48);
          if ( MiVadPageSizes[(v34 >> 19) & 3] == 16
            && (v34 & 0x200000) != 0
            && (unsigned int)MiClusterVadActive(Address, a2, v3 + 120) )
          {
            ++dword_140C29D4C;
            goto LABEL_76;
          }
        }
      }
      if ( (*(_DWORD *)(v3 + 8) & 0x800) == 0 || !MiRotatedToFrameBuffer(v16) )
        return 1LL;
LABEL_75:
      ++dword_140C29D48;
LABEL_76:
      v7 = 0;
      goto LABEL_36;
    }
    ++dword_140C29D54;
LABEL_36:
    MiUnlockStealVm(v3);
    ++dword_140C29D04;
    return v7;
  }
  if ( !(unsigned int)MiTryToAcquireExpansionLockAtDpc(&LockHandle) )
  {
    ++dword_140C29D40;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_48;
  }
  v39 = MiPrepareAttachThread(v10, v10 + 1664);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v24 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
  }
  __writecr8(v4);
  if ( v39 )
  {
    *(_QWORD *)(v3 + 64) = v10 + 1664;
    KeForceAttachProcess(v10, v3 + 72);
    goto LABEL_14;
  }
  ++dword_140C29D44;
  return 0LL;
}

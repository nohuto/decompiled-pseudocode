/*
 * XREFs of IopCheckDeviceAndDriver @ 0x1402AF020
 * Callers:
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403AC964 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v5; // rcx
  signed __int64 *v6; // rdx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  volatile signed __int64 **v10; // rdi
  __int64 v11; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int8 v17; // cl
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v19; // r9
  int v20; // edx
  bool v21; // zf
  signed __int32 v22[8]; // [rsp+0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v14) = 4;
    else
      v14 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v14;
  }
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, *((_QWORD *)v5 + 1));
  }
  else
  {
    v6 = (signed __int64 *)_InterlockedExchange64(*((volatile __int64 **)v5 + 1), (__int64)v5);
    if ( v6 )
      KxWaitForLockOwnerShip((signed __int64)v5, v6);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v7 = *(_DWORD *)(a2 + 48), (v7 & 0x80u) != 0) )
  {
    v9 = -1073741810;
  }
  else if ( (v7 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    v8 = *(_DWORD *)(a2 + 4) + 1;
    *(_DWORD *)(a2 + 4) = v8;
    if ( v8 <= 0 )
    {
      v16 = *(_QWORD *)(a2 + 8);
      if ( v16 )
      {
        IoAddTriageDumpDataBlock(v16, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, *(int *)(a2 + 4));
    }
    v9 = 0;
  }
  else
  {
    v9 = -1073741790;
  }
  v10 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
    goto LABEL_13;
  }
  _m_prefetchw(v10);
  v11 = (__int64)*v10;
  if ( !*v10 )
  {
    if ( v10 == (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
      goto LABEL_13;
    v11 = KxWaitForLockChainValid(v10);
  }
  *v10 = 0LL;
  v15 = (__int64)v10[1];
  if ( (((unsigned __int8)v15 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), v15)) & 4) != 0 )
  {
    _InterlockedOr(v22, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v11 + 8) >> 5) & 0x7F], 0LL));
  }
LABEL_13:
  if ( (_DWORD)KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v21 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v9;
}

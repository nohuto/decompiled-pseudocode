/*
 * XREFs of IopDereferenceVpbAndFree @ 0x140319D70
 * Callers:
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IoVerifyVolume @ 0x140947760 (IoVerifyVolume.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferenceVpbAndFree(__int64 a1)
{
  void *v1; // rbp
  unsigned __int8 CurrentIrql; // si
  char *v4; // rcx
  signed __int64 *v5; // rdx
  bool v6; // zf
  volatile signed __int64 **v7; // rdi
  __int64 v8; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int8 v12; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  signed __int32 v16[8]; // [rsp+0h] [rbp-38h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v10) = 4;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, *((_QWORD *)v4 + 1));
  }
  else
  {
    v5 = (signed __int64 *)_InterlockedExchange64(*((volatile __int64 **)v4 + 1), (__int64)v4);
    if ( v5 )
      KxWaitForLockOwnerShip((signed __int64)v4, v5);
  }
  v6 = (*(_DWORD *)(a1 + 28))-- == 1;
  if ( v6 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) != a1 && (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v1 = (void *)a1;
  v7 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v7, retaddr);
    goto LABEL_9;
  }
  _m_prefetchw(v7);
  v8 = (__int64)*v7;
  if ( !*v7 )
  {
    if ( v7 == (volatile signed __int64 **)_InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7) )
      goto LABEL_9;
    v8 = KxWaitForLockChainValid(v7);
  }
  *v7 = 0LL;
  v11 = (__int64)v7[1];
  if ( (((unsigned __int8)v11 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v8 + 8), v11)) & 4) != 0 )
  {
    _InterlockedOr(v16, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v8 + 8) >> 5) & 0x7F], 0LL));
  }
LABEL_9:
  if ( (_DWORD)KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v6 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}

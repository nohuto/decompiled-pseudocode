/*
 * XREFs of IopCheckVpbMounted @ 0x1402AF410
 * Callers:
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     IopDecrementDeviceObjectRef @ 0x1402AFD80 (IopDecrementDeviceObjectRef.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403AC964 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     IopMountVolume @ 0x140701598 (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
  KIRQL CurrentIrql; // bp
  char *v7; // rcx
  signed __int64 *v8; // rdx
  ULONG_PTR v9; // rdi
  int v10; // eax
  volatile signed __int64 **v11; // rsi
  __int64 v12; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  KIRQL v18; // al
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int8 v21; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  signed __int32 v26[8]; // [rsp+0h] [rbp-58h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v28; // [rsp+68h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v15) = 4;
    else
      v15 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v15;
  }
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, *((_QWORD *)v7 + 1));
  }
  else
  {
    v8 = (signed __int64 *)_InterlockedExchange64(*((volatile __int64 **)v7 + 1), (__int64)v7);
    if ( v8 )
      KxWaitForLockOwnerShip((signed __int64)v7, v8);
  }
  v9 = *(_QWORD *)(a2 + 56);
  if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
  {
LABEL_6:
    if ( (*(_BYTE *)(v9 + 4) & 2) != 0 )
    {
      *a4 = -1073741790;
      v9 = 0LL;
    }
    else
    {
      v10 = *(_DWORD *)(v9 + 28) + 1;
      *(_DWORD *)(v9 + 28) = v10;
      if ( v10 <= 0 )
      {
        v19 = *(_QWORD *)(v9 + 8);
        if ( v19 )
        {
          IoAddTriageDumpDataBlock(v19, (PVOID)0x150);
          v20 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL);
          if ( v20 )
          {
            IoAddTriageDumpDataBlock(v20, (PVOID)0x150);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL) + 56LL));
          }
        }
        KeBugCheckEx(0x18u, 0LL, v9, 7uLL, *(unsigned int *)(v9 + 28));
      }
    }
    v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(v11);
      v12 = (__int64)*v11;
      if ( !*v11 )
      {
        if ( v11 == (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
          goto LABEL_11;
        v12 = KxWaitForLockChainValid(v11);
      }
      *v11 = 0LL;
      v16 = (__int64)v11[1];
      if ( (((unsigned __int8)v16 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v12 + 8), v16)) & 4) != 0 )
      {
        _InterlockedOr(v26, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v12 + 8) >> 5) & 0x7F], 0LL));
      }
      goto LABEL_11;
    }
    KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
LABEL_11:
    if ( (_DWORD)KiIrqlFlags )
    {
      v21 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v23 = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    if ( !v9 )
      IopDecrementDeviceObjectRef(a2);
    return v9;
  }
  while ( 1 )
  {
    KeReleaseQueuedSpinLock(9uLL, CurrentIrql);
    v28 = 0LL;
    v17 = IopMountVolume(a2, (__int64)&v28);
    *a4 = v17;
    if ( v17 < 0 || v17 == 192 || v17 == 257 )
      break;
    result = v28;
    if ( v28 )
      return result;
    v18 = KeAcquireQueuedSpinLock(9uLL);
    v9 = *(_QWORD *)(a2 + 56);
    CurrentIrql = v18;
    if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
      goto LABEL_6;
  }
  IopDecrementDeviceObjectRef(a2);
  result = 0LL;
  if ( *a4 >= 0 )
    *a4 = -1073741806;
  return result;
}

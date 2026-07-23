/*
 * XREFs of ViFlushZeroMapRegisterBaseWcbs @ 0x1405CE9EC
 * Callers:
 *     VfPutDmaAdapter @ 0x140AC8280 (VfPutDmaAdapter.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6B40 (ExFreeToNPagedLookasideList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140AC558C (SUBTRACT_MAP_REGISTERS.c)
 */

void __fastcall ViFlushZeroMapRegisterBaseWcbs(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  bool v7; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  _QWORD *v12; // rax

  v1 = (volatile signed __int64 *)(a1 + 176);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  v4 = *(_QWORD **)(a1 + 160);
  while ( v4 != (_QWORD *)(a1 + 160) )
  {
    v5 = v4 - 9;
    v6 = v4;
    v7 = v4[2] == 0LL;
    v4 = (_QWORD *)*v4;
    if ( v7 && !v5[12] && *((_DWORD *)v5 + 13) == 3 )
    {
      v12 = (_QWORD *)v6[1];
      if ( (_QWORD *)v4[1] != v6 || (_QWORD *)*v12 != v6 )
        __fastfail(3u);
      *v12 = v4;
      v4[1] = v12;
      SUBTRACT_MAP_REGISTERS(a1, *((unsigned int *)v5 + 12));
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
      break;
    }
  }
  KxReleaseSpinLock(v1);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v7 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
}

/*
 * XREFs of HalpDmaStartWcb @ 0x140500F10
 * Callers:
 *     HalPutScatterGatherListV3 @ 0x14050F7D8 (HalPutScatterGatherListV3.c)
 *     HalpAllocateAdapterChannel @ 0x140515210 (HalpAllocateAdapterChannel.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpDmaStartWcb(__int64 a1, _QWORD *a2, char a3)
{
  volatile signed __int64 *v3; // r14
  unsigned __int64 v7; // rdi
  char v8; // si
  _QWORD *v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf

  v3 = (volatile signed __int64 *)(a1 + 184);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  if ( *(_BYTE *)(a1 + 224) )
  {
    v8 = 0;
    if ( !a3 )
    {
      v9 = *(_QWORD **)(a1 + 200);
      if ( *v9 != a1 + 192 )
        __fastfail(3u);
      *a2 = a1 + 192;
      a2[1] = v9;
      *v9 = a2;
      *(_QWORD *)(a1 + 200) = a2;
    }
  }
  else
  {
    v8 = 1;
    *(_BYTE *)(a1 + 224) = 1;
  }
  KxReleaseSpinLock(v3);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  return v8;
}

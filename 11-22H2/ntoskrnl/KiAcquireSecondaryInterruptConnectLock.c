/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x1403A2AE8
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14031F540 (KiDisconnectInterruptCommon.c)
 *     KiConnectSecondaryInterrupt @ 0x1403A2544 (KiConnectSecondaryInterrupt.c)
 *     KiInterruptDispatchCommon @ 0x1403A2804 (KiInterruptDispatchCommon.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140571AD8 (KiDisconnectSecondaryInterrupt.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140571CA8 (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140571FB8 (KiUnmaskSecondaryInterruptInternal.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireSecondaryInterruptConnectLock(PKSPIN_LOCK SpinLock, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v5; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v5) = 4096;
    else
      v5 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v5;
  }
  *a2 = CurrentIrql;
  KxAcquireSpinLock(SpinLock);
}

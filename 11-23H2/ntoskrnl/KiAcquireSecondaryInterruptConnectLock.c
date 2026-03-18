/*
 * XREFs of KiAcquireSecondaryInterruptConnectLock @ 0x1403A3228
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14031F720 (KiDisconnectInterruptCommon.c)
 *     KiConnectSecondaryInterrupt @ 0x1403A2C8C (KiConnectSecondaryInterrupt.c)
 *     KiInterruptDispatchCommon @ 0x1403A2F44 (KiInterruptDispatchCommon.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140571A38 (KiDisconnectSecondaryInterrupt.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140571C08 (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140571F18 (KiUnmaskSecondaryInterruptInternal.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireSecondaryInterruptConnectLock(PKSPIN_LOCK SpinLock, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v5; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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

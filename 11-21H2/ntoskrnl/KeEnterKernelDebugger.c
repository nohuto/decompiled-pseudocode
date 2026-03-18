/*
 * XREFs of KeEnterKernelDebugger @ 0x140566EC0
 * Callers:
 *     <none>
 * Callees:
 *     KiBugCheckDebugBreak @ 0x1405672C0 (KiBugCheckDebugBreak.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 */

__int64 KeEnterKernelDebugger()
{
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9

  _InterlockedExchange(&KiHardwareTrigger, 1);
  _disable();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger && !_InterlockedExchange(&dword_140D01948, 1) )
    KdInitSystem(0LL, 0LL);
  return KiBugCheckDebugBreak(5u);
}

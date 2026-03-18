/*
 * XREFs of KeSuspendClockTimer @ 0x14056FB0C
 * Callers:
 *     PopHandleNextState @ 0x140AA81DC (PopHandleNextState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 KeSuspendClockTimer()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  int v2; // edi

  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned int)KiClockState;
  v2 = KiClockTimerOwner;
  if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    result = off_140C01C98[0]();
    CurrentPrcb->PendingTickFlags &= ~1u;
    CurrentPrcb->ClockTimerState.ClockActive = 0;
  }
  if ( CurrentPrcb->Number == v2 )
    ++dword_140C41BA8;
  if ( CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 0;
  return result;
}

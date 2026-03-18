/*
 * XREFs of PopIsMostRecentWakeAttended @ 0x140A5179C
 * Callers:
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1408080F0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseWakeSourceSpinLock @ 0x1403965EC (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x140396620 (PopAcquireWakeSourceSpinLock.c)
 */

char PopIsMostRecentWakeAttended()
{
  char v0; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v0 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquireWakeSourceSpinLock(&LockHandle);
  if ( PopWakeInfoCount )
    v0 = *(_BYTE *)(qword_140C23758 + 80);
  PopReleaseWakeSourceSpinLock(&LockHandle);
  return v0;
}

/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x140598CAC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140252AA0 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140C3CF20, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140C3CF28);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140C3CFA8, Executive, 0, 0, 0LL);
  }
  byte_140C3CFE0 = 1;
  return v0;
}

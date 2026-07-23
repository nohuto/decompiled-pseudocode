/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x14059919C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x140252B60 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140C3D0C0, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140C3D0C8);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140C3D148, Executive, 0, 0, 0LL);
  }
  byte_140C3D180 = 1;
  return v0;
}

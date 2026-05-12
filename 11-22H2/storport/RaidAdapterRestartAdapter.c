/*
 * XREFs of RaidAdapterRestartAdapter @ 0x1C001142C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0008690 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0008708 (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterRestartAdapter(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v3; // si
  int v4; // edi

  v1 = a1 + 336;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 4) )
    RaCallMiniportAdapterControl(v1, 4LL, 0LL);
  v3 = RaidAdapterAcquireInterruptLock(a1);
  v4 = RaCallMiniportAdapterControl(v1, 2LL, 0LL);
  if ( v4 >= 0 )
    *(_BYTE *)(a1 + 104) |= 1u;
  RaidAdapterReleaseInterruptLock(a1, v3);
  return (unsigned int)v4;
}

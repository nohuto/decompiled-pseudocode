/*
 * XREFs of RaidAdapterRestartAdapter @ 0x1C001E07C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001DD00 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000C724 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C00112B8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0011350 (RaidAdapterReleaseInterruptLock.c)
 */

__int64 __fastcall RaidAdapterRestartAdapter(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v3; // si
  int v4; // edi

  v1 = a1 + 336;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 4) )
    RaCallMiniportAdapterControl(v1);
  v3 = RaidAdapterAcquireInterruptLock(a1);
  v4 = RaCallMiniportAdapterControl(v1);
  if ( v4 >= 0 )
    *(_BYTE *)(a1 + 104) |= 1u;
  RaidAdapterReleaseInterruptLock(a1, v3);
  return (unsigned int)v4;
}

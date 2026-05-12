/*
 * XREFs of RaUnitStoragePowerActive @ 0x1C005FC48
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0008870 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaUnitStoragePowerActive(__int64 a1, IRP *a2)
{
  unsigned int v4; // ebx
  PEX_RUNDOWN_REF_CACHE_AWARE *v5; // rbx

  v4 = -1073741823;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    RaidUnitPoFxActivateComponent(a1, 0, 2LL, 0LL);
    v5 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784);
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
      ExReleaseRundownProtectionCacheAware(*v5);
    ExReleaseRundownProtectionCacheAware(*v5);
    v4 = 0;
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}

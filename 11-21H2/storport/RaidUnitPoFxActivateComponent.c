/*
 * XREFs of RaidUnitPoFxActivateComponent @ 0x1C000FA68
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0011720 (RaUnitScsiMiniportIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     RaidUnitStartDeviceBusy @ 0x1C00407E0 (RaidUnitStartDeviceBusy.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0042078 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitMaintenanceTime @ 0x1C0049F84 (RaidUnitMaintenanceTime.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C004B870 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaUnitStoragePowerActive @ 0x1C0053284 (RaUnitStoragePowerActive.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0089094 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C0002B10 (RaidAdapterPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 */

char __fastcall RaidUnitPoFxActivateComponent(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // r14
  char v7; // si
  __int64 v9; // rcx

  v4 = *(_QWORD *)(a1 + 24);
  v7 = 1;
  if ( a4 )
    *a4 &= 0xFCu;
  if ( *(_QWORD *)(v4 + 4832) )
  {
    v7 = RaidAdapterPoFxActivateComponent(v4);
    if ( a4 )
      *a4 |= 2u;
  }
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_BYTE *)(v4 + 108) & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2040));
      if ( (*(_BYTE *)(v4 + 108) & 2) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2048));
    }
    v9 = *(_QWORD *)(a1 + 1744);
    if ( (*(_DWORD *)(v9 + 148) & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 144));
      v9 = *(_QWORD *)(a1 + 1744);
    }
    PoFxActivateComponent(*(_QWORD *)v9);
    v7 = (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 2) != 0;
    if ( a4 )
      *a4 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
  return v7;
}

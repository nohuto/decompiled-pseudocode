/*
 * XREFs of RaidUnitPoFxActivateComponent @ 0x1C0008870
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0008434 (RaUnitScsiMiniportIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019810 (RaidPnPPassToMiniPort.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C001A298 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitStartDeviceBusy @ 0x1C00431D0 (RaidUnitStartDeviceBusy.c)
 *     RaidUnitMaintenanceTime @ 0x1C004D344 (RaidUnitMaintenanceTime.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C004F230 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaUnitStoragePowerActive @ 0x1C005FC48 (RaUnitStoragePowerActive.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00A0A94 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C00A2B7C (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00089E4 (RaidAdapterPoFxActivateComponent.c)
 */

char __fastcall RaidUnitPoFxActivateComponent(__int64 a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // r14
  unsigned int v6; // ebp
  char v9; // si
  __int64 v11; // rcx

  v4 = *(_QWORD *)(a1 + 24);
  v6 = a3;
  v9 = 1;
  if ( a4 )
    *a4 &= 0xFCu;
  if ( *(_QWORD *)(v4 + 4896) )
  {
    v9 = RaidAdapterPoFxActivateComponent(v4, 0LL, a3);
    if ( a4 )
      *a4 |= 2u;
  }
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_BYTE *)(v4 + 108) & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2088));
      if ( (*(_BYTE *)(v4 + 108) & 2) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2096));
    }
    v11 = *(_QWORD *)(a1 + 1792);
    if ( (*(_DWORD *)(v11 + 148) & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 144));
      v11 = *(_QWORD *)(a1 + 1792);
    }
    if ( *(_DWORD *)(a1 + 972) && (v6 & 1) != 0 )
      v6 |= 4u;
    PoFxActivateComponent(*(_QWORD *)v11, a2, v6);
    v9 = (*(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) & 2) != 0;
    if ( a4 )
      *a4 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
  return v9;
}

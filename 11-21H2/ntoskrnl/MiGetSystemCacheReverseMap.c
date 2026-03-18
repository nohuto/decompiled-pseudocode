/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x1403295C0
 * Callers:
 *     MiSynchronizeSystemVa @ 0x140279DB0 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MmMapViewInSystemCache @ 0x140285D90 (MmMapViewInSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1402864A0 (MiReleaseSystemCacheView.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiComputePxeWalkAction @ 0x14031B1C0 (MiComputePxeWalkAction.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MmSetAddressRangeModifiedEx @ 0x14033D860 (MmSetAddressRangeModifiedEx.c)
 *     MmHardFaultBytesRequired @ 0x1407BE190 (MmHardFaultBytesRequired.c)
 *     MmFreeSystemCacheReserveView @ 0x14096CA00 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSystemCacheReverseMap(unsigned __int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                 - 0x21FFFFFFFFF0LL);
  if ( v1 )
    return v1 + 40 * ((a1 >> 18) & 7);
  else
    return 0LL;
}

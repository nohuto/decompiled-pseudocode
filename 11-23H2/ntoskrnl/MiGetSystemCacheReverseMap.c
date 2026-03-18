/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x140262410
 * Callers:
 *     MiProbeAndLockPrepare @ 0x140234DB0 (MiProbeAndLockPrepare.c)
 *     MiComputePxeWalkAction @ 0x14025CD40 (MiComputePxeWalkAction.c)
 *     MiSynchronizeSystemVa @ 0x1402619B0 (MiSynchronizeSystemVa.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F1D0 (MmSetAddressRangeModifiedEx.c)
 *     MmMapViewInSystemCache @ 0x14029F630 (MmMapViewInSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1402A0140 (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MmHardFaultBytesRequired @ 0x1406F5B20 (MmHardFaultBytesRequired.c)
 *     MmFreeSystemCacheReserveView @ 0x140A308C0 (MmFreeSystemCacheReserveView.c)
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

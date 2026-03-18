/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x1402622F0
 * Callers:
 *     MiProbeAndLockPrepare @ 0x140234D90 (MiProbeAndLockPrepare.c)
 *     MiComputePxeWalkAction @ 0x14025CC20 (MiComputePxeWalkAction.c)
 *     MiSynchronizeSystemVa @ 0x140261890 (MiSynchronizeSystemVa.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F0B0 (MmSetAddressRangeModifiedEx.c)
 *     MmMapViewInSystemCache @ 0x14029F510 (MmMapViewInSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1402A0020 (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MmHardFaultBytesRequired @ 0x1406F5BD0 (MmHardFaultBytesRequired.c)
 *     MmFreeSystemCacheReserveView @ 0x140A30930 (MmFreeSystemCacheReserveView.c)
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

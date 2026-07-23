/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x1402626A0
 * Callers:
 *     MiProbeAndLockPrepare @ 0x140234E80 (MiProbeAndLockPrepare.c)
 *     MiComputePxeWalkAction @ 0x14025CFD0 (MiComputePxeWalkAction.c)
 *     MiSynchronizeSystemVa @ 0x140261C40 (MiSynchronizeSystemVa.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F460 (MmSetAddressRangeModifiedEx.c)
 *     MmMapViewInSystemCache @ 0x14029F8C0 (MmMapViewInSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1402A03D0 (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MmHardFaultBytesRequired @ 0x1406F5D30 (MmHardFaultBytesRequired.c)
 *     MmFreeSystemCacheReserveView @ 0x140A30B70 (MmFreeSystemCacheReserveView.c)
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

/*
 * XREFs of VidMmInvalidateAllVirtualAddresses @ 0x1C002D120
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E3C50 (-InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VidMmInvalidateAllVirtualAddresses(VIDMM_GLOBAL *a1)
{
  VIDMM_GLOBAL::InvalidateAllVirtualAddresses(a1);
}

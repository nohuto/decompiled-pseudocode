/*
 * XREFs of MiSetImageProtection @ 0x14034BC20
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x140724040 (MmChangeImageProtection.c)
 *     MiCompactServiceTable @ 0x1407BCB74 (MiCompactServiceTable.c)
 *     MiResolveImageImports @ 0x1407BCD10 (MiResolveImageImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407D46B4 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140A351D8 (MiApplyHotPatchToDriverDataPages.c)
 *     MiPatchDataPagesCallback @ 0x140A3A9E0 (MiPatchDataPagesCallback.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + (unsigned int)(a3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           a4);
}

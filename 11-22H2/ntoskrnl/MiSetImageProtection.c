/*
 * XREFs of MiSetImageProtection @ 0x14034B480
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x140723EB0 (MmChangeImageProtection.c)
 *     MiCompactServiceTable @ 0x1407BCE34 (MiCompactServiceTable.c)
 *     MiResolveImageImports @ 0x1407BCFD0 (MiResolveImageImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407D4964 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140A34F98 (MiApplyHotPatchToDriverDataPages.c)
 *     MiPatchDataPagesCallback @ 0x140A3A7A0 (MiPatchDataPagesCallback.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + (unsigned int)(a3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           a4);
}

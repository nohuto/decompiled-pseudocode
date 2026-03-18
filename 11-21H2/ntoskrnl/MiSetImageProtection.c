/*
 * XREFs of MiSetImageProtection @ 0x14027E128
 * Callers:
 *     MiCompactServiceTable @ 0x1406CCD8C (MiCompactServiceTable.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14075C330 (MiProcessKernelCfgImageLoadConfig.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiResolveImageImports @ 0x140761604 (MiResolveImageImports.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140971708 (MiApplyHotPatchToDriverDataPages.c)
 *     MiPatchDataPagesCallback @ 0x1409766B0 (MiPatchDataPagesCallback.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + (unsigned int)(a3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           a4);
}

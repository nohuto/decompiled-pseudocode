/*
 * XREFs of MiSetImageProtection @ 0x14034BA80
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703DC0 (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x140723E40 (MmChangeImageProtection.c)
 *     MiCompactServiceTable @ 0x1407BC8A4 (MiCompactServiceTable.c)
 *     MiResolveImageImports @ 0x1407BCA40 (MiResolveImageImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407D43E4 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiApplyHotPatchToDriverDataPages @ 0x140A34F28 (MiApplyHotPatchToDriverDataPages.c)
 *     MiPatchDataPagesCallback @ 0x140A3A730 (MiPatchDataPagesCallback.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + (unsigned int)(a3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           a4);
}

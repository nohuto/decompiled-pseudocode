/*
 * XREFs of memcmp_0 @ 0x1800636EF
 * Callers:
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x18000F9E0 (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x180035DBC (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x180041C84 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x180059370 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800BBC64 (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800C60F8 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x180100604 (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}

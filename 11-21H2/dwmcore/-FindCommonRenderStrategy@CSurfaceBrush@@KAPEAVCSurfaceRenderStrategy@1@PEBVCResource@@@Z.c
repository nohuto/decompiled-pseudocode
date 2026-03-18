/*
 * XREFs of ?FindCommonRenderStrategy@CSurfaceBrush@@KAPEAVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x1800E3190
 * Callers:
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x180043434 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x180067938 (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?IsSupportedSurface@CBitmapRenderStrategy@@SA_NPEBVCResource@@@Z @ 0x1800E3220 (-IsSupportedSurface@CBitmapRenderStrategy@@SA_NPEBVCResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void ***__fastcall CSurfaceBrush::FindCommonRenderStrategy(const struct CResource *a1)
{
  if ( !a1 )
    return off_1803D0E98;
  if ( CBitmapRenderStrategy::IsSupportedSurface(a1) )
    return off_1803D0EA0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 201LL) )
    return off_1803D0EA8;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 127LL) )
    return &off_1803D0EB0;
  return 0LL;
}

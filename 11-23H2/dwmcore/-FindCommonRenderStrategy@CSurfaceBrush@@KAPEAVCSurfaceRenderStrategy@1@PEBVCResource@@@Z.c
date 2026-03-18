/*
 * XREFs of ?FindCommonRenderStrategy@CSurfaceBrush@@KAPEAVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x1800E39D8
 * Callers:
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x180097A08 (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800A5148 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?IsSupportedSurface@CBitmapRenderStrategy@@SA_NPEBVCResource@@@Z @ 0x1800E3A68 (-IsSupportedSurface@CBitmapRenderStrategy@@SA_NPEBVCResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void ***__fastcall CSurfaceBrush::FindCommonRenderStrategy(const struct CResource *a1)
{
  if ( !a1 )
    return &off_1803E3720;
  if ( CBitmapRenderStrategy::IsSupportedSurface(a1) )
    return off_1803E3708;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 202LL) )
    return off_1803E3710;
  return (void ***)((unsigned __int64)off_1803E3718 & -(__int64)((*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(
                                                                   a1,
                                                                   129LL) != 0));
}

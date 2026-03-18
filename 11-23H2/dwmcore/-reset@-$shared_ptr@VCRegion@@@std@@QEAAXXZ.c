/*
 * XREFs of ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x18013129A
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x180079320 (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x1800FC77C (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x1801F64D0 (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801F6E20 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012F94A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CRegion>::reset(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax

  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}

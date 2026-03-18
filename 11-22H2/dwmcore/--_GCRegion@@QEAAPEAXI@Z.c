/*
 * XREFs of ??_GCRegion@@QEAAPEAXI@Z @ 0x1801C3900
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18001018C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18004A1EC (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800C8144 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x1800CA6AC (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@VCRegion@@@std@@EEAAXXZ @ 0x1801DEBC0 (-_Destroy@-$_Ref_count_obj2@VCRegion@@@std@@EEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180288274 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@.c)
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x18028AC08 (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x1802B9648 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DFD90 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall CRegion::`scalar deleting destructor'(void **this, char a2)
{
  FastRegion::CRegion::FreeMemory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

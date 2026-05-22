/*
 * XREFs of ?EndDrawInternal@CCompositionSurface@DirectComposition@@AEAAXXZ @ 0x1800EB958
 * Callers:
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectComposition@@@Z @ 0x1800388FC (--$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectCompos.c)
 *     ?EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x180038924 (-EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 *     ?ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z @ 0x180038DEC (-ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z.c)
 */

void __fastcall DirectComposition::CCompositionSurface::EndDrawInternal(DirectComposition::CBitmapInfoBack **this)
{
  struct DirectComposition::CBitmapInfoBack **v1; // rbx

  v1 = this + 6;
  DirectComposition::CBitmapInfoBack::EndDraw(this[6]);
  DirectComposition::CBitmapInfoFront::ApplyUpdate(this[5], *v1);
  ReleaseInterface<DirectComposition::CBitmapInfoBack>((__int64 *)v1);
  *((_BYTE *)this[5] + 112) |= 9u;
}

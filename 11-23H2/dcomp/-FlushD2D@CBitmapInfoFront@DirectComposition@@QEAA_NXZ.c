/*
 * XREFs of ?FlushD2D@CBitmapInfoFront@DirectComposition@@QEAA_NXZ @ 0x1800EA888
 * Callers:
 *     ?EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z @ 0x180038474 (-EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x1800EB360 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z.c)
 *     ?Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x1800FB920 (-Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z @ 0x1800FD9C0 (-CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z.c)
 * Callees:
 *     ?FlushD2DRendering@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x1800EA5C8 (-FlushD2DRendering@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 */

char __fastcall DirectComposition::CBitmapInfoFront::FlushD2D(DirectComposition::CBitmapInfoFront *this)
{
  DirectComposition::CBitmapInfoBack *v1; // rcx
  char result; // al

  v1 = (DirectComposition::CBitmapInfoBack *)*((_QWORD *)this + 15);
  result = 0;
  if ( v1 )
  {
    DirectComposition::CBitmapInfoBack::FlushD2DRendering(v1);
    return 1;
  }
  return result;
}

/*
 * XREFs of ?CopySurface@CBitmapInfoFront@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800EA850
 * Callers:
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x1800EB360 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800EB540 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?CopySurface@CAtlasSurface@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800E924C (-CopySurface@CAtlasSurface@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z.c)
 */

void __fastcall DirectComposition::CBitmapInfoFront::CopySurface(
        DirectComposition::CBitmapInfoFront *this,
        struct ID3D11Resource *a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagRECT *a5)
{
  __int64 v5; // rax
  DirectComposition::CAtlasSurface *v6; // rcx

  v5 = *((_QWORD *)this + 15);
  if ( v5 )
    v6 = *(DirectComposition::CAtlasSurface **)(v5 + 16);
  else
    v6 = (DirectComposition::CAtlasSurface *)*((_QWORD *)this + 2);
  if ( v6 )
    DirectComposition::CAtlasSurface::CopySurface(v6, a2, a3, a4, a5);
}

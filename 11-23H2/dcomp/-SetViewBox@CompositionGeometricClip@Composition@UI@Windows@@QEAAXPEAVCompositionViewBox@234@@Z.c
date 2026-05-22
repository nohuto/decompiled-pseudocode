/*
 * XREFs of ?SetViewBox@CompositionGeometricClip@Composition@UI@Windows@@QEAAXPEAVCompositionViewBox@234@@Z @ 0x180172410
 * Callers:
 *     ?put_ViewBox@Api@CompositionGeometricClip@Composition@UI@Windows@@UEAAJPEAUICompositionViewBox@345@@Z @ 0x180172680 (-put_ViewBox@Api@CompositionGeometricClip@Composition@UI@Windows@@UEAAJPEAUICompositionViewBox@3.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionGeometricClip::SetViewBox(
        Windows::UI::Composition::CompositionGeometricClip *this,
        struct Windows::UI::Composition::CompositionViewBox *a2)
{
  int v2; // eax

  v2 = 0;
  if ( a2 )
    v2 = *((_DWORD *)a2 + 32);
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    5,
    v2);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionViewBox>::operator=(
    (Microsoft::WRL2::NestableRuntimeClass **)this + 24,
    a2);
}

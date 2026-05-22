/*
 * XREFs of ?SetGeometry@CompositionGeometricClip@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@Z @ 0x180087C14
 * Callers:
 *     ?CreateGeometricClip@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEAPEAVCompositionGeometricClip@234@@Z @ 0x180087A38 (-CreateGeometricClip@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@P.c)
 *     ?put_Geometry@Api@CompositionGeometricClip@Composition@UI@Windows@@UEAAJPEAUICompositionGeometry@345@@Z @ 0x1801725B0 (-put_Geometry@Api@CompositionGeometricClip@Composition@UI@Windows@@UEAAJPEAUICompositionGeometry.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionGeometricClip::SetGeometry(
        Windows::UI::Composition::CompositionGeometricClip *this,
        struct Windows::UI::Composition::CompositionGeometry *a2)
{
  int v2; // eax

  v2 = 0;
  if ( a2 )
    v2 = *((_DWORD *)a2 + 32);
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    4,
    v2);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionGeometry>::operator=((char *)this + 184, a2);
}

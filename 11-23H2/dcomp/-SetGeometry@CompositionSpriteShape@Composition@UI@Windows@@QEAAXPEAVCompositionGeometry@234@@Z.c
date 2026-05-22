/*
 * XREFs of ?SetGeometry@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@Z @ 0x180087C70
 * Callers:
 *     ?put_Geometry@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionGeometry@345@@Z @ 0x180087B80 (-put_Geometry@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionGeometry@3.c)
 *     ?CreateSpriteShape@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEAPEAVCompositionSpriteShape@234@@Z @ 0x18008BA98 (-CreateSpriteShape@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEA.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionSpriteShape::SetGeometry(
        Windows::UI::Composition::CompositionSpriteShape *this,
        struct Windows::UI::Composition::CompositionGeometry *a2)
{
  int v2; // eax

  v2 = 0;
  if ( a2 )
    v2 = *((_DWORD *)a2 + 32);
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    3,
    v2);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionGeometry>::operator=((char *)this + 224, a2);
}

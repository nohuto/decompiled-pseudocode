/*
 * XREFs of ?SetStrokeBrush@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z @ 0x18000C8F4
 * Callers:
 *     ?put_StrokeBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x18000C860 (-put_StrokeBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@3.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionSpriteShape::SetStrokeBrush(
        Windows::UI::Composition::CompositionSpriteShape *this,
        struct Windows::UI::Composition::CompositionBrush *a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a2 )
    v2 = *((_DWORD *)a2 + 32);
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    2u,
    v2);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBrush>::operator=((char *)this + 216, a2);
}

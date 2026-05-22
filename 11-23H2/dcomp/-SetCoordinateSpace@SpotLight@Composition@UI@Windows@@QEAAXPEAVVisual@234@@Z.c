/*
 * XREFs of ?SetCoordinateSpace@SpotLight@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180062730
 * Callers:
 *     ?put_CoordinateSpace@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180062790 (-put_CoordinateSpace@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 *     ?Destroy@SpotLight@Composition@UI@Windows@@UEAAXXZ @ 0x18017C130 (-Destroy@SpotLight@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 */

void __fastcall Windows::UI::Composition::SpotLight::SetCoordinateSpace(
        Windows::UI::Composition::SpotLight *this,
        struct Windows::UI::Composition::Visual *a2)
{
  int v2; // eax

  v2 = 0;
  if ( a2 )
    v2 = *((_DWORD *)a2 + 32);
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    6,
    v2);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=((char *)this + 392, a2);
}

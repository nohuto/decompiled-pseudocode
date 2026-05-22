/*
 * XREFs of ?SetCoordinateSpace@PointLight@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x18017A558
 * Callers:
 *     ?put_CoordinateSpace@Api@PointLight@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x18017AE80 (-put_CoordinateSpace@Api@PointLight@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 */

void __fastcall Windows::UI::Composition::PointLight::SetCoordinateSpace(
        Windows::UI::Composition::PointLight *this,
        struct Windows::UI::Composition::Visual *a2)
{
  int v2; // eax

  v2 = 0;
  if ( a2 )
    v2 = *((_DWORD *)a2 + 32);
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    7,
    v2);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(
    (Microsoft::WRL2::NestableRuntimeClass **)this + 42,
    (volatile signed __int32 *)a2);
}

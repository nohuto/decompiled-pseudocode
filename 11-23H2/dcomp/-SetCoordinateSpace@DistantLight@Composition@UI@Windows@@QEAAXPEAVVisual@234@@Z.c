/*
 * XREFs of ?SetCoordinateSpace@DistantLight@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180093190
 * Callers:
 *     ?put_CoordinateSpace@Api@DistantLight@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x1800930F0 (-put_CoordinateSpace@Api@DistantLight@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 */

void __fastcall Windows::UI::Composition::DistantLight::SetCoordinateSpace(
        Windows::UI::Composition::DistantLight *this,
        struct Windows::UI::Composition::Visual *a2)
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
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(
    (Microsoft::WRL2::NestableRuntimeClass **)this + 40,
    (volatile signed __int32 *)a2);
}

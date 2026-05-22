/*
 * XREFs of ?Destroy@ShapeVisual@Composition@UI@Windows@@UEAAXXZ @ 0x1800093D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize@ShapeContainer@Composition@UI@Windows@@IEAAXXZ @ 0x180009408 (-Uninitialize@ShapeContainer@Composition@UI@Windows@@IEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::ShapeVisual::Destroy(Windows::UI::Composition::ShapeVisual *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 46);
  if ( v2 )
  {
    *((_QWORD *)this + 46) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  Windows::UI::Composition::ShapeContainer::Uninitialize((Windows::UI::Composition::ShapeVisual *)((char *)this + 312));
  Windows::UI::Composition::Visual::Destroy(this);
}

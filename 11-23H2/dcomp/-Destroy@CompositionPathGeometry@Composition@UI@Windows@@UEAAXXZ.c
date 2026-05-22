/*
 * XREFs of ?Destroy@CompositionPathGeometry@Composition@UI@Windows@@UEAAXXZ @ 0x180010B40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?DetachConsumer@CompositionPath@Composition@UI@Windows@@QEAAXPEAVCompositor@234@@Z @ 0x180010B88 (-DetachConsumer@CompositionPath@Composition@UI@Windows@@QEAAXPEAVCompositor@234@@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionPathGeometry::Destroy(
        Windows::UI::Composition::CompositionPathGeometry *this)
{
  Microsoft::WRL2::NestableRuntimeClass **v1; // rdi
  Windows::UI::Composition::CompositionPath *v3; // rcx

  v1 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 184);
  v3 = (Windows::UI::Composition::CompositionPath *)*((_QWORD *)this + 23);
  if ( v3 )
  {
    Windows::UI::Composition::CompositionPath::DetachConsumer(
      v3,
      *((struct Windows::UI::Composition::Compositor **)this + 3));
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v1);
  }
  Windows::UI::Composition::ProxyObject::Destroy(this);
}

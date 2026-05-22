/*
 * XREFs of ?Destroy@CompositionShape@Composition@UI@Windows@@UEAAXXZ @ 0x18000EA00
 * Callers:
 *     ?Destroy@CompositionSpriteShape@Composition@UI@Windows@@UEAAXXZ @ 0x18000E990 (-Destroy@CompositionSpriteShape@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionContainerShape@Composition@UI@Windows@@UEAAXXZ @ 0x180177430 (-Destroy@CompositionContainerShape@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionShape::Destroy(Windows::UI::Composition::CompositionShape *this)
{
  Microsoft::WRL2::NestableRuntimeClass **v1; // rdi
  Microsoft::WRL2::ContextRuntimeClass *v3; // rcx

  v1 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 152);
  v3 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v3);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v1);
  }
  Windows::UI::Composition::ProxyObject::Destroy(this);
}

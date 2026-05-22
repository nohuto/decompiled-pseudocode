/*
 * XREFs of ?Uninitialize@ShapeContainer@Composition@UI@Windows@@IEAAXXZ @ 0x180009408
 * Callers:
 *     ?Destroy@ShapeVisual@Composition@UI@Windows@@UEAAXXZ @ 0x1800093D0 (-Destroy@ShapeVisual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionContainerShape@Composition@UI@Windows@@UEAAXXZ @ 0x180177430 (-Destroy@CompositionContainerShape@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4 (-RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::ShapeContainer::Uninitialize(Windows::UI::Composition::ShapeContainer *this)
{
  Microsoft::WRL2::ContextRuntimeClass *v2; // rcx

  v2 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v2);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((char *)this + 32);
  }
  if ( (*((_BYTE *)this + 16) & 1) != 0 )
    DirectComposition::CDevice::RemoveDirtyRebuildableObject(*((DirectComposition::CDevice **)this + 3), this);
}

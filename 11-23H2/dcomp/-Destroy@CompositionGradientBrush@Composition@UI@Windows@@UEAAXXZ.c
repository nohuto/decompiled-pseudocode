/*
 * XREFs of ?Destroy@CompositionGradientBrush@Composition@UI@Windows@@UEAAXXZ @ 0x1800126E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4 (-RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionGradientBrush::Destroy(
        Windows::UI::Composition::CompositionGradientBrush *this)
{
  Microsoft::WRL2::NestableRuntimeClass **v1; // rdi
  Microsoft::WRL2::ContextRuntimeClass *v3; // rcx
  Microsoft::WRL2::ContextRuntimeClass *v4; // rcx

  v1 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 224);
  v3 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 28);
  if ( v3 )
  {
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v3);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v1);
  }
  v4 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 29);
  if ( v4 )
  {
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v4);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 29);
  }
  if ( (*((_BYTE *)this + 192) & 1) != 0 )
    DirectComposition::CDevice::RemoveDirtyRebuildableObject(
      *((DirectComposition::CDevice **)this + 25),
      (struct DirectComposition::CRebuildableObject *)(((unsigned __int64)this + 176) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  Windows::UI::Composition::ProxyObject::Destroy(this);
}

/*
 * XREFs of ?Destroy@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAXXZ @ 0x180180DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?SetSource@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAXPEAVCompositionCubeMap@2345@@Z @ 0x180181414 (-SetSource@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAXPEAVCompositionCubeMap@23.c)
 */

void __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::Destroy(
        Windows::UI::Composition::Private::CompositionSkyBoxBrush *this)
{
  Microsoft::WRL2::ContextRuntimeClass *v2; // rcx
  Microsoft::WRL2::ContextRuntimeClass *v3; // rcx
  __int64 v4; // rdx

  v2 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 21);
  if ( v2 )
  {
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v2);
    Windows::UI::Composition::Private::CompositionSkyBoxBrush::SetSource(this, 0LL);
  }
  v3 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 25);
  if ( v3 )
  {
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v3);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(
      (volatile signed __int32 **)this + 25,
      v4);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      5,
      0);
  }
  Windows::UI::Composition::ProxyObject::Destroy(this);
}

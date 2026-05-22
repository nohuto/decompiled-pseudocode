/*
 * XREFs of ?Destroy@CompositionClip@Composition@UI@Windows@@UEAAXXZ @ 0x1800878A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionClip::Destroy(Windows::UI::Composition::CompositionClip *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 20);
  if ( v2 )
  {
    *((_QWORD *)this + 20) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  Windows::UI::Composition::ProxyObject::Destroy(this);
}

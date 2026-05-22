/*
 * XREFs of ?Destroy@RenderingDeviceReplacedEventArgs@Composition@UI@Windows@@UEAAXXZ @ 0x180196480
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::RenderingDeviceReplacedEventArgs::Destroy(
        Windows::UI::Composition::RenderingDeviceReplacedEventArgs *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    *((_QWORD *)this + 18) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  Windows::UI::Composition::CompositionObject::Destroy(this);
}

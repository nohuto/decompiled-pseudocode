/*
 * XREFs of ?SetHoverPointerSource@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAXPEAVCompositionHoverPointerSource@234@@Z @ 0x180089300
 * Callers:
 *     ?RuntimeClassInitialize@CompositionHoverPointerSource@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVVisual@234@@Z @ 0x18008923C (-RuntimeClassInitialize@CompositionHoverPointerSource@Composition@UI@Windows@@QEAAJPEAVComposito.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionPointerEventRouter::SetHoverPointerSource(
        Windows::UI::Composition::CompositionPointerEventRouter *this,
        struct Windows::UI::Composition::CompositionHoverPointerSource *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  if ( *((struct Windows::UI::Composition::CompositionHoverPointerSource **)this + 20) != a2 )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = a2;
    if ( v4 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    16,
    *((_DWORD *)a2 + 32));
}

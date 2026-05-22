/*
 * XREFs of ??_ECompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18012FF50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionProjectedShadowReceiverIterator *__fastcall Windows::UI::Composition::CompositionProjectedShadowReceiverIterator::`vector deleting destructor'(
        Windows::UI::Composition::CompositionProjectedShadowReceiverIterator *this,
        __int64 a2)
{
  char v3; // di
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  v3 = a2;
  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    *((_QWORD *)this + 8) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, a2);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}

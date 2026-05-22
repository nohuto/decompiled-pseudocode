/*
 * XREFs of ??_GDebugReference@Private@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18016B060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18008C060 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::Private::DebugReference *__fastcall Windows::UI::Composition::Private::DebugReference::`scalar deleting destructor'(
        Windows::UI::Composition::Private::DebugReference *this,
        __int64 a2)
{
  char v3; // di
  CWeakReferenceBase *v4; // rcx

  v3 = a2;
  v4 = (CWeakReferenceBase *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    *((_QWORD *)this + 7) = 0LL;
    CWeakReferenceBase::Release(v4);
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

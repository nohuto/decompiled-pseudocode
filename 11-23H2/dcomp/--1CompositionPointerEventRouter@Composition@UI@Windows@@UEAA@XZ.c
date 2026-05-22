/*
 * XREFs of ??1CompositionPointerEventRouter@Composition@UI@Windows@@UEAA@XZ @ 0x18008D694
 * Callers:
 *     ??_GCompositionPointerEventRouter@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18008D650 (--_GCompositionPointerEventRouter@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18008C060 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionPointerEventRouter::~CompositionPointerEventRouter(
        Windows::UI::Composition::CompositionPointerEventRouter *this)
{
  CWeakReferenceBase *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  __int64 v5; // rdx

  v2 = (CWeakReferenceBase *)*((_QWORD *)this + 21);
  if ( v2 )
  {
    *((_QWORD *)this + 21) = 0LL;
    CWeakReferenceBase::Release(v2);
  }
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 20);
  if ( v3 )
  {
    *((_QWORD *)this + 20) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    *((_QWORD *)this + 19) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v5);
}

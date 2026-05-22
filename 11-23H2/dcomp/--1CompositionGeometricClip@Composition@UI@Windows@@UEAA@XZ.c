/*
 * XREFs of ??1CompositionGeometricClip@Composition@UI@Windows@@UEAA@XZ @ 0x180122FD8
 * Callers:
 *     ??_GCompositionGeometricClip@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123AC0 (--_GCompositionGeometricClip@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionGeometricClip::~CompositionGeometricClip(
        Windows::UI::Composition::CompositionGeometricClip *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  __int64 v4; // rdx

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 24);
  if ( v2 )
  {
    *((_QWORD *)this + 24) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 23);
  if ( v3 )
  {
    *((_QWORD *)this + 23) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 20);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v4);
}

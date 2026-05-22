/*
 * XREFs of ??1CompositionEffectFactory@Composition@UI@Windows@@UEAA@XZ @ 0x18008AE84
 * Callers:
 *     ??_GCompositionEffectFactory@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18008AE40 (--_GCompositionEffectFactory@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1BatchMember@Composition@UI@Windows@@QEAA@XZ @ 0x18008AF28 (--1BatchMember@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18008C2AC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionEffectFactory::~CompositionEffectFactory(
        Windows::UI::Composition::CompositionEffectFactory *this,
        void *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  wil::details *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 28);
  if ( v3 )
  {
    *((_QWORD *)this + 28) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  v4 = (wil::details *)*((_QWORD *)this + 27);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  Windows::UI::Composition::BatchMember::~BatchMember((Windows::UI::Composition::CompositionEffectFactory *)((char *)this + 200));
  v5 = *((_QWORD *)this + 23);
  if ( v5 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 19);
  if ( v6 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v7);
}

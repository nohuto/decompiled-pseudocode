/*
 * XREFs of ??1CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x180123090
 * Callers:
 *     ??1CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x1801230E4 (--1CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??1CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x180123158 (--1CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??_GCompositionSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123D20 (--_GCompositionSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::Internal::CompositionSuperWetInkSource::~CompositionSuperWetInkSource(
        Windows::UI::Composition::Internal::CompositionSuperWetInkSource *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  __int64 v3; // rdx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 20);
  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    *((_QWORD *)this + 19) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v3);
}

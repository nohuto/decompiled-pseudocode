/*
 * XREFs of ??1VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x18011CA24
 * Callers:
 *     ??_EVisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18011CBA0 (--_EVisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??1EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x180130E94 (--1EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::~VisualInteractionSource(
        Windows::UI::Composition::Interactions::VisualInteractionSource *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx

  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    *((_QWORD *)this + 32) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 31);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 30);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)this + 29,
    v3);
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v4);
}

/*
 * XREFs of ??1CompositionIslandTarget@Composition@UI@Windows@@UEAA@XZ @ 0x18010E358
 * Callers:
 *     ??_ECompositionIslandTarget@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18010E460 (--_ECompositionIslandTarget@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionIslandTarget::~CompositionIslandTarget(
        Windows::UI::Composition::CompositionIslandTarget *this,
        __int64 a2)
{
  __int64 v3; // rdx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)this + 21,
    a2);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 20);
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v3);
}

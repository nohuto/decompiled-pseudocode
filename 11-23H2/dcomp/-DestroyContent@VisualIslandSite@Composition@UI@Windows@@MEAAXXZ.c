/*
 * XREFs of ?DestroyContent@VisualIslandSite@Composition@UI@Windows@@MEAAXXZ @ 0x18000F450
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ @ 0x18000F4C8 (-RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?SetClip@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionClip@234@@Z @ 0x18000F51C (-SetClip@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionClip@234@@Z.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUnknown@@1_N@Z @ 0x18008002C (-Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUn.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?SetOwnerNoRef@Visual@Composition@UI@Windows@@QEAAXPEAUIVisualOwnerPrivate@Private@234@_N@Z @ 0x180086B60 (-SetOwnerNoRef@Visual@Composition@UI@Windows@@QEAAXPEAUIVisualOwnerPrivate@Private@234@_N@Z.c)
 */

void __fastcall Windows::UI::Composition::VisualIslandSite::DestroyContent(
        struct IUnknown *this,
        struct CReadWriteLock *a2)
{
  Windows::UI::Composition::Visual **v2; // rbx
  struct IUnknownVtbl *lpVtbl; // rcx

  v2 = (Windows::UI::Composition::Visual **)&this[35];
  lpVtbl = this[35].lpVtbl;
  if ( lpVtbl )
  {
    if ( ((__int64)lpVtbl[1].AddRef & 2) != 0 )
    {
      Windows::UI::Composition::Visual::RemoveAllChildren((Windows::UI::Composition::Visual *)lpVtbl);
      Windows::UI::Composition::Visual::SetClip(*v2, 0LL);
      Windows::UI::Composition::Visual::SetOwnerNoRef(*v2, 0LL, 0);
      Microsoft::WRL2::ContextRuntimeClass::Dispose(*v2);
    }
    Windows::UI::Composition::MapWeakPeerForWeakTargetBase::Configure(
      (Windows::UI::Composition::MapWeakPeerForWeakTargetBase *)&Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIslandSite,
      a2,
      (struct IUnknown *)*v2,
      this,
      0);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(v2);
  }
}

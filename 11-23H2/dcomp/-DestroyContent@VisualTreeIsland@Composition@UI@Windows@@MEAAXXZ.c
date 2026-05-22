/*
 * XREFs of ?DestroyContent@VisualTreeIsland@Composition@UI@Windows@@MEAAXXZ @ 0x18000BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivate@Private@234@@Z @ 0x18000C138 (-RemoveListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPri.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUnknown@@1_N@Z @ 0x18008002C (-Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUn.c)
 */

void __fastcall Windows::UI::Composition::VisualTreeIsland::DestroyContent(
        struct IUnknown *this,
        struct CReadWriteLock *a2)
{
  struct IUnknownVtbl *lpVtbl; // rcx
  struct IUnknownVtbl *v4; // rcx
  struct IUnknown *v5; // r8
  struct IUnknownVtbl *v6; // rcx

  lpVtbl = this[69].lpVtbl;
  if ( lpVtbl )
  {
    Windows::UI::Composition::CompositionAnchor::RemoveListener(
      (Windows::UI::Composition::CompositionAnchor *)lpVtbl,
      (struct Windows::UI::Composition::Private::ICompositionAnchorListenerPrivate *)((unsigned __int64)&this[66] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    Microsoft::WRL2::ContextRuntimeClass::Dispose((Microsoft::WRL2::ContextRuntimeClass *)this[69].lpVtbl);
    v4 = this[69].lpVtbl;
    if ( v4 )
    {
      this[69].lpVtbl = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v4);
    }
  }
  v5 = (struct IUnknown *)this[68].lpVtbl;
  if ( v5 )
  {
    Windows::UI::Composition::MapWeakPeerForWeakTargetBase::Configure(
      (Windows::UI::Composition::MapWeakPeerForWeakTargetBase *)&Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIsland,
      a2,
      v5,
      this,
      0);
    LODWORD(this[68].lpVtbl[1].AddRef) &= ~0x40u;
    Microsoft::WRL2::ContextRuntimeClass::Dispose((Microsoft::WRL2::ContextRuntimeClass *)this[68].lpVtbl);
    v6 = this[68].lpVtbl;
    if ( v6 )
    {
      this[68].lpVtbl = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v6);
    }
  }
}

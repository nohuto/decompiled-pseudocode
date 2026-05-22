/*
 * XREFs of ?EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001E154
 * Callers:
 *     ?Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ @ 0x1800098E0 (-Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x1800105AC (-Destroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?SetMessageSession@ContextSession@WRL2@Microsoft@@IEAAXPEAUIMessageSession@@@Z @ 0x18001D700 (-SetMessageSession@ContextSession@WRL2@Microsoft@@IEAAXPEAUIMessageSession@@@Z.c)
 *     ?CleanUpAllChildren@Visual@Composition@UI@Windows@@AEAAXXZ @ 0x18002885C (-CleanUpAllChildren@Visual@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionIslandTarget@234@@Z @ 0x18010F540 (-CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionIslandTarge.c)
 *     ?Connection_2_ReconfigureIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAPEAVCompositionIslandSite@234@PEAPEAV1234@PEAV1234@PEA_NPEAPEAX@Z @ 0x1801119D8 (-Connection_2_ReconfigureIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICom.c)
 *     ?PostDestroy@CompositionIslandTarget@Composition@UI@Windows@@UEAAXXZ @ 0x180159FD0 (-PostDestroy@CompositionIslandTarget@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionTarget@Composition@UI@Windows@@UEAAXXZ @ 0x1801968BC (-Destroy@CompositionTarget@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180196AD4 (-RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUIC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextSession::EnsureMessageExtensions(Microsoft::WRL2::ContextSession *this)
{
  char *v1; // rsi
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, char *); // rbx
  int v4; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this + 128;
  if ( !*((_QWORD *)this + 16) )
  {
    v2 = *((_QWORD *)this + 15);
    v3 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 40LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 128);
    v4 = v3(v2, v1);
    if ( v4 < 0 )
      Microsoft::WRL2::FailFast::ForHR(v4, retaddr);
  }
}

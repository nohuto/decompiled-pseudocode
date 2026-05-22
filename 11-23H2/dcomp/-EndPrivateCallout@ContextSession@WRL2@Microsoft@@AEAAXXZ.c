/*
 * XREFs of ?EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x180108A7C
 * Callers:
 *     ?Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ @ 0x1800098E0 (-Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x1800105AC (-Destroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?CleanUpAllChildren@Visual@Composition@UI@Windows@@AEAAXXZ @ 0x18002885C (-CleanUpAllChildren@Visual@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionIslandTarget@234@@Z @ 0x18010F540 (-CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionIslandTarge.c)
 *     ?Connection_2_ReconfigureIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAPEAVCompositionIslandSite@234@PEAPEAV1234@PEAV1234@PEA_NPEAPEAX@Z @ 0x1801119D8 (-Connection_2_ReconfigureIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICom.c)
 *     ?PostDestroy@CompositionIslandTarget@Composition@UI@Windows@@UEAAXXZ @ 0x180159FD0 (-PostDestroy@CompositionIslandTarget@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionTarget@Composition@UI@Windows@@UEAAXXZ @ 0x1801968BC (-Destroy@CompositionTarget@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180196AD4 (-RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUIC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextSession::EndPrivateCallout(Microsoft::WRL2::ContextSession *this)
{
  int v1; // r8d
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 22);
  if ( *((_DWORD *)this + 20) != v1 + *((_DWORD *)this + 21) )
    Microsoft::WRL2::FailFast::Unexpected("End callout counts");
  *((_DWORD *)this + 22) = v1 - 1;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 104LL))(*((_QWORD *)this + 16));
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1839LL,
      (__int64)"onecore\\private\\sdk\\inc\\wrl2\\Wrl2Agile.cpp",
      (const char *)(unsigned int)v2,
      v3);
}

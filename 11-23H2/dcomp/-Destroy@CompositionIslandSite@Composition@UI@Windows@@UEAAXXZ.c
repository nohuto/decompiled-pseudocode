/*
 * XREFs of ?Destroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x1800105AC
 * Callers:
 *     ?Destroy@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x180010530 (-Destroy@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?DisconnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@@Z @ 0x180009AB0 (-DisconnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEA.c)
 *     ?DestroyResources@CompositionIslandSite@Composition@UI@Windows@@AEAAXXZ @ 0x180010628 (-DestroyResources@CompositionIslandSite@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001E154 (-EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x180108A7C (-EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?DisconnectIslandAsync@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@PEAPEAUIAsyncAction@Foundation@4@@Z @ 0x180112418 (-DisconnectIslandAsync@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@23.c)
 */

void __fastcall Windows::UI::Composition::CompositionIslandSite::Destroy(
        Windows::UI::Composition::CompositionIslandSite *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // eax
  struct Windows::UI::Composition::CompositionIsland *v6; // rdx
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 45) )
  {
    v2 = *((_QWORD *)this + 24);
    v3 = *((_QWORD *)this + 28);
    v9 = v2;
    LOWORD(v7) = 1;
    CoreUICallSend(v3, &v9, 1LL, 6LL);
  }
  if ( *((_DWORD *)this + 45) == 1 )
  {
    Windows::UI::Composition::CompositionIsland::DisconnectIsland(
      this,
      *((struct Windows::UI::Composition::CompositionIsland **)this + 23));
  }
  else if ( *((_DWORD *)this + 45) == 2 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
    ++*(_DWORD *)(v4 + 88);
    if ( *(_DWORD *)(v4 + 80) != *(_DWORD *)(v4 + 84) + *(_DWORD *)(v4 + 88) )
      Microsoft::WRL2::FailFast::Unexpected("Begin callout counts");
    Microsoft::WRL2::ContextSession::EnsureMessageExtensions((Microsoft::WRL2::ContextSession *)v4);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 128) + 96LL))(*(_QWORD *)(v4 + 128));
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x711,
        (unsigned int)"onecore\\private\\sdk\\inc\\wrl2\\Wrl2Agile.cpp",
        (const char *)(unsigned int)v5,
        v7);
    Windows::UI::Composition::CompositionIsland::DisconnectIslandAsync(this, v6, 0LL);
    Microsoft::WRL2::ContextSession::EndPrivateCallout((Microsoft::WRL2::ContextSession *)v4);
  }
  Windows::UI::Composition::CompositionIslandSite::DestroyResources(this);
  (*(void (__fastcall **)(Windows::UI::Composition::CompositionIslandSite *))(*(_QWORD *)this + 280LL))(this);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}

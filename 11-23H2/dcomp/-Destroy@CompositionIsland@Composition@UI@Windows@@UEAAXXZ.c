/*
 * XREFs of ?Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ @ 0x1800098E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x1800099EC (-Destroy@-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows.c)
 *     ?DisconnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@@Z @ 0x180009AB0 (-DisconnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEA.c)
 *     ?Destroy@?$ContextEventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x180009BF0 (-Destroy@-$ContextEventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U-$InvokeModeOpt.c)
 *     ?EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001E154 (-EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?SetEnvironment@CompositionIsland@Composition@UI@Windows@@QEAAXPEAVCompositionIslandEnvironment@234@@Z @ 0x18006B2D0 (-SetEnvironment@CompositionIsland@Composition@UI@Windows@@QEAAXPEAVCompositionIslandEnvironment@.c)
 *     Windows::UI::Composition::UseCompositorToAllocateVisualId @ 0x18008D128 (Windows--UI--Composition--UseCompositorToAllocateVisualId.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x180108A7C (-EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?CloseLuid@Compositor@Composition@UI@Windows@@QEAAJ_K@Z @ 0x18010E758 (-CloseLuid@Compositor@Composition@UI@Windows@@QEAAJ_K@Z.c)
 *     ?DisconnectIslandAsync@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@PEAPEAUIAsyncAction@Foundation@4@@Z @ 0x180112418 (-DisconnectIslandAsync@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@23.c)
 */

void __fastcall Windows::UI::Composition::CompositionIsland::Destroy(Windows::UI::Composition::CompositionIsland *this)
{
  __int64 v2; // rbx
  const char *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // eax
  struct Windows::UI::Composition::CompositionIsland *v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Windows::UI::Composition::CompositionIsland::SetEnvironment(this, 0LL);
  if ( *((_QWORD *)this + 21) )
  {
    if ( (unsigned int)Windows::UI::Composition::UseCompositorToAllocateVisualId() )
      Windows::UI::Composition::Compositor::CloseLuid(
        *((Windows::UI::Composition::Compositor **)this + 3),
        *((_QWORD *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
  }
  v2 = *((_QWORD *)this + 3);
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Destroy(
    (char *)this + 392,
    v2);
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Destroy(
    (char *)this + 232,
    v2);
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Destroy(
    (char *)this + 192,
    v2);
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Destroy(
    (char *)this + 264,
    v2);
  if ( *((_QWORD *)this + 27) )
  {
    if ( *((_DWORD *)this + 46) == 1 )
    {
      Windows::UI::Composition::CompositionIsland::DisconnectIsland(
        *((struct Windows::UI::Composition::CompositionIslandSite **)this + 27),
        this);
    }
    else
    {
      if ( *((_DWORD *)this + 46) != 2 )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      v8 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
      ++*(_DWORD *)(v8 + 88);
      if ( *(_DWORD *)(v8 + 80) != *(_DWORD *)(v8 + 84) + *(_DWORD *)(v8 + 88) )
        Microsoft::WRL2::FailFast::Unexpected("Begin callout counts");
      Microsoft::WRL2::ContextSession::EnsureMessageExtensions((Microsoft::WRL2::ContextSession *)v8);
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 128) + 96LL))(*(_QWORD *)(v8 + 128));
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x711,
          (unsigned int)"onecore\\private\\sdk\\inc\\wrl2\\Wrl2Agile.cpp",
          (const char *)(unsigned int)v9,
          v11);
      Windows::UI::Composition::CompositionIsland::DisconnectIslandAsync(
        *((struct Windows::UI::Composition::CompositionIslandSite **)this + 27),
        v10,
        0LL);
      Microsoft::WRL2::ContextSession::EndPrivateCallout((Microsoft::WRL2::ContextSession *)v8);
    }
    if ( *((_BYTE *)this + 188) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xDE,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        v3);
  }
  v4 = *((_QWORD *)this + 3);
  v5 = *((_QWORD *)this + 58);
  *((_QWORD *)this + 58) = 0LL;
  Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v4, v5);
  v6 = *((_QWORD *)this + 3);
  v7 = *((_QWORD *)this + 52);
  *((_QWORD *)this + 52) = 0LL;
  Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v6, v7);
  (*(void (__fastcall **)(Windows::UI::Composition::CompositionIsland *))(*(_QWORD *)this + 312LL))(this);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}

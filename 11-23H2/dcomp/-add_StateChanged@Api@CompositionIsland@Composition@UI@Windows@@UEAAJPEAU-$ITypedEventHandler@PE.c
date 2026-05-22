/*
 * XREFs of ?add_StateChanged@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x180067490
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18006750C (-Add@-$AgileEventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAV.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Api::add_StateChanged(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v7; // eax
  unsigned int v8; // edi

  *a3 = 0LL;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 104);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(a1 - 96) & 2) != 0 )
  {
    v7 = Microsoft::WRL::AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
           a1 + 136,
           a2,
           a3);
    v8 = v7;
    if ( v7 < 0 )
      DoStackCaptureDirect(v7, 0x785u);
    else
      v8 = 0;
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v8;
}

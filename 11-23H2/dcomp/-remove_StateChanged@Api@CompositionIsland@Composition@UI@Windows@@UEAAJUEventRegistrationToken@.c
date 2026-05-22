/*
 * XREFs of ?remove_StateChanged@Api@CompositionIsland@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Remove@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAVContextSession@23@UEventRegistrationToken@@@Z @ 0x18000EC20 (-Remove@-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Api::remove_StateChanged(
        Windows::UI::Composition::CompositionIsland::Api *this,
        struct EventRegistrationToken a2)
{
  Microsoft::WRL2::ContextSession *v2; // rsi
  int v5; // eax
  int v6; // edi
  unsigned int v7; // ebx

  v2 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 96) & 2) != 0 )
  {
    v5 = Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           (char *)this + 136,
           v2,
           a2.value);
    v6 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x793u);
    else
      v6 = 0;
    v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v7;
}

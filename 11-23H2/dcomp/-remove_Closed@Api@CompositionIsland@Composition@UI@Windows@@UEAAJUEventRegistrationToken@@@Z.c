/*
 * XREFs of ?remove_Closed@Api@CompositionIsland@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180113CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Remove@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAVContextSession@23@UEventRegistrationToken@@@Z @ 0x18000EC20 (-Remove@-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Api::remove_Closed(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  struct _RTL_CRITICAL_SECTION *Ptr; // rsi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // edi

  Ptr = (struct _RTL_CRITICAL_SECTION *)this[-13].Ptr;
  Microsoft::WRL2::ContextSession::BeginApiEntry(Ptr);
  if ( ((__int64)this[-12].Ptr & 2) != 0 )
  {
    v6 = Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           this + 13,
           (__int64)Ptr,
           (struct IUnknown *)a2.value);
    v7 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x776u);
    else
      v7 = 0;
    v5 = v7;
  }
  else
  {
    v5 = 0;
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(Ptr);
  return v5;
}

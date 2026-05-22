/*
 * XREFs of ?remove_RequestedSizeChanged@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18015AD40
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Remove@?$ContextEventSource@U?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAVContextSession@23@UEventRegistrationToken@@@Z @ 0x180112F80 (-Remove@-$ContextEventSource@U-$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualIslandSite::Api::remove_RequestedSizeChanged(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  struct _RTL_CRITICAL_SECTION *Ptr; // rsi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // edi

  Ptr = (struct _RTL_CRITICAL_SECTION *)this[-28].Ptr;
  Microsoft::WRL2::ContextSession::BeginApiEntry(Ptr);
  if ( ((__int64)this[-27].Ptr & 2) != 0 )
  {
    v6 = Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           this + 5,
           (__int64)Ptr,
           (struct IUnknown *)a2.value);
    v7 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x14Au);
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

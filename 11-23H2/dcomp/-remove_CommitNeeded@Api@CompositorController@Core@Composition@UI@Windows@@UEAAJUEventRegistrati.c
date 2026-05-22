/*
 * XREFs of ?remove_CommitNeeded@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18012CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Remove@?$ContextEventSource@U?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAVContextSession@23@UEventRegistrationToken@@@Z @ 0x180112F80 (-Remove@-$ContextEventSource@U-$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@.c)
 */

__int64 __fastcall Windows::UI::Composition::Core::CompositorController::Api::remove_CommitNeeded(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  struct _RTL_CRITICAL_SECTION *Ptr; // rbx
  unsigned int v5; // edi
  int v6; // eax

  Ptr = (struct _RTL_CRITICAL_SECTION *)this[-2].Ptr;
  Microsoft::WRL2::ContextSession::BeginApiEntry(Ptr);
  if ( ((__int64)this[-1].Ptr & 2) != 0 )
  {
    v6 = Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::VisualIslandSite *,Windows::UI::Composition::VisualIslandSiteEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           this + 5,
           (__int64)this[-2].Ptr,
           (struct IUnknown *)a2.value);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x12Cu);
    else
      v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(Ptr);
  return v5;
}

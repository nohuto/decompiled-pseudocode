/*
 * XREFs of ?CreateStateChangedDeferral@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUICompositionNotificationDeferral@345@@Z @ 0x180112180
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateNotificationDeferral@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUICompositionDeferralHandlerPrivate@Private@234@IPEAPEAUICompositionNotificationDeferral@234@@Z @ 0x1801261A4 (-CreateNotificationDeferral@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUICompositionDeferr.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Api::CreateStateChangedDeferral(
        Windows::UI::Composition::CompositionIsland::Api *this,
        struct Windows::UI::Composition::ICompositionNotificationDeferral **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  int NotificationDeferral; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 96) & 2) != 0 )
  {
    NotificationDeferral = Windows::UI::Composition::CompositorCommon::CreateNotificationDeferral(
                             (Windows::UI::Composition::CompositionIsland::Api *)((char *)this + 24),
                             (struct Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate *)(((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 16) >> 64)),
                             *((_DWORD *)this + 77),
                             a2);
    v5 = NotificationDeferral;
    if ( NotificationDeferral >= 0 )
    {
      ++*((_DWORD *)this + 74);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F5,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        (const char *)(unsigned int)NotificationDeferral);
      DoStackCaptureDirect(v5, 0x73Cu);
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}

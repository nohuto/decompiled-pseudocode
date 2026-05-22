/*
 * XREFs of ?CreateTransformChangedDeferralInternal@CompositionIslandSite@Composition@UI@Windows@@AEAAJPEAPEAUICompositionNotificationDeferral@234@@Z @ 0x18015BE18
 * Callers:
 *     ?CreateTransformChangedDeferral@Api@CompositionIslandSite@Composition@UI@Windows@@UEAAJPEAPEAUICompositionNotificationDeferral@345@@Z @ 0x18015BD90 (-CreateTransformChangedDeferral@Api@CompositionIslandSite@Composition@UI@Windows@@UEAAJPEAPEAUIC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateNotificationDeferral@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUICompositionDeferralHandlerPrivate@Private@234@IPEAPEAUICompositionNotificationDeferral@234@@Z @ 0x1801261A4 (-CreateNotificationDeferral@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUICompositionDeferr.c)
 *     ?NotifyToIsland_DeferTransformChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAX_N@Z @ 0x18015BF40 (-NotifyToIsland_DeferTransformChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAX_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandSite::CreateTransformChangedDeferralInternal(
        Windows::UI::Composition::CompositionIslandSite *this,
        struct Windows::UI::Composition::ICompositionNotificationDeferral **a2)
{
  int NotificationDeferral; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 23) )
  {
    NotificationDeferral = Windows::UI::Composition::CompositorCommon::CreateNotificationDeferral(
                             (Windows::UI::Composition::CompositionIslandSite *)((char *)this + 144),
                             (struct Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate *)(((unsigned __int64)this + 144) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
                             *((_DWORD *)this + 54),
                             a2);
    v5 = NotificationDeferral;
    if ( NotificationDeferral >= 0 )
    {
      Windows::UI::Composition::CompositionIslandSite::NotifyToIsland_DeferTransformChanged(this, 1);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionislandsite.cpp",
        (const char *)(unsigned int)NotificationDeferral);
      return v5;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionislandsite.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}

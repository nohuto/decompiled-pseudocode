/*
 * XREFs of ?CreateTransformChangedDeferral@Api@CompositionIslandSite@Composition@UI@Windows@@UEAAJPEAPEAUICompositionNotificationDeferral@345@@Z @ 0x18015BD90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateTransformChangedDeferralInternal@CompositionIslandSite@Composition@UI@Windows@@AEAAJPEAPEAUICompositionNotificationDeferral@234@@Z @ 0x18015BE18 (-CreateTransformChangedDeferralInternal@CompositionIslandSite@Composition@UI@Windows@@AEAAJPEAPE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandSite::Api::CreateTransformChangedDeferral(
        Windows::UI::Composition::CompositionIslandSite::Api *this,
        struct Windows::UI::Composition::ICompositionNotificationDeferral **a2)
{
  Windows::UI::Composition::CompositionIslandSite *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int TransformChangedDeferralInternal; // eax

  v2 = (Windows::UI::Composition::CompositionIslandSite::Api *)((char *)this - 128);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    TransformChangedDeferralInternal = Windows::UI::Composition::CompositionIslandSite::CreateTransformChangedDeferralInternal(
                                         v2,
                                         a2);
    v5 = TransformChangedDeferralInternal;
    if ( TransformChangedDeferralInternal < 0 )
      DoStackCaptureDirect(TransformChangedDeferralInternal, 0x9Bu);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}

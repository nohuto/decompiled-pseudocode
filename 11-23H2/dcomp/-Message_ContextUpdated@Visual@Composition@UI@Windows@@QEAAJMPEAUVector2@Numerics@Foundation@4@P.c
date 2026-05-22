/*
 * XREFs of ?Message_ContextUpdated@Visual@Composition@UI@Windows@@QEAAJMPEAUVector2@Numerics@Foundation@4@PEAUVector3@674@1@Z @ 0x180087300
 * Callers:
 *     ?Thunk_Message_ContextUpdated_199@?$IVisualEvent_Receive@VVisual@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1800872D0 (-Thunk_Message_ContextUpdated_199@-$IVisualEvent_Receive@VVisual@Composition@UI@Windows@@@@SAJPE.c)
 * Callees:
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?UsingSession_NoLock@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSessionGuardIfNeeded@23@@Z @ 0x180087388 (-UsingSession_NoLock@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSessionGuardIfNeeded@23.c)
 *     ?NotifyVisualUpdated_Callback@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAVVisual@234@MAEBUVector2@Numerics@Foundation@4@AEBUVector3@784@2@Z @ 0x1800873DC (-NotifyVisualUpdated_Callback@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAVVisual@234@MAEB.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Message_ContextUpdated(
        Windows::UI::Composition::CompositionAnchor **this,
        float a2,
        struct Windows::Foundation::Numerics::Vector2 *a3,
        struct Windows::Foundation::Numerics::Vector3 *a4,
        struct Windows::Foundation::Numerics::Vector3 *a5)
{
  Microsoft::WRL2::ContextSession *v9; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0LL;
  if ( (int)Microsoft::WRL2::ContextRuntimeClass::UsingSession_NoLock(
              (Microsoft::WRL2::ContextRuntimeClass *)this,
              (struct Microsoft::WRL2::ContextSessionGuardIfNeeded *)&v9) >= 0 )
    Windows::UI::Composition::CompositionAnchor::NotifyVisualUpdated_Callback(
      this[35],
      (struct Windows::UI::Composition::Visual *)this,
      a2,
      a3,
      a4,
      a5);
  if ( v9 )
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v9);
  return 0LL;
}

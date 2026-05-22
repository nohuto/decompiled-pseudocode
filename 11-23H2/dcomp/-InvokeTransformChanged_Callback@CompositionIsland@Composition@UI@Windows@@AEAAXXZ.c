/*
 * XREFs of ?InvokeTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18006B500
 * Callers:
 *     ?NotifyTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18006B4DC (-NotifyTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?UpdateDeferredNotifications_Callback@CompositionIsland@Composition@UI@Windows@@AEAAX_N@Z @ 0x18006B610 (-UpdateDeferredNotifications_Callback@CompositionIsland@Composition@UI@Windows@@AEAAX_N@Z.c)
 *     ?Deferred_InvokeTransformChanged@CompositionIsland@Composition@UI@Windows@@CAJPEAX@Z @ 0x18006B870 (-Deferred_InvokeTransformChanged@CompositionIsland@Composition@UI@Windows@@CAJPEAX@Z.c)
 * Callees:
 *     ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x180067E40 (-GetSize@-$EventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVC.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_196638a044c5a75bc40c1fb87314c337___ @ 0x18006B59C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_196638a044c5a75bc40c1fb87314c337_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionIsland::InvokeTransformChanged_Callback(
        Windows::UI::Composition::CompositionIsland *this)
{
  __int64 v1; // rax
  __int128 v3; // xmm1

  v1 = *(_QWORD *)this;
  v3 = *((_OWORD *)this + 19);
  *((_OWORD *)this + 20) = *((_OWORD *)this + 18);
  *((_OWORD *)this + 21) = v3;
  (*(void (__fastcall **)(Windows::UI::Composition::CompositionIsland *, _QWORD))(v1 + 288))(
    this,
    *((_QWORD *)this + 40));
  if ( Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize((RTL_SRWLOCK *)this + 33) )
    Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_196638a044c5a75bc40c1fb87314c337___(*((Microsoft::WRL2::ContextSession **)this + 3));
  *((_BYTE *)this + 432) &= ~1u;
}

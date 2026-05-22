/*
 * XREFs of Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_cdec7bdfd239676f3e3a622811940398___ @ 0x18011141C
 * Callers:
 *     ?Thunk_NotifyFromSite_Closed_Callback_62@?$ICompositionIslandNotification_Receive@VCompositionIsland@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1801133C0 (-Thunk_NotifyFromSite_Closed_Callback_62@-$ICompositionIslandNotification_Receive@VCompositionIs.c)
 * Callees:
 *     ??$InvokeAll@PEAUICompositionIsland@Composition@UI@Windows@@PEAUICompositionIslandEventArgs@234@@?$EventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUICompositionIsland@Composition@UI@Windows@@PEAUICompositionIslandEventArgs@456@@Z @ 0x18001BF00 (--$InvokeAll@PEAUICompositionIsland@Composition@UI@Windows@@PEAUICompositionIslandEventArgs@234@.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001EEA8 (-EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18002CA28 (-BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_cdec7bdfd239676f3e3a622811940398___(
        Microsoft::WRL2::ContextSession *this,
        __int64 *a2)
{
  int v4; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  Microsoft::WRL2::ContextSession::BeginApiCallback((struct _RTL_CRITICAL_SECTION *)this);
  v4 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<Windows::UI::Composition::ICompositionIsland *,Windows::UI::Composition::ICompositionIslandEventArgs *>(
         *a2,
         a2[1],
         a2[2]);
  if ( v4 < 0 )
    Microsoft::WRL2::FailFast::ForHR((unsigned int)v4, retaddr);
  Microsoft::WRL2::ContextSession::EndApiCallback((struct _RTL_CRITICAL_SECTION *)this);
  return Microsoft::WRL2::NestableRuntimeClass::InternalRelease(this);
}

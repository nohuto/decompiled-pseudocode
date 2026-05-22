/*
 * XREFs of ?Thunk_NotifyFromSite_Closed_Callback_62@?$ICompositionIslandNotification_Receive@VCompositionIsland@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1801133C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x180067E40 (-GetSize@-$EventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVC.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_cdec7bdfd239676f3e3a622811940398___ @ 0x18011141C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_cdec7bdfd239676f3e3a622811940398_.c)
 */

__int64 __fastcall ICompositionIslandNotification_Receive<Windows::UI::Composition::CompositionIsland>::Thunk_NotifyFromSite_Closed_Callback_62(
        Microsoft::WRL2::ContextRuntimeClass *this)
{
  char *v1; // rdi
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this + 232;
  if ( Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize((RTL_SRWLOCK *)this + 29) )
  {
    v4[0] = (__int64)v1;
    v4[2] = 0LL;
    v4[1] = ((unsigned __int64)this + 128) & -(__int64)(this != 0LL);
    Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_cdec7bdfd239676f3e3a622811940398___(
      *((Microsoft::WRL2::ContextSession **)this + 3),
      v4);
  }
  if ( (*((_BYTE *)this + 32) & 2) != 0 )
    Microsoft::WRL2::ContextRuntimeClass::Dispose(this);
  return 0LL;
}

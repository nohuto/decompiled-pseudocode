/*
 * XREFs of ??$InvokeAll@PEAUICompositionIsland@Composition@UI@Windows@@PEAUICompositionIslandEventArgs@234@@?$EventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUICompositionIsland@Composition@UI@Windows@@PEAUICompositionIslandEventArgs@456@@Z @ 0x18001BF00
 * Callers:
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_196638a044c5a75bc40c1fb87314c337___ @ 0x18006B59C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_196638a044c5a75bc40c1fb87314c337_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_49cf87b5178968fc57886ea1acc8fa0e___ @ 0x180111384 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_49cf87b5178968fc57886ea1acc8fa0e_.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_cdec7bdfd239676f3e3a622811940398___ @ 0x18011141C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_cdec7bdfd239676f3e3a622811940398_.c)
 * Callees:
 *     ??$DoInvoke@V_lambda_58b2e4a04be40d8d12f4ba03a84015ee_@@@?$EventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_58b2e4a04be40d8d12f4ba03a84015ee_@@@Z @ 0x18001BF34 (--$DoInvoke@V_lambda_58b2e4a04be40d8d12f4ba03a84015ee_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<Windows::UI::Composition::ICompositionIsland *,Windows::UI::Composition::ICompositionIslandEventArgs *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  v4[0] = &v5;
  v4[1] = &v6;
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_58b2e4a04be40d8d12f4ba03a84015ee_>(
           a1,
           v4);
}

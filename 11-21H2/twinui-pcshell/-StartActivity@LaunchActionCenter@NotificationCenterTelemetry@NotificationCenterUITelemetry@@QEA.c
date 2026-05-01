/*
 * XREFs of ?StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4InvokeMethod@3@W4InputType@3@W4StateOnInvoke@3@@Z @ 0x18034F8F0
 * Callers:
 *     ??$Start@W4InvokeMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@W4StateOnInvoke@2@@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAW4InvokeMethod@2@AEAW4InputType@2@$$QEAW4StateOnInvoke@2@@Z @ 0x180348954 (--$Start@W4InvokeMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@W4StateOnInvoke@2@@Launc.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x18034FB90 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x180017574 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?GetMode@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAIXZ @ 0x18002F850 (-GetMode@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAIXZ.c)
 *     ?zInternalStart@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002FA14 (-zInternalStart@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int Mode; // [rsp+50h] [rbp-20h] BYREF
  int v15; // [rsp+54h] [rbp-1Ch] BYREF
  int v16; // [rsp+58h] [rbp-18h] BYREF
  DWORD CurrentThreadId; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+90h] [rbp+20h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v9 = wil::details::static_lazy<NotificationCenterLogging>::get(
         v8,
         _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
  v10 = (_DWORD *)v9[1];
  if ( *v10 > 5u && tlgKeywordOn(v9[1], 0x400000000000LL) )
  {
    v19 = a4;
    Mode = NotificationCenterUITelemetry::NotificationCenterTelemetry::GetMode(v12, v11);
    v15 = a3;
    v16 = a2;
    v18 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v13 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v10,
      (int)&unk_1806A3A63,
      *(_QWORD *)(a1 + 48) + 8,
      v13,
      (__int64)&v18,
      (__int64)&CurrentThreadId,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&Mode,
      (__int64)&v19);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

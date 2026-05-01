/*
 * XREFs of ?StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x18002F754
 * Callers:
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x18002F5A0 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ??$Start@W4DismissMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@AEAW4InputType@2@@Z @ 0x1803488FC (--$Start@W4DismissMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@@DismissActionCenter@No.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x18034FB90 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?GetMode@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAIXZ @ 0x18002F850 (-GetMode@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAIXZ.c)
 *     ?zInternalStart@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002FA14 (-zInternalStart@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflect.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1800BF614 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::StartActivity(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // rdi
  int v9; // eax
  int v10; // [rsp+50h] [rbp-28h] BYREF
  DWORD CurrentThreadId; // [rsp+54h] [rbp-24h] BYREF
  _QWORD v12[4]; // [rsp+58h] [rbp-20h] BYREF
  unsigned int Mode; // [rsp+80h] [rbp+8h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = wil::details::static_lazy<NotificationCenterLogging>::get(
         v6,
         _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
  v8 = *(_DWORD **)(v7 + 8);
  if ( *v8 > 5u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v7 + 8), 0x400000000000LL) )
  {
    Mode = NotificationCenterUITelemetry::NotificationCenterTelemetry::GetMode();
    v14 = a3;
    v10 = a2;
    v12[0] = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v9 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)v8,
      (unsigned int)&unk_1806A3879,
      *(_QWORD *)(a1 + 48) + 8,
      v9,
      (__int64)v12,
      (__int64)&CurrentThreadId,
      (__int64)&v10,
      (__int64)&v14,
      (__int64)&Mode);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

/*
 * XREFs of ?StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x18035480C
 * Callers:
 *     ?OnDismiss@CControlCenterExperienceManager@@UEAAJXZ @ 0x180043E50 (-OnDismiss@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x18004F0C0 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ??$Start@W4DismissMethod@ControlCenterUITelemetry@@AEAW4InputType@2@@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@AEAW4InputType@2@@Z @ 0x180352824 (--$Start@W4DismissMethod@ControlCenterUITelemetry@@AEAW4InputType@2@@DismissControlCenterV1@Cont.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18000EC20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x18035537C (-get@-$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z.c)
 *     ?zInternalStart@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180355644 (-zInternalStart@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflec.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::StartActivity(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // rdi
  int v9; // eax
  DWORD CurrentThreadId; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+48h] [rbp-20h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = wil::details::static_lazy<ControlCenterLogging>::get(
         v6,
         _lambda_7497dc87b220aaed4d14ef0ec7d62e5e_::_lambda_invoker_cdecl_);
  v8 = *(_DWORD **)(v7 + 8);
  if ( *v8 > 5u && tlgKeywordOn(*(_QWORD *)(v7 + 8), 0x400000000000LL) )
  {
    v12 = a3;
    v13 = a2;
    v11[0] = 50331648LL;
    CurrentThreadId = GetCurrentThreadId();
    v9 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v8,
      (int)&unk_1806A3DC5,
      *(_QWORD *)(a1 + 48) + 8,
      v9,
      (__int64)v11,
      (__int64)&CurrentThreadId,
      (__int64)&v13,
      (__int64)&v12);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

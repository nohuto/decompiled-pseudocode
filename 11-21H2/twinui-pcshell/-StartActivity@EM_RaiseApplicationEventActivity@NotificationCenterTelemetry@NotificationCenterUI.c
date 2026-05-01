/*
 * XREFs of ?StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x18004A1A8
 * Callers:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18004945C (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18004CF88 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800A516C (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     _lambda_52a7597311830440b167c013db955118_::operator() @ 0x1801964A0 (_lambda_52a7597311830440b167c013db955118_--operator().c)
 *     ?RaiseHideRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x180354588 (-RaiseHideRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18004A26C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@.c)
 *     ?zInternalStart@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18004B0F0 (-zInternalStart@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::StartActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *this,
        const unsigned __int16 *a2,
        char a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = *(_DWORD **)(wil::details::static_lazy<NotificationCenterLogging>::get(
                      v6,
                      _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v7 > 5u )
  {
    LOBYTE(v10) = a3;
    v8 = (__int64)a2;
    v9[0] = 0LL;
    LODWORD(v11) = GetCurrentThreadId();
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
      (int)v7,
      (int)&dword_1806A3546,
      (__int64)v9,
      (__int64)&v11,
      (__int64)&v8,
      (__int64)&v10);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)((char *)this + 8));
}

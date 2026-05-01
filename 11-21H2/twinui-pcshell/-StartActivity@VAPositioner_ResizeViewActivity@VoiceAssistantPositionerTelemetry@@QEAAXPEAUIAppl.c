/*
 * XREFs of ?StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@UtagSIZE@@@Z @ 0x1804F6F20
 * Callers:
 *     ?ResizeView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1804F62B0 (-ResizeView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x180092220 (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180237A88 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@44@Z @ 0x18030F15C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@@-$_tlgWriteTe.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity::StartActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity *this,
        struct IApplicationView *a2,
        struct tagSIZE a3)
{
  LONG cx; // ebx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _DWORD *v8; // rsi
  const GUID *v9; // rax
  __int64 v10; // [rsp+50h] [rbp-38h] BYREF
  __int64 CensoredAumidFromView; // [rsp+58h] [rbp-30h] BYREF
  __int64 v12[5]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF
  struct tagSIZE v14; // [rsp+A0h] [rbp+18h]
  __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  v14 = a3;
  cx = a3.cx;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v7 = wil::details::static_lazy<WindowManagementLogging>::get(
         v6,
         _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v8 = (_DWORD *)v7[1];
  if ( *v8 > 5u && tlgKeywordOn(v7[1], 0x400000000000LL) )
  {
    LODWORD(v13) = v14.cy;
    LODWORD(v15) = cx;
    CensoredAumidFromView = (__int64)VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
    v12[0] = 0x1000000LL;
    LODWORD(v10) = GetCurrentThreadId();
    v9 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v8,
      (unsigned __int8 *)dword_1806C2161,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v9,
      (__int64)v12,
      (__int64)&v10,
      (const WCHAR **)&CensoredAumidFromView,
      (__int64)&v15,
      (__int64)&v13);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity *)((char *)this + 8));
}

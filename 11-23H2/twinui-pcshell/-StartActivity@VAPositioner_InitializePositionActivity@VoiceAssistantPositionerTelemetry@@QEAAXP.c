/*
 * XREFs of ?StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1805AE7BC
 * Callers:
 *     ?InitializePosition@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1805ACD60 (-InitializePosition@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 * Callees:
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x18003F90C (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z @ 0x18003F9B4 (-GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18003FAF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlg_ea_18003FAF0.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1805B1A48 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRef.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity::StartActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _DWORD *v8; // rdi
  int v9; // eax
  __int64 ActivationId; // [rsp+50h] [rbp-38h] BYREF
  __int64 CensoredAumidFromView; // [rsp+58h] [rbp-30h] BYREF
  __int64 v12[5]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+20h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = wil::details::static_lazy<WindowManagementLogging>::get(
         v6,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v8 = (_DWORD *)v7[1];
  if ( *v8 > 4u && tlgKeywordOn(v7[1], 0x400000000000LL) )
  {
    ActivationId = VoiceAssistantPositionerTelemetry::GetActivationId(a3);
    LOBYTE(v13) = a3 != 0LL;
    CensoredAumidFromView = (__int64)VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
    v12[0] = 50331648LL;
    LODWORD(v14) = GetCurrentThreadId();
    v9 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      (int)v8,
      (int)&dword_1808690DC,
      *((_QWORD *)this + 6) + 8,
      v9,
      (__int64)v12,
      (__int64)&v14,
      (const WCHAR **)&CensoredAumidFromView,
      (__int64)&v13,
      (__int64)&ActivationId);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}

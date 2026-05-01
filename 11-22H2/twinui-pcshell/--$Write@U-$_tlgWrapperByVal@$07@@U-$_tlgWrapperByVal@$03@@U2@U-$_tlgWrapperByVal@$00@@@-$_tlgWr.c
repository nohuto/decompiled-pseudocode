/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18003FCA8
 * Callers:
 *     ?Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x18003FBC8 (-Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z.c)
 *     ?Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z @ 0x180491EDC (-Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z.c)
 *     ?Stop@SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N@Z @ 0x180518CC8 (-Stop@SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogg.c)
 *     ?GestureActionResult_@MultitaskingViewTelemetry@@QEBAXII_N@Z @ 0x18055D3E4 (-GestureActionResult_@MultitaskingViewTelemetry@@QEBAXII_N@Z.c)
 *     ?Stop@EnsureInitializedAsync@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1806E9A90 (-Stop@EnsureInitializedAsync@SharedVisualHostProvider@@QEAAX_N@Z.c)
 *     ?Stop@StartXamlHostThreadProc@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1806E9CF0 (-Stop@StartXamlHostThreadProc@SharedVisualHostProvider@@QEAAX_N@Z.c)
 *     ?Stop@UpdateSize@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1806EA2B0 (-Stop@UpdateSize@SharedVisualHostProvider@@QEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  __int64 v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]

  v16 = a8;
  v14 = a7;
  v12 = a6;
  v10 = a5;
  v17 = 1LL;
  v15 = 4LL;
  v13 = 4LL;
  v11 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0, 6u, &v9);
}

/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x18001CACC
 * Callers:
 *     ?StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4InvokeMethod@3@W4InputType@3@W4StateOnInvoke@3@@Z @ 0x18001C2A0 (-StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEA.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x18001C790 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 *     ?FireInputPaneShowingEvent_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBUtagRECT@@@Z @ 0x18050F92C (-FireInputPaneShowingEvent_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBUtagRECT@@@Z.c)
 *     ?Stop@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N00@Z @ 0x180517D70 (-Stop@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N00@Z.c)
 *     ?SnapWindowWithGuidedSnapAssist_@CSnapComponentTelemetry@@QEBAX_KAEAURect@Foundation@Windows@@H@Z @ 0x1806637D0 (-SnapWindowWithGuidedSnapAssist_@CSnapComponentTelemetry@@QEBAX_KAEAURect@Foundation@Windows@@H@.c)
 *     ?SnapWindow_@CSnapComponentTelemetry@@QEBAXPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x1806639D0 (-SnapWindow_@CSnapComponentTelemetry@@QEBAXPEAUHWND__@@PEBUtagRECT@@K@Z.c)
 *     ?StartActivity@CreateSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z @ 0x180663AB8 (-StartActivity@CreateSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z.c)
 *     ?StartActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXUtagPOINT@@IK@Z @ 0x180663D40 (-StartActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXUtagPOINT@@IK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-69h] BYREF
  __int64 v12; // [rsp+50h] [rbp-49h]
  __int64 v13; // [rsp+58h] [rbp-41h]
  __int64 v14; // [rsp+60h] [rbp-39h]
  __int64 v15; // [rsp+68h] [rbp-31h]
  __int64 v16; // [rsp+70h] [rbp-29h]
  __int64 v17; // [rsp+78h] [rbp-21h]
  __int64 v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  __int64 v20; // [rsp+90h] [rbp-9h]
  __int64 v21; // [rsp+98h] [rbp-1h]
  __int64 v22; // [rsp+A0h] [rbp+7h]
  __int64 v23; // [rsp+A8h] [rbp+Fh]

  v22 = a10;
  v20 = a9;
  v18 = a8;
  v16 = a7;
  v14 = a6;
  v12 = a5;
  v23 = 4LL;
  v21 = 4LL;
  v19 = 4LL;
  v17 = 4LL;
  v15 = 4LL;
  v13 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 8u, &v11);
}

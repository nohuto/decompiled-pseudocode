/*
 * XREFs of ??4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805215D8
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180526030 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802DCAAC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAA_ea_1802DCAAC.c)
 *     ??1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180521438 (--1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180521524 (--4-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 */

_QWORD *__fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::operator=(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v5);
  v5[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::~OnInputAppRequestedHideActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *)v5);
  return a1;
}

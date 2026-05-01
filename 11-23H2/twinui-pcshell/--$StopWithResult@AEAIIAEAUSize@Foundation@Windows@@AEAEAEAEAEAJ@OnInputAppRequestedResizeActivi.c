/*
 * XREFs of ??$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXJAEAI$$QEAIAEAUSize@Foundation@Windows@@AEAE3AEAJ@Z @ 0x18051EC84
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180526460 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?SetStopResult@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXJPEAJ@Z @ 0x1805160EC (-SetStopResult@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAA.c)
 */

__int64 __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StopWithResult<unsigned int &,unsigned int,Windows::Foundation::Size &,unsigned char &,unsigned char &,long &>(
        __int64 a1,
        unsigned int a2,
        RTL_SRWLOCK *a3,
        unsigned int *a4,
        __int64 *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  __int64 v10; // r9
  bool v11; // r10

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
    a1,
    a2,
    a3);
  v10 = *a5;
  v11 = *a6 != 0;
  LOBYTE(a6) = *a7 != 0;
  LOBYTE(a5) = v11;
  return TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::Stop(
           a1,
           LODWORD(a3->Ptr),
           *a4,
           v10,
           a5,
           a6);
}

/*
 * XREFs of ??$Start@PEBG@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@$$QEAPEBG@Z @ 0x18051EC3C
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802DCE94 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800AC874 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1802DDC50 (-StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *__fastcall TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::Start<unsigned short const *>(
        TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *this,
        const unsigned __int16 **a2)
{
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"EnsureInputAppIsReady");
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::`vftable';
  TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::StartActivity(this, *a2);
  return this;
}

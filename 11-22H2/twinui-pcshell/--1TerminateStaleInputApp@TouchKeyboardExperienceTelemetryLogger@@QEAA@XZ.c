/*
 * XREFs of ??1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800AC798
 * Callers:
 *     ?TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800AC5FC (-TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AC96C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::~TerminateStaleInputApp(
        TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}

/*
 * XREFs of ??1InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045ADF0
 * Callers:
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18022E232 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::EnsureInputAppIsActivated_::_1_::dtor$3 @ 0x18022E574 (_TouchKeyboardExperienceManager--EnsureInputAppIsActivated_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18045D29C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_T.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::~InputAppResumeRequested(
        TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

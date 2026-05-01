/*
 * XREFs of ??1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18050C3A8
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180514850 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     _TouchKeyboardExperienceManager::OnInputAppChangeApproved_::_1_::dtor$0 @ 0x180514A08 (_TouchKeyboardExperienceManager--OnInputAppChangeApproved_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802DACD4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_T.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested(
        TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

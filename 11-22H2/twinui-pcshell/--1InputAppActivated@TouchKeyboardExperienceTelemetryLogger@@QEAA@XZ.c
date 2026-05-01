/*
 * XREFs of ??1InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1805213B4
 * Callers:
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180525D5C (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppActivated_::_1_::dtor$0 @ 0x180525E1F (_KeyboardHosting--TabTipAdapter--OnInputAppActivated_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802DACD4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_T.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppActivated::~InputAppActivated(
        TouchKeyboardExperienceTelemetryLogger::InputAppActivated *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::InputAppActivated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

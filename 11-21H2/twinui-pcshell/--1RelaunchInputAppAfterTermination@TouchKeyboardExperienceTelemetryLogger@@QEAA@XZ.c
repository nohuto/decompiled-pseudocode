/*
 * XREFs of ??1RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046F3F0
 * Callers:
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1804793DC (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     _KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination_::_1_::dtor$0 @ 0x1804794B9 (_KeyboardHosting--TabTipAdapter--RelaunchInputAppAfterTermination_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BF208 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination::~RelaunchInputAppAfterTermination(
        TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

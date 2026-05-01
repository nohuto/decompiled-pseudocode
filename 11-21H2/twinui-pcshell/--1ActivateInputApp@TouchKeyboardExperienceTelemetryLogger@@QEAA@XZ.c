/*
 * XREFs of ??1ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AD40
 * Callers:
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18045BB50 (-ActivateInputApp@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::ActivateInputApp_::_1_::dtor$0 @ 0x18045BCA5 (_TouchKeyboardExperienceManager--ActivateInputApp_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BF208 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::~ActivateInputApp(
        TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

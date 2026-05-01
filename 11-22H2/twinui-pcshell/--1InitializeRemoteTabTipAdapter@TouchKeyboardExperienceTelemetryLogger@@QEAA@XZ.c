/*
 * XREFs of ??1InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180166DA8
 * Callers:
 *     ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180166DD4 (-InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _KeyboardHosting::TabTipAdapter::InitializeRemoteTabTipAdapter_::_1_::dtor$0 @ 0x1802C47FB (_KeyboardHosting--TabTipAdapter--InitializeRemoteTabTipAdapter_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801669E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflecto.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::~InitializeRemoteTabTipAdapter(
        TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

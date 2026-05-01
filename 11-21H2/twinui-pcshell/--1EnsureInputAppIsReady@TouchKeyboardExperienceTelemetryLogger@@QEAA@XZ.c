/*
 * XREFs of ??1EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046F1D0
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18022F360 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady_::_1_::dtor$1 @ 0x18022F4AD (_KeyboardHosting--TabTipAdapter--EnsureInputAppIsReady_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BF504 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflecto.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::~EnsureInputAppIsReady(
        TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

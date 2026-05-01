/*
 * XREFs of ??1DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046F1A4
 * Callers:
 *     ?CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x180470054 (-CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@.c)
 *     _KeyboardHosting::TabTipAdapter::CreateDeferredShowRequest_::_1_::dtor$0 @ 0x1804701CC (_KeyboardHosting--TabTipAdapter--CreateDeferredShowRequest_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BF208 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::DeferredRequestCreated::~DeferredRequestCreated(
        TouchKeyboardExperienceTelemetryLogger::DeferredRequestCreated *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::DeferredRequestCreated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

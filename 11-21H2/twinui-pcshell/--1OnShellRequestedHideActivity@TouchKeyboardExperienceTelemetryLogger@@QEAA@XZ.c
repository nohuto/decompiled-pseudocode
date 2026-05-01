/*
 * XREFs of ??1OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046F304
 * Callers:
 *     ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x180477260 (-OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18045D29C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_T.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity::~OnShellRequestedHideActivity(
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

/*
 * XREFs of ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180527028
 * Callers:
 *     _lambda_4efd027938208ec783bf057b80dc7741_::operator() @ 0x180207794 (_lambda_4efd027938208ec783bf057b80dc7741_--operator().c)
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 *     ?OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18020AA5C (-OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802DA566 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18052140C (--1InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18052AFE8 (-StartActivity@InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18052B7D4 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::OnInputAppTerminated(KeyboardHosting::TabTipAdapter *this)
{
  _QWORD v2[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v2,
    (__int64)"InputAppTerminated");
  v2[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppTerminated *)v2);
  *((_BYTE *)this + 374) = 0;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 296LL))(*((_QWORD *)this + 15));
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
  TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::~InputAppTerminated((TouchKeyboardExperienceTelemetryLogger::InputAppTerminated *)v2);
}

/*
 * XREFs of ??1OnShellHookMessage@IamTraceLogging@@QEAA@XZ @ 0x1802E039C
 * Callers:
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$3 @ 0x180218860 (_CApplicationManager--OnShellHookMessage_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800767C0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall IamTraceLogging::OnShellHookMessage::~OnShellHookMessage(IamTraceLogging::OnShellHookMessage *this)
{
  *(_QWORD *)this = &IamTraceLogging::OnShellHookMessage::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

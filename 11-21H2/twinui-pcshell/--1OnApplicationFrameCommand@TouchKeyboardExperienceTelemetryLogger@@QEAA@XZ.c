/*
 * XREFs of ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AEA8
 * Callers:
 *     _lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_ @ 0x1801AF4E8 (_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_--__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180462280 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     _TouchKeyboardExperienceManager::OnCommand_::_1_::dtor$0 @ 0x18046252C (_TouchKeyboardExperienceManager--OnCommand_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BF0E8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand(
        TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

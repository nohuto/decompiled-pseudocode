/*
 * XREFs of ??1ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAA@XZ @ 0x1802D0C2A
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18003D4C0 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     _CApplicationFrameService::OnCommand_::_1_::dtor$1 @ 0x1802BEE4D (_CApplicationFrameService--OnCommand_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803BB2E4 (-Destroy@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall AppCloseTelemetry::ShellAppManagerCloseRequested::~ShellAppManagerCloseRequested(
        AppCloseTelemetry::ShellAppManagerCloseRequested *this)
{
  *(_QWORD *)this = &AppCloseTelemetry::ShellAppManagerCloseRequested::`vftable';
  wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

/*
 * XREFs of ??1AppFrameHostStartup@CAppManagerTelemetry@@QEAA@XZ @ 0x18002A1A4
 * Callers:
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x180029E6C (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     _CApplicationFrameService::_CreateFrameManager_::_1_::dtor$0 @ 0x1802BD61A (_CApplicationFrameService--_CreateFrameManager_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002A54C (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall CAppManagerTelemetry::AppFrameHostStartup::~AppFrameHostStartup(
        CAppManagerTelemetry::AppFrameHostStartup *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}

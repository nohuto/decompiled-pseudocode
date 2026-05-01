/*
 * XREFs of ??1PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F3CC8
 * Callers:
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1802FCA04 (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 *     _CAppViewManager::_PrepareToSwitchAsyncWorker_::_1_::dtor$0 @ 0x1802FCB8B (_CAppViewManager--_PrepareToSwitchAsyncWorker_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800767C0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker::~PrepareToSwitchAsyncWorker(
        CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker *this)
{
  *(_QWORD *)this = &CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

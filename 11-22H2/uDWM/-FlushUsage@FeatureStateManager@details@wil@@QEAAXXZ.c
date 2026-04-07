/*
 * XREFs of ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18009B6AC
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180010670 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_d51448ba32f8ef42e59400edd4566183_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800991A0 (-_lambda_invoker_cdecl_@_lambda_d51448ba32f8ef42e59400edd4566183_@@CA@PEAU_TP_CALLBACK_INSTANCE@.c)
 * Callees:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800104A8 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x180015AA8 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18004C9CC (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x18004CC74 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

void __fastcall wil::details::FeatureStateManager::FlushUsage(wil::details::FeatureStateManager *this)
{
  if ( !wil::ProcessShutdownInProgress(this) && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)this) )
  {
    wil::details_abi::SubscriptionList::OnSignaled(
      (wil::details_abi::SubscriptionList *)(*((_QWORD *)this + 3) + 200LL),
      *((RTL_SRWLOCK **)this + 3));
    wil::details_abi::FeatureStateData::RecordUsage(*((RTL_SRWLOCK **)this + 3));
  }
}

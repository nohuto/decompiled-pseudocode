/*
 * XREFs of ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x180007500
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18000670C (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x1800070B8 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x18000716C (-EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details::WilApiImpl_RecordFeatureError(
        wil::details *this,
        struct FEATURE_ERROR *a2,
        const struct FEATURE_ERROR *a3)
{
  int v4; // edi

  v4 = (int)this;
  if ( wil::details::g_featureStateManager )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook((unsigned int)this, 0LL, a2, 1, 0LL, 0LL, 0, 1uLL);
    if ( wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)&wil::details::g_featureStateManager)
      && wil::details_abi::FeatureStateData::RecordFeatureError(qword_180062050, v4, a2)
      && !wil::details::g_processShutdownInProgress
      && (!wil::details::g_pfnDllShutdownInProgress || !(unsigned __int8)wil::details::g_pfnDllShutdownInProgress()) )
    {
      AcquireSRWLockExclusive(&SRWLock);
      wil::details::FeatureStateManager::EnsureTimerUnderLock(&wil::details::g_featureStateManager);
      ReleaseSRWLockExclusive(&SRWLock);
    }
  }
}

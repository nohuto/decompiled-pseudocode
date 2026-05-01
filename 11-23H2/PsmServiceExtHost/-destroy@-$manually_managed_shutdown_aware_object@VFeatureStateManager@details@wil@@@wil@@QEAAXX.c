/*
 * XREFs of ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180048EBC
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x180053FD0 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180075DA0 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800784A0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

void __fastcall wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::destroy(
        wil::details::FeatureStateManager *this)
{
  void *v2; // rcx

  if ( wil::ProcessShutdownInProgress(this) )
  {
    *(_BYTE *)this = 0;
    v2 = (void *)*((_QWORD *)this + 2);
    if ( v2 )
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v2);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager(this);
  }
}

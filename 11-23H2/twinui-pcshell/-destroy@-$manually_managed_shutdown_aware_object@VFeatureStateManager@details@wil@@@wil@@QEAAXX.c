/*
 * XREFs of ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1801BD910
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1802C7A40 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800D1530 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18038D0DC (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18038F12C (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
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

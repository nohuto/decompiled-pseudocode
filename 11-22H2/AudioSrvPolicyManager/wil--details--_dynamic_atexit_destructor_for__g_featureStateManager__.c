/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x18004B710
 * Callers:
 *     <none>
 * Callees:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800138B0 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180013F48 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180037314 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__(wil *a1)
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v1; // rdx

  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_featureStateManager = 0;
    if ( qword_1800620A8 )
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release((HANDLE *)qword_1800620A8);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager(
      (wil::details::FeatureStateManager *)&wil::details::g_featureStateManager,
      v1);
  }
}

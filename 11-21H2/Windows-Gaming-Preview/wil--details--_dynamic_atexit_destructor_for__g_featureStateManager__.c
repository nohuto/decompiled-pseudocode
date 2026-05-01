/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x18004D480
 * Callers:
 *     <none>
 * Callees:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180006A0C (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180008A74 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__(__int64 a1, void *a2)
{
  if ( wil::details::g_processShutdownInProgress
    || wil::details::g_pfnDllShutdownInProgress && (unsigned __int8)wil::details::g_pfnDllShutdownInProgress() )
  {
    wil::details::g_featureStateManager = 0;
    if ( qword_180062048 )
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release((char *)qword_180062048);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager(
      (wil::details::FeatureStateManager *)&wil::details::g_featureStateManager,
      a2);
  }
}

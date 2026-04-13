/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800F7970
 * Callers:
 *     <none>
 * Callees:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800294C8 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180042A80 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__(__int64 a1, void *a2)
{
  if ( wil::details::g_processShutdownInProgress
    || wil::details::g_pfnDllShutdownInProgress && (unsigned __int8)wil::details::g_pfnDllShutdownInProgress() )
  {
    wil::details::g_featureStateManager = 0;
    if ( qword_1801AD808 )
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release((char *)qword_1801AD808);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager(
      (wil::details::FeatureStateManager *)&wil::details::g_featureStateManager,
      a2);
  }
}

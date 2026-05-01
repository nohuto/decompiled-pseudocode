/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeResultHeader__ @ 0x100020E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void wil::details::_dynamic_initializer_for__g_header_init_InitializeResultHeader__()
{
  wil::details::g_pfnGetContextAndNotifyFailure = (int)wil::details::GetContextAndNotifyFailure;
  wil::details_abi::g_pProcessLocalData = (int)&wil::details::g_processLocalData;
  wil::details::g_pThreadFailureCallbacks = (int)&wil::details::g_threadFailureCallbacks;
}

/*
 * XREFs of _dynamic_atexit_destructor_for__GameDVR_OutputDebug::s_hTraceOutputFile__ @ 0x1802C7B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_atexit_destructor_for__GameDVR_OutputDebug::s_hTraceOutputFile__()
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&GameDVR_OutputDebug::s_hTraceOutputFile);
}

/*
 * XREFs of _dynamic_atexit_destructor_for__g_CustomEndpointResourceManagerProvider__ @ 0x18007E0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_CustomEndpointResourceManagerProvider__()
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&g_CustomEndpointResourceManagerProvider);
}

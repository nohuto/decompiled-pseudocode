/*
 * XREFs of _dynamic_atexit_destructor_for__g_effectPackConfigurationManager__ @ 0x18007E280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_effectPackConfigurationManager__()
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&g_effectPackConfigurationManager);
}

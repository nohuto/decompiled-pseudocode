/*
 * XREFs of wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x100020A0
 * Callers:
 *     <none>
 * Callees:
 *     _atexit @ 0x10006F53 (_atexit.c)
 */

int wil::details::_dynamic_initializer_for__g_processLocalData__()
{
  return atexit(wil::details::_dynamic_atexit_destructor_for__g_processLocalData__);
}

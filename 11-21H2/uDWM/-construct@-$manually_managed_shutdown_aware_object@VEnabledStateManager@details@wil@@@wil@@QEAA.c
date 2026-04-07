/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18001430C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001010 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_180142E78 = 0LL;
  qword_180142E70 = 0LL;
  byte_180142E80 = 0;
  xmmword_180142E88 = 0LL;
  xmmword_180142E98 = 0LL;
  xmmword_180142EA8 = 0LL;
  xmmword_180142EB8 = 0LL;
  xmmword_180142EC8 = 0LL;
  return result;
}

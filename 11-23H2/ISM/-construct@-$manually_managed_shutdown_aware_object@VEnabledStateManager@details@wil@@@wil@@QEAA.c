/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180050B04
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001890 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1802688F8 = 0LL;
  qword_1802688F0 = 0LL;
  byte_180268900 = 0;
  xmmword_180268908 = 0LL;
  xmmword_180268918 = 0LL;
  xmmword_180268928 = 0LL;
  xmmword_180268938 = 0LL;
  xmmword_180268948 = 0LL;
  return result;
}

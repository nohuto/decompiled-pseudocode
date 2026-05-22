/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18003AF40
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001D00 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_180277950 = 0LL;
  qword_180277948 = 0LL;
  byte_180277958 = 0;
  xmmword_180277960 = 0LL;
  xmmword_180277970 = 0LL;
  xmmword_180277980 = 0LL;
  xmmword_180277990 = 0LL;
  xmmword_1802779A0 = 0LL;
  return result;
}

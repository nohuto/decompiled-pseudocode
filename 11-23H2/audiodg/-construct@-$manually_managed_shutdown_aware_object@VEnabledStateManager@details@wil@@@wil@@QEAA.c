/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1400277E4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x140001D80 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1400CF4F8 = 0LL;
  qword_1400CF4F0 = 0LL;
  byte_1400CF500 = 0;
  xmmword_1400CF508 = 0LL;
  xmmword_1400CF518 = 0LL;
  xmmword_1400CF528 = 0LL;
  xmmword_1400CF538 = 0LL;
  xmmword_1400CF548 = 0LL;
  return result;
}

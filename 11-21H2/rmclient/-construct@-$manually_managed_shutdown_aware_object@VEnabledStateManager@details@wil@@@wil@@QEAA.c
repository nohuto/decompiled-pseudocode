/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18000A924
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001430 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_180032A88 = 0LL;
  stru_180032A80.Ptr = 0LL;
  byte_180032A90 = 0;
  xmmword_180032A98 = 0LL;
  xmmword_180032AA8 = 0LL;
  xmmword_180032AB8 = 0LL;
  xmmword_180032AC8 = 0LL;
  xmmword_180032AD8 = 0LL;
  return result;
}

/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800421C0
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
  qword_1800DC468 = 0LL;
  stru_1800DC460.Ptr = 0LL;
  byte_1800DC470 = 0;
  xmmword_1800DC478 = 0LL;
  xmmword_1800DC488 = 0LL;
  xmmword_1800DC498 = 0LL;
  xmmword_1800DC4A8 = 0LL;
  xmmword_1800DC4B8 = 0LL;
  return result;
}

/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004289C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001030 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1800DD3D8 = 0LL;
  stru_1800DD3D0.Ptr = 0LL;
  byte_1800DD3E0 = 0;
  xmmword_1800DD3E8 = 0LL;
  xmmword_1800DD3F8 = 0LL;
  xmmword_1800DD408 = 0LL;
  xmmword_1800DD418 = 0LL;
  xmmword_1800DD428 = 0LL;
  return result;
}

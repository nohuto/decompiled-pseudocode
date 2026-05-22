/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180085D60
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001490 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_18021CE08 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_18021CE10 = 0;
  xmmword_18021CE18 = 0LL;
  xmmword_18021CE28 = 0LL;
  xmmword_18021CE38 = 0LL;
  xmmword_18021CE48 = 0LL;
  xmmword_18021CE58 = 0LL;
  return result;
}

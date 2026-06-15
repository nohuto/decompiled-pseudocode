/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180055230
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001240 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1801CFA58 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_1801CFA60 = 0;
  xmmword_1801CFA68 = 0LL;
  xmmword_1801CFA78 = 0LL;
  xmmword_1801CFA88 = 0LL;
  xmmword_1801CFA98 = 0LL;
  xmmword_1801CFAA8 = 0LL;
  return result;
}

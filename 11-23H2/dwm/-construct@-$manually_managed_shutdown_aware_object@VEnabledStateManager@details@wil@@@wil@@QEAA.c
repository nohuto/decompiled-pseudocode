/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x140003D74
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x140001010 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_140017AE0 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_140017AE8 = 0;
  xmmword_140017AF0 = 0LL;
  xmmword_140017B00 = 0LL;
  xmmword_140017B10 = 0LL;
  xmmword_140017B20 = 0LL;
  xmmword_140017B30 = 0LL;
  return result;
}

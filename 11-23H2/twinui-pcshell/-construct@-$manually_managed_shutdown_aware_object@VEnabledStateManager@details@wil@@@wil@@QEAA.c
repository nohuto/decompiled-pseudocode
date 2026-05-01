/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18017FDA0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180002A00 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_18098D878 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_18098D880 = 0;
  unk_18098D888 = 0LL;
  xmmword_18098D898 = 0LL;
  xmmword_18098D8A8 = 0LL;
  xmmword_18098D8B8 = 0LL;
  xmmword_18098D8C8 = 0LL;
  return result;
}

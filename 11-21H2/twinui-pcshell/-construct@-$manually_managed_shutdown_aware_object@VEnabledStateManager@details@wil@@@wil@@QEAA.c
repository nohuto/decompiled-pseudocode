/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18014750C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180002230 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1807B3BA8 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_1807B3BB0 = 0;
  unk_1807B3BB8 = 0LL;
  xmmword_1807B3BC8 = 0LL;
  xmmword_1807B3BD8 = 0LL;
  xmmword_1807B3BE8 = 0LL;
  xmmword_1807B3BF8 = 0LL;
  return result;
}

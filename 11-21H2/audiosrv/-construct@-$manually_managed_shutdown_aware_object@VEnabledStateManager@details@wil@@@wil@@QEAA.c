/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004285C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001880 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  pti = 0LL;
  stru_1801C2490.Ptr = 0LL;
  byte_1801C24A0 = 0;
  unk_1801C24A8 = 0LL;
  xmmword_1801C24B8 = 0LL;
  xmmword_1801C24C8 = 0LL;
  xmmword_1801C24D8 = 0LL;
  xmmword_1801C24E8 = 0LL;
  return result;
}

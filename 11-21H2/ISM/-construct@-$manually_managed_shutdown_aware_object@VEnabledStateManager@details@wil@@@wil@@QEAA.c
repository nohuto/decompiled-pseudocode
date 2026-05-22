/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18003E6B4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001010 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  pti = 0LL;
  SRWLock.Ptr = 0LL;
  byte_180242858 = 0;
  unk_180242860 = 0LL;
  *(_OWORD *)&Src = 0LL;
  xmmword_180242880 = 0LL;
  xmmword_180242890 = 0LL;
  xmmword_1802428A0 = 0LL;
  return result;
}

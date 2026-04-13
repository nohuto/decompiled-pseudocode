/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800DDB40
 * Callers:
 *     <none>
 * Callees:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x18002C3C8 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180039ED8 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18003B35C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_enabledStateManager = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  }
  else
  {
    wil::details::EnabledStateManager::~EnabledStateManager((struct _TP_TIMER **)&wil::details::g_enabledStateManager);
  }
}

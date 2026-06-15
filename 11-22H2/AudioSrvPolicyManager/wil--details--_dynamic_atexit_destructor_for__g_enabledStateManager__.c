/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18004B760
 * Callers:
 *     <none>
 * Callees:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180013E20 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180013ED8 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180013F48 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__(wil *a1)
{
  __int64 v1; // rdx
  void (*v2)(unsigned int, unsigned int, unsigned int, const char *); // r8

  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_enabledStateManager = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      v1,
      v2);
  }
  else
  {
    wil::details::EnabledStateManager::~EnabledStateManager((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  }
}

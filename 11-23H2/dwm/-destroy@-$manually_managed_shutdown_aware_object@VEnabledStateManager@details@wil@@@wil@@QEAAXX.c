/*
 * XREFs of ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x14000584C
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x140008710 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x140003204 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

void __fastcall wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::destroy(
        wil::details::EnabledStateManager *this)
{
  if ( wil::ProcessShutdownInProgress(this) )
  {
    *(_BYTE *)this = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock(this);
  }
  else
  {
    wil::details::EnabledStateManager::~EnabledStateManager(this);
  }
}

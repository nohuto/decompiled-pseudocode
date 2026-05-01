/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z @ 0x180008140
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180007B9C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_(void *a1)
{
  if ( wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_180062480);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    byte_180062490 = 0;
    ReleaseSRWLockExclusive(&stru_180062480);
  }
}

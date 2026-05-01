/*
 * XREFs of WINRT_IMPL_GetCurrentProcess @ 0x1801893A4
 * Callers:
 *     ?fire_immediately@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x18041EBA8 (-fire_immediately@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGI.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HANDLE __stdcall WINRT_IMPL_GetCurrentProcess()
{
  return GetCurrentProcess();
}

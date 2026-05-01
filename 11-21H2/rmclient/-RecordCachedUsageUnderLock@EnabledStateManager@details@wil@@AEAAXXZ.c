/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000FD18
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18000AA3C (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x18000CF5C (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18000F628 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z @ 0x18000FB58 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180011B08 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  const struct wil::details::EnabledStateManager::CachedUsageData *v4; // rsi
  const struct wil::details::EnabledStateManager::CachedUsageData *v6; // rbx
  const char *v7; // [rsp+20h] [rbp-8h]

  v4 = (const struct wil::details::EnabledStateManager::CachedUsageData *)*((_QWORD *)this + 7);
  v6 = (const struct wil::details::EnabledStateManager::CachedUsageData *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v4 - v6) >= 0x10 )
  {
    while ( v6 != v4 )
    {
      wil::details::EnabledStateManager::RecordCachedUsageUnderLock(this, v6);
      v6 = (const struct wil::details::EnabledStateManager::CachedUsageData *)((char *)v6 + 16);
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, a4, v7);
  }
}

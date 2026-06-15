/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x140059A64
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x140027A24 (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x14002A8EC (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x1400586D4 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     wil_details_RecordCachedUsage @ 0x14002B164 (wil_details_RecordCachedUsage.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x140059E40 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  const char *v7; // [rsp+20h] [rbp-8h]

  v5 = *((_QWORD *)this + 7);
  v6 = *((_QWORD *)this + 6);
  if ( (unsigned __int64)(v5 - v6) >= 0x10 )
  {
    while ( v6 != v5 )
    {
      wil_details_RecordCachedUsage(*(_DWORD *)v6, *(_QWORD *)(v6 + 8));
      v6 += 16LL;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, a4, v7);
  }
}

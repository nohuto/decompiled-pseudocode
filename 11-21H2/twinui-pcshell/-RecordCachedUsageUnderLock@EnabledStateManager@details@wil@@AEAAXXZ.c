/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180181074
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180179A3C (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x1802D6898 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1802E6318 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z @ 0x18018F740 (-wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1802D9A88 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        void (*a3)(unsigned int, unsigned int, unsigned int, const char *))
{
  unsigned int *v4; // rsi
  struct wil_details_FeatureReportingCache **v5; // rbx
  const char *v6; // [rsp+20h] [rbp-8h]

  v4 = (unsigned int *)*((_QWORD *)this + 7);
  v5 = (struct wil_details_FeatureReportingCache **)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v4 - (char *)v5) >= 0x10 )
  {
    while ( v5 != (struct wil_details_FeatureReportingCache **)v4 )
    {
      wil_details_RecordCachedUsage((wil::details *)*(unsigned int *)v5, v5[1], a3);
      v5 += 2;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, 0, v6);
  }
}

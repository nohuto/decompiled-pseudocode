/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180040514
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800404C0 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004DD00 (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x18007D598 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180040584 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z @ 0x18004FF00 (-wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        void (*a3)(unsigned int, unsigned int, unsigned int, const char *))
{
  unsigned int *v3; // rsi
  struct wil_details_FeatureReportingCache **v5; // rbx
  const char *v6; // [rsp+20h] [rbp-8h]

  v3 = (unsigned int *)*((_QWORD *)this + 7);
  v5 = (struct wil_details_FeatureReportingCache **)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v3 - (char *)v5) >= 0x10 )
  {
    while ( v5 != (struct wil_details_FeatureReportingCache **)v3 )
    {
      wil_details_RecordCachedUsage((wil::details *)*(unsigned int *)v5, v5[1], a3);
      v5 += 2;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, 0, v6);
  }
}

/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180013ED8
 * Callers:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180013E20 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18003641C (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18004B760 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18003A8D8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z @ 0x18003BC70 (-wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z.c)
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

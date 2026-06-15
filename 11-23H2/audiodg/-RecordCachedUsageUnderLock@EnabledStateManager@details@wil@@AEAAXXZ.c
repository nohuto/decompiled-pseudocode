/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x140059A24
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x140027A24 (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x14002A8EC (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x140058694 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     wil_details_RecordCachedUsage @ 0x14002B120 (wil_details_RecordCachedUsage.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x140059E00 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  unsigned int *v2; // rsi
  unsigned int *v3; // rbx
  const char *v4; // [rsp+20h] [rbp-8h]

  v2 = (unsigned int *)*((_QWORD *)this + 7);
  v3 = (unsigned int *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v2 - (char *)v3) >= 0x10 )
  {
    while ( v3 != v2 )
    {
      wil_details_RecordCachedUsage((wil::details *)*v3, *((_QWORD *)v3 + 1));
      v3 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, 0, v4);
  }
}

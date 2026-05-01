/*
 * XREFs of ?EnumerateAppStateData@AppUsageTracker@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180621440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AppUsageTracker::EnumerateAppStateData(
        AppUsageTracker *this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 72LL))(*((_QWORD *)this + 10));
  (*(void (__fastcall **)(_QWORD, struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *))(**((_QWORD **)this + 11) + 72LL))(
    *((_QWORD *)this + 11),
    a2);
}

/*
 * XREFs of ?GetSite@SnapWindowProvider@SnapLauncher@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022DEA0
 * Callers:
 *     ??$Site@UIServiceProvider@@@SnapWindowProvider@SnapLauncher@@AEAA?AU?$com_ptr@UIServiceProvider@@@winrt@@XZ @ 0x18022DC90 (--$Site@UIServiceProvider@@@SnapWindowProvider@SnapLauncher@@AEAA-AU-$com_ptr@UIServiceProvider@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SnapLauncher::SnapWindowProvider::GetSite(
        SnapLauncher::SnapWindowProvider *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 (__fastcall ***v3)(_QWORD, const struct _GUID *, void **); // rcx

  v3 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 5);
  if ( v3 )
    return (**v3)(v3, a2, a3);
  else
    return 2147500037LL;
}

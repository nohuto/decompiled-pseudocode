/*
 * XREFs of ?TryGetLastActiveVisibleView@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1803CCF00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::TryGetLastActiveVisibleView(
        ApplicationViewManagerVisibilityDebouncer *this,
        struct IApplicationView **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView **))(**((_QWORD **)this + 18) + 80LL))(
           *((_QWORD *)this + 18),
           a2);
}

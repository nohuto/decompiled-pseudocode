/*
 * XREFs of ?_FindViewItemInLayout@PPIWin32VtcLayoutOperation@@MEAAJPEAUIApplicationView@@PEAPEAUIAppLayoutItem@@PEAI@Z @ 0x180516790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::_FindViewItemInLayout(
        PPIWin32VtcLayoutOperation *this,
        struct IApplicationView *a2,
        struct IAppLayoutItem **a3,
        unsigned int *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IAppLayoutItem **, unsigned int *))(**((_QWORD **)this + 8) + 152LL))(
           *((_QWORD *)this + 8),
           a2,
           a3,
           a4);
}

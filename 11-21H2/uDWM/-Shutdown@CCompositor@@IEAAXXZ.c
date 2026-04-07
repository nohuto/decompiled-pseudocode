/*
 * XREFs of ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800A99C0
 * Callers:
 *     ??1CCompositor@@MEAA@XZ @ 0x1800A9804 (--1CCompositor@@MEAA@XZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AF75C (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompositor::Shutdown(CCompositor *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}

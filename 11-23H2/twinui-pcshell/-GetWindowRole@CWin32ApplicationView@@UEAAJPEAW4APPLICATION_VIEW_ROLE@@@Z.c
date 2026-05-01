/*
 * XREFs of ?GetWindowRole@CWin32ApplicationView@@UEAAJPEAW4APPLICATION_VIEW_ROLE@@@Z @ 0x1803CEB40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetWindowRole(CWin32ApplicationView *this, enum APPLICATION_VIEW_ROLE *a2)
{
  *(_DWORD *)a2 = 0;
  if ( ((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 80LL))(*((_QWORD *)this + 8)) & 1) != 0 )
    *(_DWORD *)a2 = 1;
  return 0LL;
}

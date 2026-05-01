/*
 * XREFs of ?v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z @ 0x18002A150
 * Callers:
 *     ?GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x18002A070 (-GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z.c)
 *     ?UpdateEngagementFlags@CWin32ApplicationView@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z @ 0x180313D50 (-UpdateEngagementFlags@CWin32ApplicationView@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::v_GetProcessId(CWin32ApplicationView *this, unsigned int *a2)
{
  HWND v3; // rax

  *a2 = 0;
  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  return GetWindowThreadProcessId(v3, a2) == 0 ? 0x80004005 : 0;
}

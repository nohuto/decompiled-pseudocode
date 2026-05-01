/*
 * XREFs of ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x1800210C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x180021110 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::OnViewReadinessChanged(CImmersiveApp *this, struct ITaskWindow *a2, bool a3)
{
  HWND v5; // rax

  v5 = (HWND)(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  CImmersiveApp::CImmersiveWindowCollection::OnViewReadinessChanged((CImmersiveApp *)((char *)this + 176), v5, a3);
  return 0LL;
}

/*
 * XREFs of ?InternalHideAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C0A4C
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1801C0130 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     ?DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z @ 0x1805AF134 (-DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1bc1847c493029b672944d3b25fbdd02___::Invoke @ 0x1805AF970 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_1bc1847c493.c)
 *     ?OnForegroundChange@SnapFlyoutHost@@QEAAXXZ @ 0x1805AFFBC (-OnForegroundChange@SnapFlyoutHost@@QEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     SnapFlyoutHost::InternalHideAsync$_InitCoro$2 @ 0x1801C05D4 (SnapFlyoutHost--InternalHideAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall SnapFlyoutHost::InternalHideAsync(__int64 a1, _BYTE *a2, __int64 a3)
{
  char *v6; // rax
  int v8; // [rsp+2C8h] [rbp+10h] BYREF

  v6 = (char *)operator new(0x271uLL);
  v8 = 0;
  SnapFlyoutHost::InternalHideAsync__InitCoro_2(&v8, v6, a2, a3, a1);
  return a2;
}

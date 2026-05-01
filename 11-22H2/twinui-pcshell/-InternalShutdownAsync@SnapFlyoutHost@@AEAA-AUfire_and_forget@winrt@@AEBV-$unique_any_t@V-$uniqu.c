/*
 * XREFs of ?InternalShutdownAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180227998
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802270C0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     _lambda_89d43c20f0f7bb0e860cd8602b20fbb7_::operator() @ 0x18067A394 (_lambda_89d43c20f0f7bb0e860cd8602b20fbb7_--operator().c)
 *     ?DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z @ 0x18067A5CC (-DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z.c)
 *     ?OnForegroundChange@SnapFlyoutHost@@QEAAXXZ @ 0x18067BE8C (-OnForegroundChange@SnapFlyoutHost@@QEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     SnapFlyoutHost::InternalShutdownAsync$_InitCoro$2 @ 0x180227558 (SnapFlyoutHost--InternalShutdownAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall SnapFlyoutHost::InternalShutdownAsync(__int64 a1, _BYTE *a2, __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+D8h] [rbp+10h] BYREF

  v6 = operator new(0x82uLL);
  v8 = 0;
  SnapFlyoutHost::InternalShutdownAsync__InitCoro_2(&v8, (__int64)v6, a2, a3, a1);
  return a2;
}

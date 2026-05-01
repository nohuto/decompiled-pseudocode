/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingViewDismissalAnimationCoordinator@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@@Z @ 0x1804CB53C
 * Callers:
 *     ??$MakeAndInitialize@VSnapAssistViewDismissalAnimationCoordinator@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewAnimation@@@Details@WRL@Microsoft@@YAJPEAPEAVSnapAssistViewDismissalAnimationCoordinator@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewAnimation@@@Z @ 0x1804B534C (--$MakeAndInitialize@VSnapAssistViewDismissalAnimationCoordinator@@V1@AEAPEAUIWeakReference@Weak.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakReference@@@Z @ 0x1804A3094 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakRe.c)
 *     ??4?$ComPtr@UIMultitaskingViewAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewAnimation@@@Z @ 0x1804C8320 (--4-$ComPtr@UIMultitaskingViewAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewAnimat.c)
 *     ?RuntimeClassInitialize@MultitaskingViewAnimationCoordinatorBase@@QEAAJXZ @ 0x1804CA81C (-RuntimeClassInitialize@MultitaskingViewAnimationCoordinatorBase@@QEAAJXZ.c)
 */

__int64 __fastcall MultitaskingViewDismissalAnimationCoordinator::RuntimeClassInitialize(
        MultitaskingViewDismissalAnimationCoordinator *this,
        struct IWeakReference *a2,
        struct IMultitaskingViewAnimation *a3,
        __int64 a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v7 = MultitaskingViewAnimationCoordinatorBase::RuntimeClassInitialize(this, (__int64)a2, (__int64)a3, a4);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)this + 7, (__int64)a2);
    Microsoft::WRL::ComPtr<IMultitaskingViewAnimation>::operator=((__int64 *)this + 12, (__int64)a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewdismissalanimationcoordinator.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}

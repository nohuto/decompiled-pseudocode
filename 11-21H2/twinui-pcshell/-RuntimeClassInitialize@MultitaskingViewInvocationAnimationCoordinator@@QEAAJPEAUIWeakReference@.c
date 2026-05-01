/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingViewInvocationAnimationCoordinator@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@@Z @ 0x1804C8988
 * Callers:
 *     ??$MakeAndInitialize@VSnapAssistViewInvocationAnimationCoordinator@@V1@AEAPEAUIWeakReference@WeakReference@@$$T@Details@WRL@Microsoft@@YAJPEAPEAVSnapAssistViewInvocationAnimationCoordinator@@AEAPEAUIWeakReference@WeakReference@@$$QEA$$T@Z @ 0x1804B4E04 (--$MakeAndInitialize@VSnapAssistViewInvocationAnimationCoordinator@@V1@AEAPEAUIWeakReference@Wea.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakReference@@@Z @ 0x1804A3094 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWeakReference@WeakRe.c)
 *     ??4?$ComPtr@UIMultitaskingViewAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewAnimation@@@Z @ 0x1804C8320 (--4-$ComPtr@UIMultitaskingViewAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewAnimat.c)
 *     ?RuntimeClassInitialize@MultitaskingViewAnimationCoordinatorBase@@QEAAJXZ @ 0x1804CA81C (-RuntimeClassInitialize@MultitaskingViewAnimationCoordinatorBase@@QEAAJXZ.c)
 */

__int64 __fastcall MultitaskingViewInvocationAnimationCoordinator::RuntimeClassInitialize(
        MultitaskingViewInvocationAnimationCoordinator *this,
        struct IWeakReference *a2,
        struct IMultitaskingViewAnimation *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = MultitaskingViewAnimationCoordinatorBase::RuntimeClassInitialize(this);
  v7 = v6;
  if ( v6 >= 0 )
  {
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)this + 7, (__int64)a2);
    Microsoft::WRL::ComPtr<IMultitaskingViewAnimation>::operator=((__int64 *)this + 12, (__int64)a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}

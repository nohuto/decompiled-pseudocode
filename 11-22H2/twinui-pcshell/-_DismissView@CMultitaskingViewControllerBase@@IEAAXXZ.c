/*
 * XREFs of ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x1802E41E8
 * Callers:
 *     ?DismissViewNoAnimate@CMultitaskingViewControllerBase@@UEAAXXZ @ 0x180576F20 (-DismissViewNoAnimate@CMultitaskingViewControllerBase@@UEAAXXZ.c)
 *     ?OnActivationLost@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x180577300 (-OnActivationLost@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@.c)
 *     ?OnDisplayChange@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x180577360 (-OnDisplayChange@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z.c)
 *     ?OnLightDismiss@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x180577380 (-OnLightDismiss@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180576C10 (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::_DismissView(CMultitaskingViewControllerBase *this)
{
  __int64 v2; // rax
  __int64 v3[2]; // [rsp+28h] [rbp-10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  CMultitaskingViewControllerBase *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 24);
  v3[0] = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v3);
  *((_WORD *)this + 52) = 1;
  v2 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  v4 = v2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v3);
  CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView((CMultitaskingViewControllerBase::BatchDismissView *)&v5);
}

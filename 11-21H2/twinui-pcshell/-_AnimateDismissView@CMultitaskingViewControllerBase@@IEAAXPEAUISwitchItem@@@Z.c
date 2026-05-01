/*
 * XREFs of ?_AnimateDismissView@CMultitaskingViewControllerBase@@IEAAXPEAUISwitchItem@@@Z @ 0x1804BCECC
 * Callers:
 *     ?OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x1804B4440 (-OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z.c)
 *     ?OnLightDismiss@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x1804B44B0 (-OnLightDismiss@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1804BC088 (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::_AnimateDismissView(
        CMultitaskingViewControllerBase *this,
        struct ISwitchItem *a2)
{
  __int64 v4[2]; // [rsp+28h] [rbp-10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  CMultitaskingViewControllerBase *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 26);
  v4[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  v4[0] = 0LL;
  *((_WORD *)this + 56) = 257;
  v5 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v4);
  CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(&v6);
}

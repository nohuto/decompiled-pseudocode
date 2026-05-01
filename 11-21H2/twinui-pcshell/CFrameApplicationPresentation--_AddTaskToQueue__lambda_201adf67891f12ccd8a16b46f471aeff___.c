/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___ @ 0x1801457FC
 * Callers:
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180145570 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180074B5C (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_76ebab358cbfe9072c97f7416da7a23a___ @ 0x1801458D4 (Windows--Internal--ComTaskPool--QueueTask__lambda_76ebab358cbfe9072c97f7416da7a23a___.c)
 *     _lambda_76ebab358cbfe9072c97f7416da7a23a_::_lambda_76ebab358cbfe9072c97f7416da7a23a_ @ 0x180145A28 (_lambda_76ebab358cbfe9072c97f7416da7a23a_--_lambda_76ebab358cbfe9072c97f7416da7a23a_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___(
        unsigned int *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v9[2]; // [rsp+20h] [rbp-188h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v11; // [rsp+40h] [rbp-168h] BYREF
  volatile signed __int32 *v12; // [rsp+50h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x821,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v9[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v4 = lambda_76ebab358cbfe9072c97f7416da7a23a_::_lambda_76ebab358cbfe9072c97f7416da7a23a_(v10, v9, a1, a2);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_76ebab358cbfe9072c97f7416da7a23a___(v6, v5, a1[12], v4);
    CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow(&v12);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v10);
    if ( v7 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
  }
  CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((volatile signed __int32 **)(a2 + 16));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2);
  return (unsigned int)v7;
}

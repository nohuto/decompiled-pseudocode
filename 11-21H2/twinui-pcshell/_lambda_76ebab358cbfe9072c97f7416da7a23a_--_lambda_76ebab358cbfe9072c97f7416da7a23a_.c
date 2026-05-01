/*
 * XREFs of _lambda_76ebab358cbfe9072c97f7416da7a23a_::_lambda_76ebab358cbfe9072c97f7416da7a23a_ @ 0x180145A28
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___ @ 0x1801457FC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180071F14 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180071F14.c)
 */

__int64 *__fastcall lambda_76ebab358cbfe9072c97f7416da7a23a_::_lambda_76ebab358cbfe9072c97f7416da7a23a_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v7; // rax

  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  v7 = *a4;
  a1[1] = a3;
  a1[2] = v7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 2);
  a1[3] = a4[1];
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 4),
    a4 + 2);
  a1[4] = (__int64)&CFramePresentationTelemetry::UnpresentWindow::`vftable';
  return a1;
}

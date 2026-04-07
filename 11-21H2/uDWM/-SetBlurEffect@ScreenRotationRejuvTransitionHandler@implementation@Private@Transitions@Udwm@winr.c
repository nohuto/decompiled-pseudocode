/*
 * XREFs of ?SetBlurEffect@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800F4A94
 * Callers:
 *     ?StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4E6C (-StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800141A0 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x180027C54 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z @ 0x1800A854C (--$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z.c)
 *     ?Update@CGaussianBlurEffectProxy@@QEAAJMII@Z @ 0x1800BD2B4 (-Update@CGaussianBlurEffectProxy@@QEAAJMII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UITransitionStateNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F266C (--$as@UITransitionStateNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::SetBlurEffect(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, CBaseObject **); // rdi
  CBaseObject *v5; // rcx
  int v6; // eax
  int v7; // eax
  CGaussianBlurEffectProxy *v8; // rbx
  int v9; // eax
  __int64 result; // rax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  CBaseObject *v13; // [rsp+40h] [rbp+20h] BYREF
  CGaussianBlurEffectProxy *v14; // [rsp+50h] [rbp+30h] BYREF
  __int64 v15; // [rsp+58h] [rbp+38h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  winrt::impl::as<Udwm::Transitions::ITransitionStateNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v15,
    *(__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 40));
  v3 = v15;
  v4 = *(__int64 (__fastcall **)(__int64, CBaseObject **))(*(_QWORD *)v15 + 48LL);
  v5 = v13;
  v13 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = v4(v3, &v13);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      650LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
      (const char *)(unsigned int)v6,
      savedregs);
  winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v15);
  v14 = 0LL;
  v7 = CCompositor::CreateProxy<CGaussianBlurEffectProxy>((__int64)v13, &v14);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      651LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
      (const char *)(unsigned int)v7,
      savedregs);
  v8 = v14;
  v9 = CGaussianBlurEffectProxy::Update(v14, 75.0, 1LL, 1);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      657LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
      (const char *)(unsigned int)v9,
      savedregs);
  result = CVisualProxy::SetEffect(*(CVisualProxy **)(*(_QWORD *)a2 + 24LL), v8);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      658LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
      (const char *)(unsigned int)result,
      savedregs);
  if ( v13 )
    result = CBaseObject::Release(v13);
  if ( v8 )
    return CBaseObject::Release(v8);
  return result;
}

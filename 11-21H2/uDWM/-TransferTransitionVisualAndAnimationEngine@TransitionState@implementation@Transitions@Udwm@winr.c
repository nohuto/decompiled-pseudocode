/*
 * XREFs of ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x1800476AC
 * Callers:
 *     ?TransferTransitionVisualAndAnimationEngine@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180047770 (-TransferTransitionVisualAndAnimationEngine@-$produce@UTransitionState@implementation@Transition.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800126F8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800141A0 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18001D7C8 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ??$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800442B0 (--$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 *     ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z @ 0x1800454CC (-SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferTransitionVisualAndAnimationEngine(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  __int64 v4; // rbx
  CTopLevelWindow3D *v5; // rax
  int v6; // eax
  __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  winrt::impl::as<Udwm::Transitions::ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v11,
    *(__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 104));
  v4 = v11;
  v5 = (CTopLevelWindow3D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
  v6 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(v5, 0);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xEC,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)v6,
      v9);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  CTopLevelWindow::SetSuppressBorderUpdates(*(CTopLevelWindow **)(*(_QWORD *)(v7 + 336) + 440LL), 1);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 104);
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v11);
  return a2;
}

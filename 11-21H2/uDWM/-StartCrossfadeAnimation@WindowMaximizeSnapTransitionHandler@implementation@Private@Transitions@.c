/*
 * XREFs of ?StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180001FA4
 * Callers:
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003EF80 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x180001F20 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x180002110 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x180002454 (-AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z.c)
 *     ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x1800025A8 (-Create@CAnimationResource@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x180002660 (-Release@CAnimationResource@@UEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800141A0 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ??$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800442B0 (--$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::StartCrossfadeAnimation(
        winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *this)
{
  struct CAnimationResource **v2; // rbx
  CAnimationResource *v3; // rcx
  int v4; // eax
  float v5; // xmm7_4
  int v6; // eax
  int v7; // eax
  int v8; // eax
  struct CAnimationResource *v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = (struct CAnimationResource **)((char *)this + 64);
  v3 = (CAnimationResource *)*((_QWORD *)this + 8);
  *v2 = 0LL;
  if ( v3 )
    CAnimationResource::Release(v3);
  v4 = CAnimationResource::Create(v2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x127,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.windowmaximizesnaptransitionhandler.cpp",
      (const char *)(unsigned int)v4,
      v12);
  v5 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 171);
  v6 = CAnimationResource::AddCubic(*v2, 0.0, 1.0, 0.0, 0.0, 0.0);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x131,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.windowmaximizesnaptransitionhandler.cpp",
      (const char *)(unsigned int)v6,
      v13);
  v7 = CAnimationResource::AddCubic(
         *v2,
         *((float *)CDesktopManager::s_pDesktopManagerInstance + 170),
         1.0,
         -1.0 / v5,
         0.0,
         0.0);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x13A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.windowmaximizesnaptransitionhandler.cpp",
      (const char *)(unsigned int)v7,
      v14);
  v8 = CAnimationResource::End(*v2, (float)(v5 + *((float *)CDesktopManager::s_pDesktopManagerInstance + 170)), 0.0);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x13F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.windowmaximizesnaptransitionhandler.cpp",
      (const char *)(unsigned int)v8,
      v14);
  v9 = *v2;
  winrt::impl::as<Udwm::Transitions::ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v16,
    *((_QWORD *)this + 5));
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 48LL))(v16);
  v11 = CAnimationResource::AddBinding(v9, v10, 8LL);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x145,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.windowmaximizesnaptransitionhandler.cpp",
      (const char *)(unsigned int)v11,
      v14);
  winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v16);
}

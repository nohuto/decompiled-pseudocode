/*
 * XREFs of ??0TouchGestureComponent@@QEAA@XZ @ 0x18008A290
 * Callers:
 *     ??$make@VTouchGestureComponent@@$$V@winrt@@YA?A_PXZ @ 0x18008C1F8 (--$make@VTouchGestureComponent@@$$V@winrt@@YA-A_PXZ.c)
 * Callees:
 *     ??$as@UIUnknown@@VTouchGestureSettings@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUnknown@@@1@PEAVTouchGestureSettings@@@Z @ 0x18008A8B4 (--$as@UIUnknown@@VTouchGestureSettings@@$0A@@impl@winrt@@YA-AU-$com_ptr@UIUnknown@@@1@PEAVTouchG.c)
 *     ??$as@UIUnknown@@VTouchEdgeGestureManager@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUnknown@@@1@PEAVTouchEdgeGestureManager@@@Z @ 0x18008A91C (--$as@UIUnknown@@VTouchEdgeGestureManager@@$0A@@impl@winrt@@YA-AU-$com_ptr@UIUnknown@@@1@PEAVTou.c)
 *     ??$make_self@VTouchEdgeGestureManager@@$$V@winrt@@YA?AU?$com_ptr@VTouchEdgeGestureManager@@@0@XZ @ 0x18008AA60 (--$make_self@VTouchEdgeGestureManager@@$$V@winrt@@YA-AU-$com_ptr@VTouchEdgeGestureManager@@@0@XZ.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x18008AB3C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x1800BD88C (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0TouchGestureSettings@@QEAA@XZ @ 0x1800E8310 (--0TouchGestureSettings@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801179A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C8E9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=7
TouchGestureComponent *__fastcall TouchGestureComponent::TouchGestureComponent(TouchGestureComponent *this)
{
  _QWORD *v2; // rcx
  __int128 **v3; // rdi
  __int64 *v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int128 *v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+28h] [rbp-38h]
  TouchGestureComponent *v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v14[8]; // [rsp+48h] [rbp-18h] BYREF
  int v15; // [rsp+50h] [rbp-10h]

  v12 = this;
  winrt::immersive_shell_component::immersive_shell_component(this);
  *v2 = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  v2[1] = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  v2[2] = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  v2[4] = &TouchGestureComponent::`vftable';
  v2[11] = 0LL;
  v3 = (__int128 **)(v2 + 12);
  v2[12] = 0LL;
  v4 = v2 + 13;
  v2[13] = 0LL;
  v5 = operator new(0x78uLL);
  memset_0(v5, 0, 0x78uLL);
  TouchGestureSettings::TouchGestureSettings((TouchGestureSettings *)v5);
  *v5 = &winrt::impl::heap_implements<TouchGestureSettings>::`vftable'{for `winrt::impl::producers_base<TouchGestureSettings,std::tuple<ITouchGestureSettings>>'};
  v5[1] = &TouchGestureSettings::`vftable'{for `winrt::impl::root_implements<TouchGestureSettings,ITouchGestureSettings>'};
  v10 = (__int128 *)v5;
  if ( v3 == &v10 )
  {
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  }
  else
  {
    if ( *v3 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v3);
    *v3 = (__int128 *)v5;
  }
  v13 = xmmword_1808349A0;
  winrt::impl::as<IUnknown,TouchGestureSettings,0>(v14, *v3);
  v15 = 0;
  v10 = &v13;
  v11 = 1;
  winrt::immersive_shell_component::register_service_information(this, &v10);
  `eh vector destructor iterator'(
    &v13,
    0x20uLL,
    1uLL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
  LOBYTE(v6) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::GetImpl'::`2'::impl,
    v6);
  v7 = (__int64 *)winrt::make_self<TouchEdgeGestureManager,>(&v10);
  if ( v4 != v7 )
  {
    if ( *v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
    v8 = *v7;
    *v7 = 0LL;
    *v4 = v8;
  }
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  v13 = xmmword_1808349B0;
  winrt::impl::as<IUnknown,TouchEdgeGestureManager,0>(v14, *v4);
  v15 = 0;
  v10 = &v13;
  v11 = 1;
  winrt::immersive_shell_component::register_service_information(this, &v10);
  `eh vector destructor iterator'(
    &v13,
    0x20uLL,
    1uLL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
  return this;
}

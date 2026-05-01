/*
 * XREFs of ??0TouchGestureComponent@@QEAA@XZ @ 0x1800CF140
 * Callers:
 *     ??$make@VTouchGestureComponent@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1800CDA2C (--$make@VTouchGestureComponent@@$$V@winrt@@YA-AU-$com_ptr@UIObjectWithSite@@@0@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x18009D378 (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x1800CEFE4 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$as@UIUnknown@@VTouchGestureSettings@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUnknown@@@1@PEAVTouchGestureSettings@@@Z @ 0x1800CF0D8 (--$as@UIUnknown@@VTouchGestureSettings@@$0A@@impl@winrt@@YA-AU-$com_ptr@UIUnknown@@@1@PEAVTouchG.c)
 *     ??0TouchGestureSettings@@QEAA@XZ @ 0x1800CF2BC (--0TouchGestureSettings@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801895D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=5
TouchGestureComponent *__fastcall TouchGestureComponent::TouchGestureComponent(TouchGestureComponent *this)
{
  _QWORD *v2; // rcx
  __int64 *v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  __int128 *v7; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+28h] [rbp-38h]
  TouchGestureComponent *v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  int v12; // [rsp+50h] [rbp-10h]

  v9 = this;
  winrt::immersive_shell_component::immersive_shell_component(this);
  *v2 = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  v2[1] = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  v2[2] = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  v2[4] = &TouchGestureComponent::`vftable';
  v2[11] = 0LL;
  v3 = v2 + 12;
  v2[12] = 0LL;
  v4 = operator new(0x78uLL);
  memset_0(v4, 0, 0x78uLL);
  TouchGestureSettings::TouchGestureSettings((TouchGestureSettings *)v4);
  *v4 = &winrt::impl::heap_implements<TouchGestureSettings>::`vftable'{for `winrt::impl::producers_base<TouchGestureSettings,std::tuple<ITouchGestureSettings>>'};
  v4[1] = &TouchGestureSettings::`vftable'{for `winrt::impl::root_implements<TouchGestureSettings,ITouchGestureSettings>'};
  v5 = v4;
  v7 = (__int128 *)v4;
  if ( v3 != (__int64 *)&v7 )
  {
    if ( *v3 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v3);
    v5 = 0LL;
    v7 = 0LL;
    *v3 = (__int64)v4;
  }
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v7);
  v10 = xmmword_180699E40;
  winrt::impl::as<IUnknown,TouchGestureSettings,0>(&v11, (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))*v3);
  v12 = 0;
  v7 = &v10;
  v8 = 1;
  winrt::immersive_shell_component::register_service_information((RTL_SRWLOCK *)this, (__int64)&v7);
  `eh vector destructor iterator'(
    &v10,
    0x20uLL,
    1uLL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
  return this;
}

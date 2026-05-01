/*
 * XREFs of ??0TaskViewHost@@QEAA@XZ @ 0x180077A1C
 * Callers:
 *     ??$MakeAndInitialize@VTaskViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18004C08C (--$MakeAndInitialize@VTaskViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@QEAA@XZ @ 0x180077920 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAllUpVi.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180077BE0 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag__ea_180077BE0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1801383A0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=25
TaskViewHost *__fastcall TaskViewHost::TaskViewHost(TaskViewHost *this)
{
  int inited; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>((__int64)this);
  *(_QWORD *)this = &TaskViewHost::`vftable'{for `Microsoft::WRL::ChainInterfaces<IAllUpViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &TaskViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 15) = &TaskViewHost::`vftable';
  *((_QWORD *)this + 16) = &TaskViewHost::`vftable'{for `ITabletModeChangeListener'};
  *((_QWORD *)this + 17) = &TaskViewHost::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>'};
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 36) = (char *)this + 128;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 38) = (char *)this + 136;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((TaskViewHost *)((char *)this + 360));
  *((_QWORD *)this + 45) = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  *(_OWORD *)((char *)this + 680) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *(_OWORD *)((char *)this + 696) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *(_OWORD *)((char *)this + 712) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_DWORD *)this + 182) = 0;
  *((_BYTE *)this + 732) = 0;
  *((_DWORD *)this + 184) = 0;
  *((_QWORD *)this + 93) = 0LL;
  *((_DWORD *)this + 18) = 2;
  inited = CObjectWithThreadUseDetection::InitApartmentId((TaskViewHost *)((char *)this + 24));
  if ( inited < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9E,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
      (const char *)(unsigned int)inited,
      v4);
  return this;
}

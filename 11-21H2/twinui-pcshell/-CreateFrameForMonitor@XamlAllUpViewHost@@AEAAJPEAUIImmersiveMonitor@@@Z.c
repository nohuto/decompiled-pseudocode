/*
 * XREFs of ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804324F4
 * Callers:
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x180432ED4 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041CDFC (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPE$AAUIVirtualDesktopController@4567@AEAPE$AAUIVirtualDesktopDataSource@4567@@wil@@YA?AV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPE$AAUIVirtualDesktopController@6789@AEAPE$AAUIVirtualDesktopDataSource@6789@@Z @ 0x18042BAF8 (--$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitas.c)
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0___ @ 0x18042BB94 (MakeXamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0___.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18042C650 (--$_Emplace_reallocate@AEBV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VMonitorF.c)
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::_lambda_baaea9c5454d5217874bd274f7881db0__0 @ 0x18042D158 (_lambda_baaea9c5454d5217874bd274f7881db0_--_lambda_baaea9c5454d5217874bd274f7881db0__0.c)
 *     ??0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ @ 0x18042DF80 (--0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ.c)
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::__lambda_baaea9c5454d5217874bd274f7881db0_ @ 0x18042E794 (_lambda_baaea9c5454d5217874bd274f7881db0_--__lambda_baaea9c5454d5217874bd274f7881db0_.c)
 *     ??1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18042EE74 (--1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@UE$AAAPE$AAVDesktopBackgroundThumbnailFactory@23456@VRect@Foundation@6@@Z @ 0x180433264 (-CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@I.c)
 *     ?InternalRelease@?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1804355F0 (-InternalRelease@-$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@WindowCreatedCallback@XamlSwitcherTelemetry@@QEAAXXZ @ 0x180438A20 (-StartActivity@WindowCreatedCallback@XamlSwitcherTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=18 #try_helpers=1
__int64 __fastcall XamlAllUpViewHost::CreateFrameForMonitor(XamlAllUpViewHost *this, struct IImmersiveMonitor *a2)
{
  void *v4; // rcx
  __int64 v5; // rbx
  enum _TABLETMODESTATE *v6; // rdx
  TabletModeHelpers *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 ThumbnailFactoryForDesktopBackground; // rbx
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rcx
  volatile int *v18; // rdx
  __int64 v19; // rbx
  int XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0; // eax
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, __int64, __int128 *, __int64, GUID *, __int64 *); // rbx
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // rcx
  char IsTabletMode; // [rsp+70h] [rbp-3B8h]
  __int64 v31; // [rsp+78h] [rbp-3B0h] BYREF
  __int64 v32; // [rsp+80h] [rbp-3A8h] BYREF
  __int64 v33; // [rsp+88h] [rbp-3A0h] BYREF
  __int64 v34; // [rsp+90h] [rbp-398h] BYREF
  __int64 v35; // [rsp+98h] [rbp-390h] BYREF
  XamlAllUpViewHost *v36; // [rsp+A0h] [rbp-388h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-380h] BYREF
  int v38[4]; // [rsp+B0h] [rbp-378h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-368h] BYREF
  struct IImmersiveMonitor *v40; // [rsp+D0h] [rbp-358h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-350h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-348h] BYREF
  __int64 v43; // [rsp+E8h] [rbp-340h] BYREF
  __int128 v44; // [rsp+F0h] [rbp-338h] BYREF
  _QWORD v45[40]; // [rsp+100h] [rbp-328h] BYREF
  __int64 v46[54]; // [rsp+240h] [rbp-1E8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+428h] [rbp+0h]

  v40 = a2;
  v32 = 0LL;
  v4 = Platform::Details::Heap::Allocate(0x78uLL, 0xA0uLL);
  v5 = Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl((__int64)v4);
  *(_QWORD *)v38 = v5;
  __abi_winrt_ptr_assign(&v32, v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  IsTabletMode = TabletModeHelpers::IsTabletMode(v7, v6);
  v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v44);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *(float *)&v39 = (float)(int)v44;
    *((float *)&v39 + 1) = (float)SDWORD1(v44);
    *((float *)&v39 + 2) = (float)(DWORD2(v44) - v44);
    *((float *)&v39 + 3) = (float)(HIDWORD(v44) - DWORD1(v44));
    *(_OWORD *)v38 = v39;
    ThumbnailFactoryForDesktopBackground = Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice::CreateThumbnailFactoryForDesktopBackground(
                                             *((_QWORD *)this + 19),
                                             v38);
    *(_QWORD *)v38 = ThumbnailFactoryForDesktopBackground;
    v12 = __abi_winrt_ptr_ctor(ThumbnailFactoryForDesktopBackground);
    v43 = v12;
    if ( ThumbnailFactoryForDesktopBackground )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)ThumbnailFactoryForDesktopBackground + 16LL))(ThumbnailFactoryForDesktopBackground);
    v13 = __abi_winrt_cast_to(
            0,
            *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 25),
            (__int64)&_uuidof__AUIXamlSwitcherWindowInteractionEvents__);
    *(_QWORD *)v38 = v13;
    v37 = v13;
    wil::MakeOrThrow<MonitorFrame,IImmersiveMonitor * &,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl __gc * &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController __gc * &,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource __gc * &>(
      &v31,
      (__int64)&v40,
      (__int64)&v32,
      (__int64)this + 200,
      &v37,
      (__int64 *)this + 24,
      (__int64 *)this + 22);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = __abi_winrt_ptr_ctor(*((_QWORD *)this + 21));
    *(_QWORD *)v38 = v14;
    v35 = *((_QWORD *)this + 30);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v35);
    if ( IsTabletMode )
      v15 = 0LL;
    else
      v15 = *((_QWORD *)this + 22);
    v16 = __abi_winrt_ptr_ctor(v15);
    v42 = v16;
    if ( IsTabletMode )
      v17 = 0LL;
    else
      v17 = *((_QWORD *)this + 24);
    v19 = __abi_winrt_ptr_ctor(v17);
    v37 = v19;
    v41 = v19;
    v36 = this;
    if ( this )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((XamlAllUpViewHost *)((char *)this + 148), v18);
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v45,
      (__int64)"WindowCreatedCallback");
    v45[0] = &XamlSwitcherTelemetry::WindowCreatedCallback::`vftable';
    XamlSwitcherTelemetry::WindowCreatedCallback::StartActivity((XamlSwitcherTelemetry::WindowCreatedCallback *)v45);
    lambda_baaea9c5454d5217874bd274f7881db0_::_lambda_baaea9c5454d5217874bd274f7881db0__0(
      (__int64)v46,
      (volatile int *)&v36,
      &v35,
      &v40,
      (__int64 *)v38,
      &v44,
      &v39,
      &v43,
      &v32,
      &v31,
      &v42,
      &v41,
      (__int64)v45);
    v34 = 0LL;
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
    XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0 = MakeXamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0_(
                                                                                       &v33,
                                                                                       (__int64)v46);
    v21 = XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0;
    if ( XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0 >= 0 )
    {
      v23 = *((_QWORD *)this + 28);
      v24 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64, GUID *, __int64 *))(*(_QWORD *)v23 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
      v39 = v44;
      v25 = v24(v23, v33, &v39, 5LL, &GUID_a9728204_899b_46a5_9344_43e74614d24b, &v34);
      v26 = v25;
      if ( v25 >= 0 )
      {
        v28 = (__int64 *)*((_QWORD *)this + 42);
        if ( v28 == *((__int64 **)this + 43) )
        {
          std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<MonitorFrame> const &>(
            (__int64 *)this + 41,
            (__int64)v28,
            &v31);
        }
        else
        {
          *v28 = v31;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v28);
          *((_QWORD *)this + 42) += 8LL;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
        lambda_baaea9c5454d5217874bd274f7881db0_::__lambda_baaea9c5454d5217874bd274f7881db0_(v46);
        XamlSwitcherTelemetry::WindowCreatedCallback::~WindowCreatedCallback((XamlSwitcherTelemetry::WindowCreatedCallback *)v45);
        Microsoft::WRL::ComPtr<XamlAllUpViewHost>::InternalRelease(&v36);
        if ( v37 )
          (*(void (**)(void))(*(_QWORD *)v37 + 16LL))();
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v29 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( v32 )
          (*(void (**)(void))(*(_QWORD *)v32 + 16LL))();
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x29E,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v25);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
        lambda_baaea9c5454d5217874bd274f7881db0_::__lambda_baaea9c5454d5217874bd274f7881db0_(v46);
        XamlSwitcherTelemetry::WindowCreatedCallback::~WindowCreatedCallback((XamlSwitcherTelemetry::WindowCreatedCallback *)v45);
        Microsoft::WRL::ComPtr<XamlAllUpViewHost>::InternalRelease(&v36);
        if ( v37 )
          (*(void (**)(void))(*(_QWORD *)v37 + 16LL))();
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v27 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( v32 )
          (*(void (**)(void))(*(_QWORD *)v32 + 16LL))();
        return v26;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29D,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)XamlExplorerHostWindowCreatedCallback__lambda_baaea9c5454d5217874bd274f7881db0);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
      lambda_baaea9c5454d5217874bd274f7881db0_::__lambda_baaea9c5454d5217874bd274f7881db0_(v46);
      XamlSwitcherTelemetry::WindowCreatedCallback::~WindowCreatedCallback((XamlSwitcherTelemetry::WindowCreatedCallback *)v45);
      Microsoft::WRL::ComPtr<XamlAllUpViewHost>::InternalRelease(&v36);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v22 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v32 )
        (*(void (**)(void))(*(_QWORD *)v32 + 16LL))();
      return v21;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v8);
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    return v9;
  }
}

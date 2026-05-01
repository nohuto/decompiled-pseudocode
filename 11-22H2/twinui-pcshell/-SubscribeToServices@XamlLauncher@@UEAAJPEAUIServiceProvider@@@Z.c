/*
 * XREFs of ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180104F20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BC60C (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x1800F5870 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 *     ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVImmersiveMonitorHelper@@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x18010389C (--$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState.c)
 *     ??1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ @ 0x1801052FC (--1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@SubscribeToServices@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180105328 (--$-0$$V@SubscribeToServices@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$As@UIObjectWithSite@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectWithSite@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801053D8 (--$As@UIObjectWithSite@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1801400A0 (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___ @ 0x1801FB51C (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBCC (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlLauncher::SubscribeToServices(XamlLauncher *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD); // rsi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, __int64); // rsi
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // edx
  int v21; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  struct IXamlLauncherState *v26; // [rsp+50h] [rbp-B0h] BYREF
  struct IServiceProvider *v27; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v28[320]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v27 = a2;
  StartWindowTelemetry::SubscribeToServices::SubscribeToServices(v28);
  v23 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))QueryService)(
         a2,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &v23);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v21 = (_DWORD)this + 172;
    v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v23 + 24LL))(
           v23,
           &unk_180826A20,
           1LL,
           ((unsigned __int64)this - 16) & -(__int64)(this != (XamlLauncher *)56));
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 691LL;
      goto LABEL_5;
    }
    v22 = 0LL;
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
           a2,
           &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
           &GUID_dc8a3be5_1955_55a9_b901_9f152fa82752,
           &v22);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 701LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v9,
        v21);
LABEL_30:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v22);
      goto LABEL_31;
    }
    v11 = v22;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v22 + 144LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 35);
    v21 = (_DWORD)this + 280;
    v9 = v12(v11, 8LL, 0LL);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 703LL;
      goto LABEL_12;
    }
    v13 = v22;
    v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 144LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 36);
    v21 = (_DWORD)this + 288;
    v9 = v14(v13, 2LL, 27LL);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 704LL;
      goto LABEL_12;
    }
    v26 = (XamlLauncher *)((char *)this - 56);
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyRegistration___Windows::Internal::Shell::WindowManagementEvents::ShellHotkeyEventArgs___lambda_8e75d5ceee8df6aa2550c5605f7c9f99___(
      &v25,
      &v26);
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 35) + 48LL))(
            *((_QWORD *)this + 35),
            v25,
            (char *)this + 296);
    v6 = v15;
    if ( v15 < 0 )
    {
      v16 = 713LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v15,
        v21);
LABEL_29:
      Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v25);
      goto LABEL_30;
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 36) + 48LL))(
            *((_QWORD *)this + 36),
            v25,
            (char *)this + 304);
    v6 = v15;
    if ( v15 < 0 )
    {
      v16 = 714LL;
      goto LABEL_21;
    }
    v26 = (struct IXamlLauncherState *)*((_QWORD *)this + 42);
    Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease((char *)this + 160);
    v15 = Microsoft::WRL::Details::MakeAndInitialize<ImmersiveMonitorHelper,ImmersiveMonitorHelper,IServiceProvider * &,IXamlLauncherState *>(
            (ImmersiveMonitorHelper **)this + 20,
            &v27,
            &v26);
    v6 = v15;
    if ( v15 < 0 )
    {
      v16 = 716LL;
      goto LABEL_21;
    }
    v15 = ImmersiveMonitorHelper::SetSite(*((ImmersiveMonitorHelper **)this + 20), (struct IUnknown *)this - 7);
    v6 = v15;
    if ( v15 < 0 )
    {
      v16 = 717LL;
      goto LABEL_21;
    }
    v24 = 0LL;
    v17 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IObjectWithSite>((char *)this + 336, &v24);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v24 + 24LL))(v24, a2);
      v6 = v17;
      if ( v17 >= 0 )
      {
        wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v28,
          v19);
        v6 = 0;
        goto LABEL_28;
      }
      v18 = 720LL;
    }
    else
    {
      v18 = 719LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v17,
      v21);
LABEL_28:
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v24);
    goto LABEL_29;
  }
  v7 = 688LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v5,
    v21);
LABEL_31:
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v23);
  StartWindowTelemetry::SubscribeToServices::~SubscribeToServices((StartWindowTelemetry::SubscribeToServices *)v28);
  return v6;
}

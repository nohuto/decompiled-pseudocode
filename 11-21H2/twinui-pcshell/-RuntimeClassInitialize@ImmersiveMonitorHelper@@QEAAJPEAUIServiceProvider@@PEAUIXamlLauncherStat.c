/*
 * XREFs of ?RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Z @ 0x1800D4DD4
 * Callers:
 *     ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVImmersiveMonitorHelper@@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x1800D4CC0 (--$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEAAAEAV012@PEAUIXamlLauncherState@@@Z @ 0x1800D4D70 (--4-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEAAAEAV012@PEAUIXamlLauncherState@@@Z.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1800D4FC0 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ImmersiveMonitorHelper::RuntimeClassInitialize(
        ImmersiveMonitorHelper *this,
        struct IServiceProvider *a2,
        struct IXamlLauncherState *a3)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // r14
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, char *); // rdi
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v13; // eax
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v15; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, char *); // [rsp+60h] [rbp+30h] BYREF
  __int64 v21; // [rsp+68h] [rbp+38h] BYREF
  struct IImmersiveMonitor *v22; // [rsp+78h] [rbp+48h] BYREF

  Microsoft::WRL::ComPtr<IXamlLauncherState>::operator=((__int64 *)this + 10, (__int64)a3);
  v20 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v20);
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 30LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_10;
  }
  v6 = (*v20)[3](v20, (GUID *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)), (char *)this + 88);
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 31LL;
    goto LABEL_14;
  }
  v8 = (char *)this + 72;
  v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v20;
  v10 = **v20;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  v6 = v10(v9, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, (char *)this + 72);
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 32LL;
    goto LABEL_14;
  }
  v22 = 0LL;
  v11 = *(_QWORD *)v8;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(**(_QWORD **)v8 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
  v13 = v12(v11, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v22);
  v7 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_9;
  }
  ImmersiveMonitorHelper::ConnectToMonitor(this, v22);
  v21 = 0LL;
  v14 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v14)(
          a2,
          &IID_IActiveZBandNotificationForMonitorService,
          &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
          &v21);
  v7 = v15;
  if ( v15 < 0 )
  {
    v18 = 38LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_8;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v21 + 24LL))(
          v21,
          (char *)this + 32,
          (char *)this + 92);
  v7 = v15;
  if ( v15 < 0 )
  {
    v18 = 39LL;
    goto LABEL_18;
  }
  v7 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
LABEL_10:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
  return v7;
}

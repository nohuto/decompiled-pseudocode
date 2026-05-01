/*
 * XREFs of ?SubscribeToServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D58E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8480 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FullScreenPositioner::SubscribeToServices(FullScreenPositioner *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  char *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v9; // eax
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v13; // eax
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v17; // r9
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v21; // [rsp+60h] [rbp+30h] BYREF
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF
  __int64 v23; // [rsp+70h] [rbp+40h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (char *)this + 192;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 24);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveApplicationManager,
         &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDC,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v23 = 0LL;
  v8 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
         a2,
         &IID_IActiveZBandNotificationForMonitorService,
         &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
         &v23);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_15;
  }
  v22 = 0LL;
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v10)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
          &v22);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_14;
  }
  v21 = 0LL;
  v12 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
  v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v12)(
          a2,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &v21);
  v7 = v13;
  if ( v13 < 0 )
  {
    v19 = 229LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_13;
  }
  v14 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 23);
  v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
          a2,
          &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
          &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
          (char *)this + 184);
  v7 = v13;
  if ( v13 < 0 )
  {
    v19 = 231LL;
    goto LABEL_28;
  }
  v15 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 30);
  v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
          a2,
          &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
          &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
          (char *)this + 240);
  v7 = v13;
  if ( v13 < 0 )
  {
    v19 = 232LL;
    goto LABEL_28;
  }
  v16 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 31);
  v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
          a2,
          &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
          &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
          (char *)this + 248);
  v7 = v13;
  if ( v13 < 0 )
  {
    v19 = 233LL;
    goto LABEL_28;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v23 + 24LL))(
          v23,
          ((unsigned __int64)this + 112) & -(__int64)(this != (FullScreenPositioner *)32),
          (char *)this + 320);
  v7 = v13;
  if ( v13 < 0 )
  {
    v19 = 235LL;
    goto LABEL_28;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v22 + 24LL))(
          v22,
          ((unsigned __int64)this + 104) & -(__int64)(this != (FullScreenPositioner *)32),
          (char *)this + 324);
  v7 = v13;
  if ( v13 < 0 )
  {
    v19 = 236LL;
    goto LABEL_28;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 23) + 96LL))(
          *((_QWORD *)this + 23),
          ((unsigned __int64)this + 120) & -(__int64)(this != (FullScreenPositioner *)32),
          (char *)this + 328);
  v7 = v13;
  if ( v13 < 0 )
  {
    v19 = 237LL;
    goto LABEL_28;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v21 + 72LL))(
          v21,
          ((unsigned __int64)this + 128) & -(__int64)(this != (FullScreenPositioner *)32),
          (char *)this + 332);
  v7 = v13;
  if ( v13 < 0 )
  {
    v19 = 238LL;
    goto LABEL_28;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0,
    3u,
    v17);
  v7 = 0;
LABEL_13:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
LABEL_14:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
LABEL_15:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  return v7;
}

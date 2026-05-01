/*
 * XREFs of ?SubscribeToServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F9A10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v21; // [rsp+60h] [rbp+30h] BYREF
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF
  __int64 v23; // [rsp+70h] [rbp+40h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (char *)this + 176;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 22);
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
      (void *)0xCC,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v6,
      v19);
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
      (void *)0xCF,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v9,
      v19);
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
      (void *)0xD2,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v11,
      v19);
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
    v18 = 213LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v13,
      v19);
    goto LABEL_13;
  }
  v14 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 21);
  v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
          a2,
          &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
          &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
          (char *)this + 168);
  v7 = v13;
  if ( v13 < 0 )
  {
    v18 = 215LL;
    goto LABEL_28;
  }
  v15 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
  v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
          a2,
          &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
          &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
          (char *)this + 224);
  v7 = v13;
  if ( v13 < 0 )
  {
    v18 = 216LL;
    goto LABEL_28;
  }
  v16 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
  v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
          a2,
          &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
          &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
          (char *)this + 232);
  v7 = v13;
  if ( v13 < 0 )
  {
    v18 = 217LL;
    goto LABEL_28;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v23 + 24LL))(
          v23,
          ((unsigned __int64)this + 104) & -(__int64)(this != (FullScreenPositioner *)32),
          (char *)this + 288);
  v7 = v13;
  if ( v13 < 0 )
  {
    v18 = 219LL;
    goto LABEL_28;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v22 + 24LL))(
          v22,
          ((unsigned __int64)this + 96) & -(__int64)(this != (FullScreenPositioner *)32),
          (char *)this + 292);
  v7 = v13;
  if ( v13 < 0 )
  {
    v18 = 220LL;
    goto LABEL_28;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 21) + 96LL))(
          *((_QWORD *)this + 21),
          ((unsigned __int64)this + 112) & -(__int64)(this != (FullScreenPositioner *)32),
          (char *)this + 296);
  v7 = v13;
  if ( v13 < 0 )
  {
    v18 = 221LL;
    goto LABEL_28;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v21 + 72LL))(
          v21,
          ((unsigned __int64)this + 120) & -(__int64)(this != (FullScreenPositioner *)32),
          (char *)this + 300);
  v7 = v13;
  if ( v13 < 0 )
  {
    v18 = 222LL;
    goto LABEL_28;
  }
  v7 = 0;
LABEL_13:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
LABEL_14:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
LABEL_15:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  return v7;
}

/*
 * XREFs of ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D5CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x180173F8C (-InternalRelease@-$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x180180528 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositioner::SubscribeToServices(TabletModePositioner *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v10; // r12
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v23)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(__int64, __int64, __int64 *); // rbx
  int v26; // eax
  HRESULT (__stdcall *QueryInterface)(IServiceProvider *, const IID *const, void **); // rbx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v35; // rdx
  HRESULT (__stdcall *v36)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v37; // rdx
  __int64 v38; // [rsp+30h] [rbp-59h] BYREF
  int v39; // [rsp+38h] [rbp-51h] BYREF
  __int64 *v40; // [rsp+40h] [rbp-49h] BYREF
  __int64 v41; // [rsp+48h] [rbp-41h] BYREF
  __int64 v42; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v43[3]; // [rsp+58h] [rbp-31h] BYREF
  char *v44; // [rsp+70h] [rbp-19h]
  __int128 v45; // [rsp+80h] [rbp-9h] BYREF
  __int128 v46; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v42 = 0LL;
  v41 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  v5 = (char *)this + 312;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 39);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 350LL;
LABEL_68:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_42;
  }
  v8 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 40);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v8)(
         a2,
         &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
         &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
         (char *)this + 320);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 351LL;
    goto LABEL_68;
  }
  v9 = a2->lpVtbl->QueryService;
  v10 = (_QWORD *)((char *)this + 328);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 41);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
         a2,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         (char *)this + 328);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 352LL;
    goto LABEL_68;
  }
  v11 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 42);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
         a2,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         (char *)this + 336);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 353LL;
    goto LABEL_68;
  }
  v12 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 43);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v12)(
         a2,
         &GUID_05ac56a6_baf7_414f_b92c_7156052701de,
         &GUID_2010122c_468a_480f_8cd1_b85e76f5882e,
         (char *)this + 344);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 354LL;
    goto LABEL_68;
  }
  v13 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 44);
  ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v13)(
    a2,
    &SID_VirtualDesktopManager,
    &GUID_b2f925b9_5a0f_4d2e_9f4d_2b1507593c10,
    (char *)this + 352);
  v14 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 45);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
         a2,
         &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
         &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
         (char *)this + 360);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 358LL;
    goto LABEL_68;
  }
  v15 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 46);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))v15)(
         a2,
         &unk_180684640,
         &GUID_bed1afcc_2de8_451c_9d0f_b5e62404b714,
         (char *)this + 368);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 359LL;
    goto LABEL_68;
  }
  v16 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v42);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v16)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v42);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 360LL;
    goto LABEL_68;
  }
  v17 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 47);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v17)(
         a2,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         (char *)this + 376);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 361LL;
    goto LABEL_68;
  }
  v18 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 48);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v18)(
         a2,
         &SID_MultitaskingViewVisibilityService,
         &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
         (char *)this + 384);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 362LL;
    goto LABEL_68;
  }
  v19 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v19)(
         a2,
         &SID_ShellTargetingTracker,
         &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
         &v41);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 363LL;
    goto LABEL_68;
  }
  v20 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease((char *)this + 392);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v20)(
         a2,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         (char *)this + 392);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 364LL;
    goto LABEL_68;
  }
  v21 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 52);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v21)(
         a2,
         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
         (char *)this + 416);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 365LL;
    goto LABEL_68;
  }
  if ( IsSurfaceHubWithWin32VtcEnabled() )
  {
    v36 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 54);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v36)(
           a2,
           &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
           &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
           (char *)this + 432);
    v7 = v6;
    if ( v6 < 0 )
    {
      v35 = 369LL;
      goto LABEL_68;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 40) + 24LL))(
         *((_QWORD *)this + 40),
         ((unsigned __int64)this + 112) & -(__int64)(this != (TabletModePositioner *)24),
         (char *)this + 468);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 372LL;
    goto LABEL_68;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(*(_QWORD *)*v10 + 72LL))(
         *v10,
         ((unsigned __int64)this + 120) & -(__int64)(this != (TabletModePositioner *)24),
         (char *)this + 472);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 374LL;
    goto LABEL_68;
  }
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v10 + 24LL))(*v10, (char *)this + 212);
  v22 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 51);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v22)(
         a2,
         &SID_TransitionCoordinator,
         &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
         (char *)this + 408);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 377LL;
    goto LABEL_68;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 51) + 24LL))(
         *((_QWORD *)this + 51),
         ((unsigned __int64)this + 176) & -(__int64)(this != (TabletModePositioner *)24),
         (char *)this + 492);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 378LL;
    goto LABEL_68;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned __int64, char *))(**((_QWORD **)this + 47) + 24LL))(
         *((_QWORD *)this + 47),
         &unk_1806847A0,
         1LL,
         ((unsigned __int64)this + 144) & -(__int64)(this != (TabletModePositioner *)24),
         (char *)this + 480);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 384LL;
    goto LABEL_68;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 48) + 32LL))(
         *((_QWORD *)this + 48),
         ((unsigned __int64)this + 152) & -(__int64)(this != (TabletModePositioner *)24),
         (char *)this + 484);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 385LL;
    goto LABEL_68;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v41 + 24LL))(
         v41,
         ((unsigned __int64)this + 160) & -(__int64)(this != (TabletModePositioner *)24),
         (char *)this + 488);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 386LL;
    goto LABEL_68;
  }
  v43[0] = *((_QWORD *)this + 39);
  v43[1] = *v10;
  v43[2] = *((_QWORD *)this + 43);
  if ( this == (TabletModePositioner *)24 )
    v44 = 0LL;
  else
    v44 = (char *)this + 64;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 35) + 24LL))(*((_QWORD *)this + 35), v43);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 395LL;
    goto LABEL_68;
  }
  v23 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 53);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v23)(
         a2,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         (char *)this + 424);
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = 398LL;
    goto LABEL_68;
  }
  v40 = 0LL;
  v24 = *((_QWORD *)this + 53);
  v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v24 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v40);
  v26 = v25(v24, 2LL, (__int64 *)&v40);
  v7 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x191,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v26);
    goto LABEL_41;
  }
  v38 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
  if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &v38) >= 0 )
  {
    v39 = 0;
    v28 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 48LL))(v38, &v39);
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x199,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v28);
    if ( v39 )
    {
      v46 = 0LL;
      v29 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v38 + 88LL))(v38, &v46);
      if ( v29 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x19E,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v29);
      v30 = *v40;
      v45 = v46;
      v31 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v30 + 56))(v40, v38, &v45, 1LL);
      if ( v31 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x19F,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v31);
    }
  }
  v32 = 3LL;
  if ( *((_DWORD *)this + 53) != 1 )
    v32 = 0LL;
  v33 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v40 + 40))(v40, v32);
  v7 = v33;
  if ( v33 < 0 )
  {
    v37 = 424LL;
LABEL_72:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v33);
    goto LABEL_40;
  }
  v33 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v42 + 24LL))(
          v42,
          ((unsigned __int64)this + 128) & -(__int64)(this != (TabletModePositioner *)24),
          (char *)this + 476);
  v7 = v33;
  if ( v33 < 0 )
  {
    v37 = 427LL;
    goto LABEL_72;
  }
  v7 = 0;
LABEL_40:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
LABEL_41:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v40);
LABEL_42:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v42);
  return v7;
}

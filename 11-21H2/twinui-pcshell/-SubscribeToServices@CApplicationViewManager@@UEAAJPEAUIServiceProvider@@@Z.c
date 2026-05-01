/*
 * XREFs of ?SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D6550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x18010BBD0 (--$Register@UIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZP.c)
 *     ??$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x18010BC84 (--$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotifica.c)
 *     ??$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x18010BD38 (--$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotificatio.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::SubscribeToServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v5; // r13
  int v6; // ebx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v20)(_QWORD, GUID *, __int64 *); // rbx
  int v21; // eax
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v23; // eax
  int v24; // r8d
  int v25; // r9d
  HRESULT (__stdcall *v26)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v27; // eax
  int v28; // r8d
  int v29; // r9d
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+40h]
  __int64 v37; // [rsp+80h] [rbp+48h] BYREF
  __int64 v38; // [rsp+88h] [rbp+50h] BYREF
  __int64 v39; // [rsp+90h] [rbp+58h] BYREF
  __int64 v40; // [rsp+98h] [rbp+60h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (char *)this + 664;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 83);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveApplicationManager,
         &GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0,
         v5);
  if ( v6 < 0 )
  {
    v31 = 61LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v7 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 84);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
         a2,
         &IID_IClassicWindowManager,
         &GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84,
         (char *)this + 672);
  if ( v6 < 0 )
  {
    v31 = 62LL;
    goto LABEL_27;
  }
  v8 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 85);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v8)(
         a2,
         &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
         &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
         (char *)this + 680);
  if ( v6 < 0 )
  {
    v31 = 63LL;
    goto LABEL_27;
  }
  v9 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 90);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v9)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         (char *)this + 720);
  if ( v6 < 0 )
  {
    v31 = 64LL;
    goto LABEL_27;
  }
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 91);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
         a2,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         (char *)this + 728);
  if ( v6 < 0 )
  {
    v31 = 65LL;
    goto LABEL_27;
  }
  v11 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 86);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
         a2,
         &GUID_1258a377_0646_40fd_b5fc_b642b81befba,
         &GUID_1258a377_0646_40fd_b5fc_b642b81befba,
         (char *)this + 688);
  if ( v6 < 0 )
  {
    v31 = 67LL;
    goto LABEL_27;
  }
  v12 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 87);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v12)(
         a2,
         &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9,
         &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9,
         (char *)this + 696);
  if ( v6 < 0 )
  {
    v31 = 68LL;
    goto LABEL_27;
  }
  v13 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 88);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
         a2,
         &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
         &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
         (char *)this + 704);
  if ( v6 < 0 )
  {
    v31 = 69LL;
    goto LABEL_27;
  }
  v14 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 89);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
         a2,
         &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
         &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
         (char *)this + 712);
  if ( v6 < 0 )
  {
    v31 = 70LL;
    goto LABEL_27;
  }
  v40 = 0LL;
  v15 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v40);
  v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v15)(
          a2,
          &GUID_66012c8d_bc3c_4254_bacd_ca483666b143,
          &GUID_66012c8d_bc3c_4254_bacd_ca483666b143,
          &v40);
  v6 = v16;
  if ( v16 < 0 )
  {
    v32 = 74LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_23;
  }
  v16 = SmartCookie::Register<IBamThrottleSettings,long (IBamThrottleSettings::*)(IWindowOccludedChangeListener *,unsigned long *),long (IBamThrottleSettings::*)(unsigned long),CApplicationViewManager *>(
          (int)this + 464,
          v40,
          v17,
          v18,
          (__int64)this - 72);
  v6 = v16;
  if ( v16 < 0 )
  {
    v32 = 79LL;
    goto LABEL_38;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 91) + 40LL))(
          *((_QWORD *)this + 91),
          ((unsigned __int64)this + 96) & -(__int64)(this != (CApplicationViewManager *)72));
  v6 = v16;
  if ( v16 < 0 )
  {
    v32 = 81LL;
    goto LABEL_38;
  }
  v39 = 0LL;
  v19 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v5;
  v20 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v5;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v39);
  v21 = v20(v19, &GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164, &v39);
  v6 = v21;
  if ( v21 < 0 )
  {
    v33 = 90LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_22;
  }
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 24LL))(v39);
  v6 = v21;
  if ( v21 < 0 )
  {
    v33 = 91LL;
    goto LABEL_41;
  }
  v38 = 0LL;
  v22 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
  v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v22)(
          a2,
          &IID_IImmersiveApplicationNotificationService,
          &GUID_7860c098_fb29_49aa_a512_adacc0ffee84,
          &v38);
  v6 = v23;
  if ( v23 < 0 )
  {
    v34 = 95LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_21;
  }
  v23 = SmartCookie::Register<IImmersiveApplicationNotificationService,long (IImmersiveApplicationNotificationService::*)(IImmersiveApplicationNotification *,unsigned long *),long (IImmersiveApplicationNotificationService::*)(unsigned long),CApplicationViewManager *>(
          (int)this + 336,
          v38,
          v24,
          v25,
          (__int64)this - 72);
  v6 = v23;
  if ( v23 < 0 )
  {
    v34 = 100LL;
    goto LABEL_44;
  }
  v37 = 0LL;
  v26 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
  v27 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v26)(
          a2,
          &GUID_f42f750a_64a8_4190_951d_c6f7ef4e4ba1,
          &GUID_f8a6c78c_9f19_4417_aaf5_c9807f8aee4f,
          &v37);
  v6 = v27;
  if ( v27 < 0 )
  {
    v35 = 104LL;
LABEL_47:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v27);
    goto LABEL_20;
  }
  v27 = SmartCookie::Register<IEnterpriseIdChangeNotificationProvider,long (IEnterpriseIdChangeNotificationProvider::*)(IEnterpriseIdChangeNotification *,unsigned long *),long (IEnterpriseIdChangeNotificationProvider::*)(unsigned long),CApplicationViewManager *>(
          (int)this + 208,
          v37,
          v28,
          v29,
          (__int64)this - 72);
  v6 = v27;
  if ( v27 < 0 )
  {
    v35 = 109LL;
    goto LABEL_47;
  }
  v6 = 0;
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
LABEL_22:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v39);
LABEL_23:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v40);
  return (unsigned int)v6;
}

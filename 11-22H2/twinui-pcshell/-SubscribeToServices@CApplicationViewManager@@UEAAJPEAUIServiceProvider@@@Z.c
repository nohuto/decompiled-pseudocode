/*
 * XREFs of ?SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180188E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x18018934C (--$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotificatio.c)
 *     ??$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x180189420 (--$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotifica.c)
 *     ??$Register@UIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x1801894F4 (--$Register@UIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::SubscribeToServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v5; // r13
  int v6; // ebx
  __int64 v7; // rdx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v17; // eax
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v22)(_QWORD, GUID *, __int64 *); // rbx
  int v23; // eax
  __int64 v24; // rdx
  HRESULT (__stdcall *v25)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v26; // eax
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdx
  HRESULT (__stdcall *v30)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v31; // eax
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+40h]
  __int64 v37; // [rsp+80h] [rbp+48h] BYREF
  __int64 v38; // [rsp+88h] [rbp+50h] BYREF
  __int64 v39; // [rsp+90h] [rbp+58h] BYREF
  __int64 v40; // [rsp+98h] [rbp+60h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (char *)this + 664;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 83);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveApplicationManager,
         &GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0,
         v5);
  if ( v6 >= 0 )
  {
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 84);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v8)(
           a2,
           &IID_IClassicWindowManager,
           &GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84,
           (char *)this + 672);
    if ( v6 < 0 )
    {
      v7 = 63LL;
      goto LABEL_3;
    }
    v9 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 85);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
           a2,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           (char *)this + 680);
    if ( v6 < 0 )
    {
      v7 = 64LL;
      goto LABEL_3;
    }
    v10 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 90);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v10)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           (char *)this + 720);
    if ( v6 < 0 )
    {
      v7 = 65LL;
      goto LABEL_3;
    }
    v11 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 91);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
           a2,
           &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
           &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
           (char *)this + 728);
    if ( v6 < 0 )
    {
      v7 = 66LL;
      goto LABEL_3;
    }
    v12 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 86);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v12)(
           a2,
           &GUID_1258a377_0646_40fd_b5fc_b642b81befba,
           &GUID_1258a377_0646_40fd_b5fc_b642b81befba,
           (char *)this + 688);
    if ( v6 < 0 )
    {
      v7 = 68LL;
      goto LABEL_3;
    }
    v13 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 87);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
           a2,
           &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9,
           &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9,
           (char *)this + 696);
    if ( v6 < 0 )
    {
      v7 = 69LL;
      goto LABEL_3;
    }
    v14 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 88);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
           a2,
           &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
           &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
           (char *)this + 704);
    if ( v6 < 0 )
    {
      v7 = 70LL;
      goto LABEL_3;
    }
    v15 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 89);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
           a2,
           &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
           &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
           (char *)this + 712);
    if ( v6 < 0 )
    {
      v7 = 71LL;
      goto LABEL_3;
    }
    v40 = 0LL;
    v16 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v40);
    v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v16)(
            a2,
            &GUID_66012c8d_bc3c_4254_bacd_ca483666b143,
            &GUID_66012c8d_bc3c_4254_bacd_ca483666b143,
            &v40);
    v6 = v17;
    if ( v17 < 0 )
    {
      v20 = 76LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v17);
LABEL_46:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v40);
      return (unsigned int)v6;
    }
    v17 = SmartCookie::Register<IBamThrottleSettings,long (IBamThrottleSettings::*)(IWindowOccludedChangeListener *,unsigned long *),long (IBamThrottleSettings::*)(unsigned long),CApplicationViewManager *>(
            (int)this + 464,
            v40,
            v18,
            v19,
            (__int64)this - 72);
    v6 = v17;
    if ( v17 < 0 )
    {
      v20 = 81LL;
      goto LABEL_26;
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 91) + 40LL))(
            *((_QWORD *)this + 91),
            ((unsigned __int64)this + 96) & -(__int64)(this != (CApplicationViewManager *)72));
    v6 = v17;
    if ( v17 < 0 )
    {
      v20 = 83LL;
      goto LABEL_26;
    }
    v39 = 0LL;
    v21 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v5;
    v22 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v39);
    v23 = v22(v21, &GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164, &v39);
    v6 = v23;
    if ( v23 < 0 )
    {
      v24 = 92LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v23);
LABEL_45:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v39);
      goto LABEL_46;
    }
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 24LL))(v39);
    v6 = v23;
    if ( v23 < 0 )
    {
      v24 = 93LL;
      goto LABEL_31;
    }
    v38 = 0LL;
    v25 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
    v26 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v25)(
            a2,
            &IID_IImmersiveApplicationNotificationService,
            &GUID_7860c098_fb29_49aa_a512_adacc0ffee84,
            &v38);
    v6 = v26;
    if ( v26 < 0 )
    {
      v29 = 97LL;
LABEL_36:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v26);
LABEL_44:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v38);
      goto LABEL_45;
    }
    v26 = SmartCookie::Register<IImmersiveApplicationNotificationService,long (IImmersiveApplicationNotificationService::*)(IImmersiveApplicationNotification *,unsigned long *),long (IImmersiveApplicationNotificationService::*)(unsigned long),CApplicationViewManager *>(
            (int)this + 336,
            v38,
            v27,
            v28,
            (__int64)this - 72);
    v6 = v26;
    if ( v26 < 0 )
    {
      v29 = 102LL;
      goto LABEL_36;
    }
    v37 = 0LL;
    v30 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
    v31 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v30)(
            a2,
            &GUID_f42f750a_64a8_4190_951d_c6f7ef4e4ba1,
            &GUID_f8a6c78c_9f19_4417_aaf5_c9807f8aee4f,
            &v37);
    v6 = v31;
    if ( v31 >= 0 )
    {
      v31 = SmartCookie::Register<IEnterpriseIdChangeNotificationProvider,long (IEnterpriseIdChangeNotificationProvider::*)(IEnterpriseIdChangeNotification *,unsigned long *),long (IEnterpriseIdChangeNotificationProvider::*)(unsigned long),CApplicationViewManager *>(
              (int)this + 208,
              v37,
              v32,
              v33,
              (__int64)this - 72);
      v6 = v31;
      if ( v31 >= 0 )
      {
        v6 = 0;
        goto LABEL_43;
      }
      v34 = 112LL;
    }
    else
    {
      v34 = 107LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v31);
LABEL_43:
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v37);
    goto LABEL_44;
  }
  v7 = 62LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}

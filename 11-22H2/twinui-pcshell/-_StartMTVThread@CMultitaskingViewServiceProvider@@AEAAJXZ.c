/*
 * XREFs of ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800E1C6C
 * Callers:
 *     ?PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x1801BCB80 (-PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800E2B7C (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180107A98 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCI_ea_180107A98.c)
 *     ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x180125F10 (--_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ETUpdate@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180126974 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ETUpdate@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180126B8C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$CAutoMemPtr@UINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@@@QEAA@XZ @ 0x1801BE7B0 (--1-$CAutoMemPtr@UINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall CMultitaskingViewServiceProvider::_StartMTVThread(IUnknown **this)
{
  __int64 *v2; // rsi
  unsigned int LastError; // ebx
  int v4; // eax
  __int64 v5; // rdx
  IUnknown *v6; // rax
  HRESULT v7; // eax
  __int64 v8; // rdx
  HRESULT v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  HRESULT v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  HRESULT v15; // eax
  __int64 v16; // rdx
  IUnknown *v17; // rdi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v19; // eax
  IUnknown *v20; // rdi
  ULONG (__stdcall *Release)(IUnknown *); // rbx
  int v22; // eax
  __int64 v23; // rdx
  HRESULT v24; // eax
  __int64 v25; // rdx
  IUnknown *v26; // rdi
  HRESULT (__stdcall *v27)(IUnknown *, const IID *const, void **); // rbx
  int v28; // eax
  __int64 v29; // rdx
  HRESULT v30; // eax
  __int64 v31; // rdx
  HRESULT v32; // eax
  __int64 v33; // rdx
  HRESULT v34; // eax
  __int64 v35; // rdx
  HRESULT v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // eax
  int v41; // eax
  HRESULT v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rdx
  int v45; // eax
  HRESULT v46; // eax
  wil::details::in1diag3 *v47; // rcx
  __int64 v48; // rdx
  IUnknown *EventW; // rbx
  const char *v50; // r9
  IUnknown *v51; // rcx
  __int64 v52; // rdx
  unsigned int v53; // edx
  void *v55; // [rsp+20h] [rbp-89h] BYREF
  void *v56; // [rsp+28h] [rbp-81h] BYREF
  void *v57; // [rsp+30h] [rbp-79h] BYREF
  void *v58; // [rsp+38h] [rbp-71h] BYREF
  void *v59; // [rsp+40h] [rbp-69h] BYREF
  void *v60; // [rsp+48h] [rbp-61h] BYREF
  void *v61; // [rsp+50h] [rbp-59h] BYREF
  void *v62; // [rsp+58h] [rbp-51h] BYREF
  void *v63; // [rsp+60h] [rbp-49h] BYREF
  void *v64; // [rsp+68h] [rbp-41h] BYREF
  void *v65; // [rsp+70h] [rbp-39h] BYREF
  void *v66; // [rsp+78h] [rbp-31h] BYREF
  void *v67; // [rsp+80h] [rbp-29h] BYREF
  void *v68; // [rsp+88h] [rbp-21h] BYREF
  void *v69; // [rsp+90h] [rbp-19h] BYREF
  void *v70; // [rsp+98h] [rbp-11h] BYREF
  void *ppvOut; // [rsp+A0h] [rbp-9h] BYREF
  void *v72; // [rsp+A8h] [rbp-1h] BYREF
  void *v73; // [rsp+B0h] [rbp+7h] BYREF
  void *v74; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 *v75; // [rsp+C0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  int v77; // [rsp+118h] [rbp+6Fh] BYREF
  void *v78; // [rsp+120h] [rbp+77h] BYREF
  void *v79; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = (__int64 *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v2[24] = 0LL;
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[4] = 0LL;
    v2[5] = 0LL;
    v2[6] = 0LL;
    v2[7] = 0LL;
    v2[8] = 0LL;
    v2[9] = 0LL;
    v2[10] = 0LL;
    v2[11] = 0LL;
    v2[12] = 0LL;
    v2[13] = 0LL;
    v2[14] = 0LL;
    v2[15] = 0LL;
    v2[16] = 0LL;
    v2[17] = 0LL;
    v2[18] = 0LL;
    v2[19] = 0LL;
    v2[20] = 0LL;
    v2[21] = 0LL;
    v2[22] = 0LL;
    v2[23] = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  v75 = v2;
  if ( v2 )
  {
    v72 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v72);
    Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>>(
      this,
      &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
      &v72);
    v77 = 2;
    v78 = v72;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
           v2,
           &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
           &v78,
           &v77);
    LastError = v4;
    if ( v4 < 0 )
    {
      v5 = 310LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v4,
        (int)v55);
LABEL_122:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v72);
      goto LABEL_123;
    }
    v6 = this[28];
    v77 = 2;
    v78 = v6;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 1);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
           v2 + 1,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &v78,
           &v77);
    LastError = v4;
    if ( v4 < 0 )
    {
      v5 = 312LL;
      goto LABEL_10;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    v7 = IUnknown_QueryService(
           this[2],
           &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
           &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
           &ppvOut);
    LastError = v7;
    if ( v7 < 0 )
    {
      v8 = 315LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v7,
        (int)v55);
LABEL_121:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&ppvOut);
      goto LABEL_122;
    }
    v77 = 2;
    v78 = ppvOut;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 3);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
           v2 + 3,
           &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
           &v78,
           &v77);
    LastError = v7;
    if ( v7 < 0 )
    {
      v8 = 316LL;
      goto LABEL_15;
    }
    v70 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v70);
    v9 = IUnknown_QueryService(
           this[2],
           &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
           &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
           &v70);
    LastError = v9;
    if ( v9 < 0 )
    {
      v10 = 319LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v9,
        (int)v55);
LABEL_120:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v70);
      goto LABEL_121;
    }
    v77 = 2;
    v78 = v70;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 2);
    v9 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
           v2 + 2,
           &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
           &v78,
           &v77);
    LastError = v9;
    if ( v9 < 0 )
    {
      v10 = 320LL;
      goto LABEL_20;
    }
    v69 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v69);
    if ( IUnknown_QueryService(
           this[2],
           (const GUID *const)&SID_VirtualDesktopManager,
           &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
           &v69) >= 0 )
    {
      v77 = 2;
      v78 = v69;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 4);
      Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
        v2 + 4,
        &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
        &v78,
        &v77);
    }
    v68 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v68);
    if ( IUnknown_QueryService(
           this[2],
           (const GUID *const)&SID_VirtualDesktopPinnedApps,
           &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
           &v68) >= 0 )
    {
      v77 = 2;
      v78 = v68;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 5);
      v11 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
              v2 + 5,
              &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
              &v78,
              &v77);
      LastError = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14B,
          (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v11,
          (int)v55);
LABEL_119:
        Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v68);
        Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v69);
        goto LABEL_120;
      }
    }
    v67 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v67);
    v12 = IUnknown_QueryService(
            this[2],
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &v67);
    LastError = v12;
    if ( v12 < 0 )
    {
      v13 = 335LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v12,
        (int)v55);
LABEL_118:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v67);
      goto LABEL_119;
    }
    v77 = 2;
    v78 = v67;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 6);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v2 + 6,
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &v78,
            &v77);
    LastError = v12;
    if ( v12 < 0 )
    {
      v13 = 336LL;
      goto LABEL_30;
    }
    v66 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v66);
    if ( IUnknown_QueryService(
           this[2],
           (const GUID *const)&SID_VirtualDesktopNotificationService,
           &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
           &v66) >= 0 )
    {
      v77 = 2;
      v78 = v66;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 7);
      v14 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
              v2 + 7,
              &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
              &v78,
              &v77);
      LastError = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x155,
          (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v14,
          (int)v55);
LABEL_117:
        Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v66);
        goto LABEL_118;
      }
    }
    v65 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v65);
    v15 = IUnknown_QueryService(this[2], &stru_1808290A8, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &v65);
    LastError = v15;
    if ( v15 < 0 )
    {
      v16 = 345LL;
LABEL_38:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v15,
        (int)v55);
LABEL_116:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v65);
      goto LABEL_117;
    }
    v77 = 2;
    v78 = v65;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 8);
    v15 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v2 + 8,
            &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
            &v78,
            &v77);
    LastError = v15;
    if ( v15 < 0 )
    {
      v16 = 346LL;
      goto LABEL_38;
    }
    v64 = 0LL;
    v17 = this[25];
    QueryInterface = v17->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v64);
    ((void (__fastcall *)(IUnknown *, GUID *, void **))QueryInterface)(
      v17,
      &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
      &v64);
    v77 = 2;
    v78 = v64;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 9);
    v19 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v2 + 9,
            &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
            &v78,
            &v77);
    LastError = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v19,
        (int)v55);
LABEL_115:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v64);
      goto LABEL_116;
    }
    v63 = 0LL;
    v20 = this[22];
    Release = v20->lpVtbl[2].Release;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v63);
    v22 = ((__int64 (__fastcall *)(IUnknown *, void **))Release)(v20, &v63);
    LastError = v22;
    if ( v22 < 0 )
    {
      v23 = 353LL;
LABEL_45:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v22,
        (int)v55);
LABEL_114:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v63);
      goto LABEL_115;
    }
    v77 = 2;
    v78 = v63;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 10);
    v22 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v2 + 10,
            &GUID_4639c886_cffe_492c_915a_1e3f02d22434,
            &v78,
            &v77);
    LastError = v22;
    if ( v22 < 0 )
    {
      v23 = 354LL;
      goto LABEL_45;
    }
    v62 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v62);
    v24 = IUnknown_QueryService(this[2], &stru_1808290B8, &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7, &v62);
    LastError = v24;
    if ( v24 < 0 )
    {
      v25 = 357LL;
LABEL_50:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v24,
        (int)v55);
LABEL_113:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v62);
      goto LABEL_114;
    }
    v77 = 2;
    v78 = v62;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 11);
    v24 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v2 + 11,
            &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            &v78,
            &v77);
    LastError = v24;
    if ( v24 < 0 )
    {
      v25 = 358LL;
      goto LABEL_50;
    }
    v61 = 0LL;
    v26 = this[26];
    v27 = v26->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v61);
    v28 = ((__int64 (__fastcall *)(IUnknown *, GUID *, void **))v27)(
            v26,
            &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            &v61);
    LastError = v28;
    if ( v28 < 0 )
    {
      v29 = 361LL;
LABEL_55:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v28,
        (int)v55);
LABEL_112:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v61);
      goto LABEL_113;
    }
    v77 = 2;
    v78 = v61;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 12);
    v28 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v2 + 12,
            &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            &v78,
            &v77);
    LastError = v28;
    if ( v28 < 0 )
    {
      v29 = 362LL;
      goto LABEL_55;
    }
    v60 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v60);
    v30 = IUnknown_QueryService(
            this[2],
            (const GUID *const)&SID_ShellTargetingTracker,
            &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            &v60);
    LastError = v30;
    if ( v30 < 0 )
    {
      v31 = 365LL;
LABEL_60:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v30,
        (int)v55);
LABEL_111:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v60);
      goto LABEL_112;
    }
    v77 = 2;
    v78 = v60;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 13);
    v30 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v2 + 13,
            &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            &v78,
            &v77);
    LastError = v30;
    if ( v30 < 0 )
    {
      v31 = 366LL;
      goto LABEL_60;
    }
    v59 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v59);
    v32 = IUnknown_QueryService(
            this[2],
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &v59);
    LastError = v32;
    if ( v32 < 0 )
    {
      v33 = 369LL;
LABEL_65:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v33,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v32,
        (int)v55);
LABEL_110:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v59);
      goto LABEL_111;
    }
    v77 = 2;
    v78 = v59;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 14);
    v32 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v2 + 14,
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &v78,
            &v77);
    LastError = v32;
    if ( v32 < 0 )
    {
      v33 = 370LL;
      goto LABEL_65;
    }
    v58 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v58);
    v34 = IUnknown_QueryService(
            this[2],
            (const GUID *const)&SID_ApplicationViewIconLoaderService,
            &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            &v58);
    LastError = v34;
    if ( v34 < 0 )
    {
      v35 = 382LL;
LABEL_70:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v34,
        (int)v55);
LABEL_109:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v58);
      goto LABEL_110;
    }
    v77 = 2;
    v78 = v58;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 16);
    v34 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v2 + 16,
            &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            &v78,
            &v77);
    LastError = v34;
    if ( v34 < 0 )
    {
      v35 = 383LL;
      goto LABEL_70;
    }
    v57 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
    v36 = IUnknown_QueryService(
            this[2],
            (const GUID *const)&SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v57);
    LastError = v36;
    if ( v36 < 0 )
    {
      v37 = 386LL;
LABEL_75:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v36,
        (int)v55);
LABEL_108:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v57);
      goto LABEL_109;
    }
    v77 = 2;
    v78 = v57;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 19);
    v36 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v2 + 19,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v78,
            &v77);
    LastError = v36;
    if ( v36 < 0 )
    {
      v37 = 387LL;
      goto LABEL_75;
    }
    LOBYTE(v39) = 3;
    LOBYTE(v38) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
      v38,
      v39);
    v79 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v79);
    IUnknown_QueryService(
      this[2],
      (const GUID *const)&SID_VirtualDesktopDataSource,
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      &v79);
    if ( v79 )
    {
      v77 = 2;
      v74 = v79;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 17);
      Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
        v2 + 17,
        &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
        &v74,
        &v77);
    }
    v78 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v78);
    IUnknown_QueryService(
      this[2],
      (const GUID *const)&SID_VirtualDesktopController,
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      &v78);
    if ( v78 )
    {
      v77 = 2;
      v74 = v78;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 18);
      v40 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
              v2 + 18,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              &v74,
              &v77);
      LastError = v40;
      if ( v40 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x193,
          (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v40,
          (int)v55);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v78);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v79);
        goto LABEL_108;
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v78);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v79);
    v56 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v56);
    if ( IUnknown_QueryService(this[2], &stru_180829098, &GUID_8bc0416b_e6fa_4b43_9553_9386b4584de0, &v56) >= 0 )
    {
      v77 = 2;
      v78 = v56;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 20);
      v41 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
              v2 + 20,
              &GUID_8bc0416b_e6fa_4b43_9553_9386b4584de0,
              &v78,
              &v77);
      LastError = v41;
      if ( v41 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x19A,
          (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v41,
          (int)v55);
LABEL_107:
        Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v56);
        goto LABEL_108;
      }
    }
    v55 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v55);
    v42 = IUnknown_QueryService(
            this[2],
            (const GUID *const)&SID_ImmersiveShellHookService,
            &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
            &v55);
    LastError = v42;
    if ( v42 < 0 )
    {
      v43 = 414LL;
LABEL_88:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v43,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v42,
        (int)v55);
LABEL_106:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v55);
      goto LABEL_107;
    }
    v77 = 2;
    v78 = v55;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 21);
    v42 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v2 + 21,
            &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
            &v78,
            &v77);
    LastError = v42;
    if ( v42 < 0 )
    {
      v43 = 415LL;
      goto LABEL_88;
    }
    LOBYTE(v44) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ETUpdate>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ETUpdate>::GetImpl'::`2'::impl,
      v44);
    v78 = 0LL;
    if ( IUnknown_QueryService(
           this[2],
           &winrt::impl::guid_v<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>,
           &GUID_0e84cceb_709b_52d2_a663_ec5130862a9b,
           &v78) >= 0 )
    {
      v77 = 2;
      v79 = v78;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 22);
      v45 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
              v2 + 22,
              &GUID_0e84cceb_709b_52d2_a663_ec5130862a9b,
              &v79,
              &v77);
      LastError = v45;
      if ( v45 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1A7,
          (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v45,
          (int)v55);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v78);
        goto LABEL_106;
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v78);
    v73 = 0LL;
    v46 = IUnknown_QueryService(
            this[2],
            &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
            &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
            &v73);
    v47 = retaddr;
    if ( v46 >= 0 )
    {
      v77 = 2;
      v78 = v73;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2 + 23);
      v46 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
              v2 + 23,
              &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
              &v78,
              &v77);
      v47 = retaddr;
      if ( v46 >= 0 )
        goto LABEL_97;
      v48 = 430LL;
    }
    else
    {
      v48 = 428LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v47,
      (void *)v48,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v46,
      (int)v55);
LABEL_97:
    EventW = (IUnknown *)CreateEventW(0LL, 1, 0, 0LL);
    v51 = this[30];
    this[30] = 0LL;
    if ( (unsigned __int64)&v51[-1].lpVtbl + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v51);
    this[30] = EventW;
    if ( EventW )
    {
      v2[24] = (__int64)EventW;
      v75 = 0LL;
      if ( SHCreateThread(
             CMultitaskingViewServiceProvider::s_RunMTVThread,
             v2,
             8u,
             CMultitaskingViewServiceProvider::s_InitMTVThread) )
      {
        LastError = 0;
        goto LABEL_105;
      }
      CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(
        (CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)v2,
        v53);
      v52 = 445LL;
    }
    else
    {
      v52 = 436LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v52,
                  (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                  v50);
LABEL_105:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v73);
    goto LABEL_106;
  }
  LastError = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x131,
    (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)0x8007000ELL,
    (int)v55);
LABEL_123:
  CAutoMemPtr<CMultitaskingViewServiceProvider::INIT_THREAD_DATA>::~CAutoMemPtr<CMultitaskingViewServiceProvider::INIT_THREAD_DATA>(&v75);
  return LastError;
}

/*
 * XREFs of ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800D8FCC
 * Callers:
 *     ?PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x18017F580 (-PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800896BC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUn_ea_1800896BC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8480 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180114784 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCI_ea_180114784.c)
 *     ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x180115330 (--_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115AF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115F74 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CMultitaskingViewServiceProvider::_StartMTVThread(IUnknown **this)
{
  __int64 *v2; // r14
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA *v3; // rbx
  int v4; // eax
  unsigned int LastError; // edi
  IUnknown *v6; // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  IUnknown *v13; // rsi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v15; // eax
  IUnknown *v16; // rsi
  ULONG (__stdcall *Release)(IUnknown *); // rdi
  int v18; // eax
  int v19; // eax
  IUnknown *v20; // rsi
  HRESULT (__stdcall *v21)(IUnknown *, const IID *const, void **); // rdi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // rdx
  int v36; // eax
  IUnknown *EventW; // rdi
  const char *v38; // r9
  IUnknown *v39; // rcx
  unsigned int v40; // edx
  unsigned int v41; // edx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  void *v58; // [rsp+20h] [rbp-79h] BYREF
  void *v59; // [rsp+28h] [rbp-71h] BYREF
  void *v60; // [rsp+30h] [rbp-69h] BYREF
  void *v61; // [rsp+38h] [rbp-61h] BYREF
  void *v62; // [rsp+40h] [rbp-59h] BYREF
  void *v63; // [rsp+48h] [rbp-51h] BYREF
  void *v64; // [rsp+50h] [rbp-49h] BYREF
  void *v65; // [rsp+58h] [rbp-41h] BYREF
  void *v66; // [rsp+60h] [rbp-39h] BYREF
  void *v67; // [rsp+68h] [rbp-31h] BYREF
  void *v68; // [rsp+70h] [rbp-29h] BYREF
  void *v69; // [rsp+78h] [rbp-21h] BYREF
  void *v70; // [rsp+80h] [rbp-19h] BYREF
  void *v71; // [rsp+88h] [rbp-11h] BYREF
  void *v72; // [rsp+90h] [rbp-9h] BYREF
  void *ppvOut; // [rsp+98h] [rbp-1h] BYREF
  void *v74; // [rsp+A0h] [rbp+7h] BYREF
  _QWORD v75[9]; // [rsp+A8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  unsigned int v77; // [rsp+108h] [rbp+6Fh] BYREF
  void *v78; // [rsp+110h] [rbp+77h] BYREF
  void *v79; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = (__int64 *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v2[25] = 0LL;
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
    v2[24] = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  v3 = (CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)v2;
  v75[1] = v2;
  if ( v2 )
  {
    v74 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v74);
    Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>>(
      this,
      &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
      &v74);
    v77 = 2;
    v78 = v74;
    v4 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
           v2,
           (__int64)&GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
           &v78,
           &v77);
    LastError = v4;
    if ( v4 < 0 )
    {
      v43 = 303LL;
    }
    else
    {
      v6 = this[28];
      v77 = 2;
      v78 = v6;
      v4 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
             v2 + 1,
             (__int64)&GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &v78,
             &v77);
      LastError = v4;
      if ( v4 >= 0 )
      {
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
          v44 = 308LL;
        }
        else
        {
          v77 = 2;
          v78 = ppvOut;
          v7 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                 v2 + 3,
                 (__int64)&GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
                 &v78,
                 &v77);
          LastError = v7;
          if ( v7 >= 0 )
          {
            v72 = 0LL;
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v72);
            v8 = IUnknown_QueryService(
                   this[2],
                   &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                   &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                   &v72);
            LastError = v8;
            if ( v8 < 0 )
            {
              v45 = 312LL;
            }
            else
            {
              v77 = 2;
              v78 = v72;
              v8 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                     v2 + 2,
                     (__int64)&GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                     &v78,
                     &v77);
              LastError = v8;
              if ( v8 >= 0 )
              {
                v71 = 0LL;
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v71);
                if ( IUnknown_QueryService(
                       this[2],
                       (const GUID *const)&SID_VirtualDesktopManager,
                       &GUID_b2f925b9_5a0f_4d2e_9f4d_2b1507593c10,
                       &v71) >= 0 )
                {
                  v77 = 2;
                  v78 = v71;
                  Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                    v2 + 4,
                    (__int64)&GUID_b2f925b9_5a0f_4d2e_9f4d_2b1507593c10,
                    &v78,
                    &v77);
                }
                v70 = 0LL;
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v70);
                if ( IUnknown_QueryService(
                       this[2],
                       (const GUID *const)&SID_VirtualDesktopPinnedApps,
                       &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
                       &v70) >= 0 )
                {
                  v77 = 2;
                  v78 = v70;
                  v9 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                         v2 + 5,
                         (__int64)&GUID_4ce81583_1e4c_4632_a621_07a53543148f,
                         &v78,
                         &v77);
                  LastError = v9;
                  if ( v9 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x144,
                      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                      (const char *)(unsigned int)v9);
                    goto LABEL_63;
                  }
                }
                v69 = 0LL;
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v69);
                v10 = IUnknown_QueryService(
                        this[2],
                        &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                        &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                        &v69);
                LastError = v10;
                if ( v10 < 0 )
                {
                  v46 = 328LL;
                }
                else
                {
                  v77 = 2;
                  v78 = v69;
                  v10 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                          v2 + 6,
                          (__int64)&GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                          &v78,
                          &v77);
                  LastError = v10;
                  if ( v10 >= 0 )
                  {
                    v68 = 0LL;
                    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v68);
                    if ( IUnknown_QueryService(
                           this[2],
                           (const GUID *const)&SID_VirtualDesktopNotificationService,
                           &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
                           &v68) >= 0 )
                    {
                      v77 = 2;
                      v78 = v68;
                      v11 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                              v2 + 7,
                              (__int64)&GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
                              &v78,
                              &v77);
                      LastError = v11;
                      if ( v11 < 0 )
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x14E,
                          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                          (const char *)(unsigned int)v11);
                        goto LABEL_61;
                      }
                    }
                    v67 = 0LL;
                    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v67);
                    v12 = IUnknown_QueryService(
                            this[2],
                            &stru_180684650,
                            &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
                            &v67);
                    LastError = v12;
                    if ( v12 < 0 )
                    {
                      v47 = 338LL;
                    }
                    else
                    {
                      v77 = 2;
                      v78 = v67;
                      v12 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                              v2 + 8,
                              (__int64)&GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
                              &v78,
                              &v77);
                      LastError = v12;
                      if ( v12 >= 0 )
                      {
                        v66 = 0LL;
                        v13 = this[25];
                        QueryInterface = v13->lpVtbl->QueryInterface;
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v66);
                        ((void (__fastcall *)(IUnknown *, GUID *, void **))QueryInterface)(
                          v13,
                          &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
                          &v66);
                        v77 = 2;
                        v78 = v66;
                        v15 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                v2 + 9,
                                (__int64)&GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
                                &v78,
                                &v77);
                        LastError = v15;
                        if ( v15 < 0 )
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x157,
                            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                            (const char *)(unsigned int)v15);
                          goto LABEL_59;
                        }
                        v65 = 0LL;
                        v16 = this[22];
                        Release = v16->lpVtbl[2].Release;
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v65);
                        v18 = ((__int64 (__fastcall *)(IUnknown *, void **))Release)(v16, &v65);
                        LastError = v18;
                        if ( v18 < 0 )
                        {
                          v48 = 346LL;
                        }
                        else
                        {
                          v77 = 2;
                          v78 = v65;
                          v18 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                  v2 + 10,
                                  (__int64)&GUID_4639c886_cffe_492c_915a_1e3f02d22434,
                                  &v78,
                                  &v77);
                          LastError = v18;
                          if ( v18 >= 0 )
                          {
                            v64 = 0LL;
                            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v64);
                            v19 = IUnknown_QueryService(
                                    this[2],
                                    &stru_180684610,
                                    &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
                                    &v64);
                            LastError = v19;
                            if ( v19 < 0 )
                            {
                              v49 = 350LL;
                            }
                            else
                            {
                              v77 = 2;
                              v78 = v64;
                              v19 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                      v2 + 11,
                                      (__int64)&GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
                                      &v78,
                                      &v77);
                              LastError = v19;
                              if ( v19 >= 0 )
                              {
                                v63 = 0LL;
                                v20 = this[26];
                                v21 = v20->lpVtbl->QueryInterface;
                                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v63);
                                v22 = ((__int64 (__fastcall *)(IUnknown *, GUID *, void **))v21)(
                                        v20,
                                        &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
                                        &v63);
                                LastError = v22;
                                if ( v22 < 0 )
                                {
                                  v50 = 354LL;
                                }
                                else
                                {
                                  v77 = 2;
                                  v78 = v63;
                                  v22 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                          v2 + 12,
                                          (__int64)&GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
                                          &v78,
                                          &v77);
                                  LastError = v22;
                                  if ( v22 >= 0 )
                                  {
                                    v62 = 0LL;
                                    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v62);
                                    v23 = IUnknown_QueryService(
                                            this[2],
                                            (const GUID *const)&SID_ShellTargetingTracker,
                                            &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
                                            &v62);
                                    LastError = v23;
                                    if ( v23 < 0 )
                                    {
                                      v51 = 358LL;
                                    }
                                    else
                                    {
                                      v77 = 2;
                                      v78 = v62;
                                      v23 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                              v2 + 13,
                                              (__int64)&GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
                                              &v78,
                                              &v77);
                                      LastError = v23;
                                      if ( v23 >= 0 )
                                      {
                                        v61 = 0LL;
                                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v61);
                                        v24 = IUnknown_QueryService(
                                                this[2],
                                                &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                                                &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                                                &v61);
                                        LastError = v24;
                                        if ( v24 < 0 )
                                        {
                                          v52 = 362LL;
                                        }
                                        else
                                        {
                                          v77 = 2;
                                          v78 = v61;
                                          v24 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                                  v2 + 14,
                                                  (__int64)&GUID_fff59320_db70_4865_8fed_8b502d692f12,
                                                  &v78,
                                                  &v77);
                                          LastError = v24;
                                          if ( v24 >= 0 )
                                          {
                                            v60 = 0LL;
                                            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v60);
                                            v25 = IUnknown_QueryService(
                                                    this[2],
                                                    (const GUID *const)&SID_ApplicationViewIconLoaderService,
                                                    &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
                                                    &v60);
                                            LastError = v25;
                                            if ( v25 < 0 )
                                            {
                                              v53 = 366LL;
                                            }
                                            else
                                            {
                                              v77 = 2;
                                              v78 = v60;
                                              v25 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                                      v2 + 15,
                                                      (__int64)&GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
                                                      &v78,
                                                      &v77);
                                              LastError = v25;
                                              if ( v25 >= 0 )
                                              {
                                                v59 = 0LL;
                                                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v59);
                                                v26 = IUnknown_QueryService(
                                                        this[2],
                                                        (const GUID *const)&SID_IImmersiveMonitorService,
                                                        &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                                                        &v59);
                                                LastError = v26;
                                                if ( v26 < 0 )
                                                {
                                                  v54 = 370LL;
                                                }
                                                else
                                                {
                                                  v77 = 2;
                                                  v78 = v59;
                                                  v26 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                                          v2 + 18,
                                                          (__int64)&GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                                                          &v78,
                                                          &v77);
                                                  LastError = v26;
                                                  if ( v26 >= 0 )
                                                  {
                                                    LOBYTE(v28) = 3;
                                                    LOBYTE(v27) = 1;
                                                    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsage(
                                                      &`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetImpl'::`2'::impl,
                                                      v27,
                                                      v28);
                                                    v78 = 0LL;
                                                    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v78);
                                                    v29 = IUnknown_QueryService(
                                                            this[2],
                                                            &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
                                                            &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
                                                            &v78);
                                                    LastError = v29;
                                                    if ( v29 < 0 )
                                                    {
                                                      v55 = 376LL;
                                                    }
                                                    else
                                                    {
                                                      v77 = 2;
                                                      v79 = v78;
                                                      v29 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                                              v2 + 19,
                                                              (__int64)&GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
                                                              &v79,
                                                              &v77);
                                                      LastError = v29;
                                                      if ( v29 < 0 )
                                                      {
                                                        v55 = 377LL;
                                                      }
                                                      else
                                                      {
                                                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v78);
                                                        LOBYTE(v30) = 3;
                                                        LOBYTE(v31) = 1;
                                                        wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
                                                          &`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
                                                          v31,
                                                          v30);
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
                                                          v75[0] = v79;
                                                          Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                                            v2 + 16,
                                                            (__int64)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                                                            v75,
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
                                                          v75[0] = v78;
                                                          v32 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                                                  v2 + 17,
                                                                  (__int64)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                                                                  v75,
                                                                  &v77);
                                                          LastError = v32;
                                                          if ( v32 < 0 )
                                                          {
                                                            wil::details::in1diag3::Return_Hr(
                                                              retaddr,
                                                              (void *)0x18A,
                                                              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitask"
                                                                       "ingviewserviceprovider.cpp",
                                                              (const char *)(unsigned int)v32);
                                                            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v78);
                                                            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v79);
                                                            goto LABEL_52;
                                                          }
                                                        }
                                                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v78);
                                                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v79);
                                                        wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
                                                          `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
                                                          0,
                                                          3u,
                                                          v33);
                                                        LOBYTE(v34) = 3;
                                                        LOBYTE(v35) = 1;
                                                        wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
                                                          &`wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
                                                          v35,
                                                          v34);
                                                        v78 = 0LL;
                                                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v78);
                                                        v29 = IUnknown_QueryService(
                                                                this[2],
                                                                &stru_1806846D0,
                                                                &GUID_8bc0416b_e6fa_4b43_9553_9386b4584de0,
                                                                &v78);
                                                        LastError = v29;
                                                        if ( v29 == -2147467263 )
                                                        {
LABEL_44:
                                                          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v78);
                                                          v58 = 0LL;
                                                          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v58);
                                                          v36 = IUnknown_QueryService(
                                                                  this[2],
                                                                  (const GUID *const)&SID_ImmersiveShellHookService,
                                                                  &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                                                                  &v58);
                                                          LastError = v36;
                                                          if ( v36 < 0 )
                                                          {
                                                            v56 = 425LL;
                                                          }
                                                          else
                                                          {
                                                            v77 = 2;
                                                            v78 = v58;
                                                            v36 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                                                    v2 + 24,
                                                                    (__int64)&GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                                                                    &v78,
                                                                    &v77);
                                                            LastError = v36;
                                                            if ( v36 >= 0 )
                                                            {
                                                              EventW = (IUnknown *)CreateEventW(0LL, 1, 0, 0LL);
                                                              v39 = this[30];
                                                              this[30] = 0LL;
                                                              if ( (unsigned __int64)&v39[-1].lpVtbl + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
                                                                CloseHandle(v39);
                                                              this[30] = EventW;
                                                              if ( EventW )
                                                              {
                                                                v2[25] = (__int64)EventW;
                                                                v3 = 0LL;
                                                                if ( SHCreateThread(
                                                                       CMultitaskingViewServiceProvider::s_RunMTVThread,
                                                                       v2,
                                                                       8u,
                                                                       CMultitaskingViewServiceProvider::s_InitMTVThread) )
                                                                {
                                                                  LastError = 0;
LABEL_51:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v58);
LABEL_52:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v59);
LABEL_53:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v60);
LABEL_54:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v61);
LABEL_55:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v62);
LABEL_56:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v63);
LABEL_57:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v64);
LABEL_58:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v65);
LABEL_59:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v66);
LABEL_60:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v67);
LABEL_61:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v68);
LABEL_62:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v69);
LABEL_63:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v70);
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v71);
LABEL_64:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v72);
LABEL_65:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
LABEL_66:
                                                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v74);
                                                                  goto LABEL_67;
                                                                }
                                                                CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(
                                                                  (CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)v2,
                                                                  v40);
                                                                v57 = 440LL;
                                                              }
                                                              else
                                                              {
                                                                v57 = 431LL;
                                                              }
                                                              LastError = wil::details::in1diag3::Return_GetLastError(
                                                                            retaddr,
                                                                            (void *)v57,
                                                                            (unsigned int)"pcshell\\twinui\\multitaskingv"
                                                                                          "iew\\lib\\multitaskingviewserviceprovider.cpp",
                                                                            v38);
                                                              goto LABEL_51;
                                                            }
                                                            v56 = 426LL;
                                                          }
                                                          wil::details::in1diag3::Return_Hr(
                                                            retaddr,
                                                            (void *)v56,
                                                            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskin"
                                                                     "gviewserviceprovider.cpp",
                                                            (const char *)(unsigned int)v36);
                                                          goto LABEL_51;
                                                        }
                                                        if ( v29 < 0 )
                                                        {
                                                          v55 = 419LL;
                                                        }
                                                        else
                                                        {
                                                          v77 = 2;
                                                          v79 = v78;
                                                          v29 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                                                                  v2 + 23,
                                                                  (__int64)&GUID_8bc0416b_e6fa_4b43_9553_9386b4584de0,
                                                                  &v79,
                                                                  &v77);
                                                          LastError = v29;
                                                          if ( v29 >= 0 )
                                                            goto LABEL_44;
                                                          v55 = 420LL;
                                                        }
                                                      }
                                                    }
                                                    wil::details::in1diag3::Return_Hr(
                                                      retaddr,
                                                      (void *)v55,
                                                      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviews"
                                                               "erviceprovider.cpp",
                                                      (const char *)(unsigned int)v29);
                                                    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v78);
                                                    goto LABEL_52;
                                                  }
                                                  v54 = 371LL;
                                                }
                                                wil::details::in1diag3::Return_Hr(
                                                  retaddr,
                                                  (void *)v54,
                                                  (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                                                  (const char *)(unsigned int)v26);
                                                goto LABEL_52;
                                              }
                                              v53 = 367LL;
                                            }
                                            wil::details::in1diag3::Return_Hr(
                                              retaddr,
                                              (void *)v53,
                                              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                                              (const char *)(unsigned int)v25);
                                            goto LABEL_53;
                                          }
                                          v52 = 363LL;
                                        }
                                        wil::details::in1diag3::Return_Hr(
                                          retaddr,
                                          (void *)v52,
                                          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                                          (const char *)(unsigned int)v24);
                                        goto LABEL_54;
                                      }
                                      v51 = 359LL;
                                    }
                                    wil::details::in1diag3::Return_Hr(
                                      retaddr,
                                      (void *)v51,
                                      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                                      (const char *)(unsigned int)v23);
                                    goto LABEL_55;
                                  }
                                  v50 = 355LL;
                                }
                                wil::details::in1diag3::Return_Hr(
                                  retaddr,
                                  (void *)v50,
                                  (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                                  (const char *)(unsigned int)v22);
                                goto LABEL_56;
                              }
                              v49 = 351LL;
                            }
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)v49,
                              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                              (const char *)(unsigned int)v19);
                            goto LABEL_57;
                          }
                          v48 = 347LL;
                        }
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)v48,
                          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                          (const char *)(unsigned int)v18);
                        goto LABEL_58;
                      }
                      v47 = 339LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v47,
                      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                      (const char *)(unsigned int)v12);
                    goto LABEL_60;
                  }
                  v46 = 329LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v46,
                  (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                  (const char *)(unsigned int)v10);
                goto LABEL_62;
              }
              v45 = 313LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v45,
              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
              (const char *)(unsigned int)v8);
            goto LABEL_64;
          }
          v44 = 309LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v44,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_65;
      }
      v43 = 305LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v43,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_66;
  }
  LastError = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12A,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)0x8007000ELL);
LABEL_67:
  if ( v3 )
    CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(v3, v41);
  return LastError;
}

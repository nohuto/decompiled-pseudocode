/*
 * XREFs of ?SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DBFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061058 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061644 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@@winrt@@YA?AUIInspectable@Foundation@Windows@0@$$QEAPEAUIWindowManagementEvents@@@Z @ 0x1800A9E78 (--$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@@winrt@@YA-AUIInspectable@Foundation.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@Z @ 0x18010D150 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_18010D150.c)
 *     ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@Z @ 0x18010D204 (--$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNot_ea_18010D204.c)
 *     ?SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicationViewCollection@@@Z @ 0x18017877C (-SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicati.c)
 *     ?IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x18017C4C0 (-IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CShellSnapComponent::SubscribeToServices(CShellSnapComponent *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  struct IApplicationViewCollection **v5; // r13
  int v6; // eax
  unsigned int v7; // ebx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v9; // eax
  unsigned int v10; // ebx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v15; // eax
  unsigned int v16; // ebx
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v18; // eax
  unsigned int v19; // ebx
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v21; // eax
  unsigned int v22; // ebx
  HRESULT (__stdcall *v23)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v24; // r12
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v27; // ebx
  HRESULT (__stdcall *v28)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // ebx
  HRESULT (__stdcall *v32)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v33; // rcx
  int v34; // eax
  unsigned int v35; // ebx
  HRESULT (__stdcall *v36)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v37; // rcx
  int v38; // eax
  unsigned int v39; // ebx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // ebx
  HRESULT (__stdcall *v45)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // r9
  unsigned int v49; // ebx
  int v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // ebx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v55; // eax
  int v56; // r8d
  int v57; // r9d
  unsigned int v58; // ebx
  int v59; // eax
  unsigned int v60; // ebx
  struct IServiceProviderVtbl *v61; // rax
  int v62; // eax
  int v63; // r8d
  int v64; // r9d
  unsigned int v65; // ebx
  int v66; // eax
  unsigned int v67; // ebx
  __int64 v68; // rcx
  int v69; // eax
  unsigned int v70; // ebx
  HRESULT (__stdcall *v71)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v72; // rcx
  int v73; // eax
  unsigned int v74; // ebx
  int v75; // eax
  struct IImmersiveSettingsCache *v76; // rdx
  unsigned int v77; // ebx
  __int64 v78; // r9
  int v79; // eax
  __int64 v80; // r8
  __int64 v81; // r9
  unsigned int v82; // ebx
  HRESULT (__stdcall *v83)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v84; // rcx
  int v85; // eax
  unsigned int v86; // ebx
  _QWORD *v87; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v90; // [rsp+60h] [rbp+8h] BYREF
  struct IWindowManagementEvents *v91; // [rsp+68h] [rbp+10h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (struct IApplicationViewCollection **)((char *)this + 184);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 23);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, struct IApplicationViewCollection **))QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11C,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else
  {
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v8)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           (char *)this + 176);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    else
    {
      v11 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
      v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))v11)(
              a2,
              &unk_180684600,
              &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
              (char *)this + 224);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11E,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)(unsigned int)v12);
        return v13;
      }
      else
      {
        v14 = a2->lpVtbl->QueryService;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
        v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
                a2,
                &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                (char *)this + 232);
        v16 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x11F,
            (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            (const char *)(unsigned int)v15);
          return v16;
        }
        else
        {
          v17 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
          v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v17)(
                  a2,
                  &SID_MultitaskingViewServiceProvider,
                  &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
                  (char *)this + 216);
          v19 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x120,
              (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              (const char *)(unsigned int)v18);
            return v19;
          }
          else
          {
            v20 = a2->lpVtbl->QueryService;
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 30);
            v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v20)(
                    a2,
                    &GUID_05ac56a6_baf7_414f_b92c_7156052701de,
                    &GUID_05ac56a6_baf7_414f_b92c_7156052701de,
                    (char *)this + 240);
            v22 = v21;
            if ( v21 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x121,
                (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                (const char *)(unsigned int)v21);
              return v22;
            }
            else
            {
              v23 = a2->lpVtbl->QueryService;
              v24 = (_QWORD *)((char *)this + 248);
              v25 = *((_QWORD *)this + 31);
              *((_QWORD *)this + 31) = 0LL;
              if ( v25 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
              v26 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v23)(
                      a2,
                      &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
                      &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
                      (char *)this + 248);
              v27 = v26;
              if ( v26 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x122,
                  (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                  (const char *)(unsigned int)v26);
                return v27;
              }
              else
              {
                v28 = a2->lpVtbl->QueryService;
                v29 = *((_QWORD *)this + 45);
                *((_QWORD *)this + 45) = 0LL;
                if ( v29 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                v30 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v28)(
                        a2,
                        &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9,
                        &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9,
                        (char *)this + 360);
                v31 = v30;
                if ( v30 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x123,
                    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                    (const char *)(unsigned int)v30);
                  return v31;
                }
                else
                {
                  v32 = a2->lpVtbl->QueryService;
                  v33 = *((_QWORD *)this + 44);
                  *((_QWORD *)this + 44) = 0LL;
                  if ( v33 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                  v34 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v32)(
                          a2,
                          &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
                          &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
                          (char *)this + 352);
                  v35 = v34;
                  if ( v34 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x124,
                      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                      (const char *)(unsigned int)v34);
                    return v35;
                  }
                  else
                  {
                    v36 = a2->lpVtbl->QueryService;
                    v37 = *((_QWORD *)this + 46);
                    *((_QWORD *)this + 46) = 0LL;
                    if ( v37 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
                    v38 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v36)(
                            a2,
                            &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
                            &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
                            (char *)this + 368);
                    v39 = v38;
                    if ( v38 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x125,
                        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                        (const char *)(unsigned int)v38);
                      return v39;
                    }
                    else
                    {
                      v40 = *((_QWORD *)this + 32);
                      *((_QWORD *)this + 32) = 0LL;
                      if ( v40 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
                      v41 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v24)(
                              *v24,
                              &GUID_b698f992_5c6f_5846_b005_d0c033376391,
                              (char *)this + 256);
                      v44 = v41;
                      if ( v41 < 0 )
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x126,
                          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                          (const char *)(unsigned int)v41);
                        return v44;
                      }
                      else
                      {
                        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
                          `wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
                          1u,
                          v42,
                          v43);
                        v45 = a2->lpVtbl->QueryService;
                        v46 = *((_QWORD *)this + 68);
                        *((_QWORD *)this + 68) = 0LL;
                        if ( v46 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
                        v47 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v45)(
                                a2,
                                &IID_IImmersiveWindowMessageService,
                                &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                                (char *)this + 544);
                        v49 = v47;
                        if ( v47 < 0 )
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x12A,
                            (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                            (const char *)(unsigned int)v47);
                          return v49;
                        }
                        else
                        {
                          wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::ReportUsage(
                            `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
                            1u,
                            3u,
                            v48);
                          v50 = SnapInteraction::InteractionTracker::SubscribeToServices(
                                  (CShellSnapComponent *)((char *)this + 560),
                                  (struct ISnapComponent *)(((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 48) >> 64)),
                                  *v5);
                          v53 = v50;
                          if ( v50 < 0 )
                          {
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x12F,
                              (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                              (const char *)(unsigned int)v50);
                            return v53;
                          }
                          else
                          {
                            wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
                              `wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
                              1u,
                              v51,
                              v52);
                            lpVtbl = a2->lpVtbl;
                            v90 = 0LL;
                            v55 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
                                    a2,
                                    &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                                    &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                                    &v90);
                            v58 = v55;
                            if ( v55 < 0 )
                            {
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)0x135,
                                (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                (const char *)(unsigned int)v55);
                              wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v90);
                              return v58;
                            }
                            else
                            {
                              v59 = SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),CShellSnapComponent *>(
                                      (int)this + 680,
                                      v90,
                                      v56,
                                      v57,
                                      (__int64)this - 48);
                              v60 = v59;
                              if ( v59 < 0 )
                              {
                                wil::details::in1diag3::Return_Hr(
                                  retaddr,
                                  (void *)0x13A,
                                  (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                  (const char *)(unsigned int)v59);
                                wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v90);
                                return v60;
                              }
                              else
                              {
                                v61 = a2->lpVtbl;
                                v91 = 0LL;
                                v62 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, struct IWindowManagementEvents **))v61->QueryService)(
                                        a2,
                                        &SID_IImmersiveMonitorService,
                                        &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                                        &v91);
                                v65 = v62;
                                if ( v62 < 0 )
                                {
                                  wil::details::in1diag3::Return_Hr(
                                    retaddr,
                                    (void *)0x13D,
                                    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                    (const char *)(unsigned int)v62);
                                  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v91);
                                  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v90);
                                  return v65;
                                }
                                else
                                {
                                  v66 = SmartCookie::Register<IImmersiveMonitorNotificationService,long (IImmersiveMonitorNotificationService::*)(IImmersiveMonitorNotification *,unsigned long *),long (IImmersiveMonitorNotificationService::*)(unsigned long),CShellSnapComponent *>(
                                          (int)this + 808,
                                          (_DWORD)v91,
                                          v63,
                                          v64,
                                          (__int64)this - 48);
                                  v67 = v66;
                                  if ( v66 < 0 )
                                  {
                                    wil::details::in1diag3::Return_Hr(
                                      retaddr,
                                      (void *)0x142,
                                      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                      (const char *)(unsigned int)v66);
                                    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v91);
                                    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v90);
                                    return v67;
                                  }
                                  else
                                  {
                                    v68 = *((_QWORD *)this + 67);
                                    *((_QWORD *)this + 67) = 0LL;
                                    if ( v68 )
                                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
                                    v69 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 26))(
                                            *((_QWORD *)this + 26),
                                            &GUID_1272c5ac_d7c9_5a11_88e3_f6ffaf79e9b1,
                                            (char *)this + 536);
                                    v70 = v69;
                                    if ( v69 < 0 )
                                    {
                                      wil::details::in1diag3::Return_Hr(
                                        retaddr,
                                        (void *)0x144,
                                        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                        (const char *)(unsigned int)v69);
                                      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v91);
                                      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v90);
                                      return v70;
                                    }
                                    else
                                    {
                                      v71 = a2->lpVtbl->QueryService;
                                      v72 = *((_QWORD *)this + 47);
                                      *((_QWORD *)this + 47) = 0LL;
                                      if ( v72 )
                                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
                                      v73 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v71)(
                                              a2,
                                              &SID_ImmersiveShellHookService,
                                              &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                                              (char *)this + 376);
                                      v74 = v73;
                                      if ( v73 < 0 )
                                      {
                                        wil::details::in1diag3::Return_Hr(
                                          retaddr,
                                          (void *)0x145,
                                          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                          (const char *)(unsigned int)v73);
                                        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v91);
                                        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v90);
                                        return v74;
                                      }
                                      else
                                      {
                                        v75 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned __int64, char *))(**((_QWORD **)this + 47) + 24LL))(
                                                *((_QWORD *)this + 47),
                                                &unk_180684390,
                                                3LL,
                                                ((unsigned __int64)this + 120) & -(__int64)(this != (CShellSnapComponent *)48),
                                                (char *)this + 384);
                                        v77 = v75;
                                        if ( v75 < 0 )
                                        {
                                          wil::details::in1diag3::Return_Hr(
                                            retaddr,
                                            (void *)0x14E,
                                            (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                            (const char *)(unsigned int)v75);
                                          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v91);
                                          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v90);
                                          return v77;
                                        }
                                        else
                                        {
                                          *((_BYTE *)this + 944) = SnapLayoutHelpers::IsSnapFlyoutSettingEnabled(
                                                                     *((SnapLayoutHelpers **)this + 28),
                                                                     v76);
                                          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v91);
                                          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v90);
                                          wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::ReportUsage(
                                            `wil::Feature<__WilFeatureTraits_Feature_SETest>::GetImpl'::`2'::impl,
                                            1u,
                                            0,
                                            v78);
                                          v79 = (*(__int64 (__fastcall **)(struct IApplicationViewCollection *, char *, char *))(*(_QWORD *)*v5 + 96LL))(
                                                  *v5,
                                                  (char *)this + 1104,
                                                  (char *)this + 1176);
                                          v82 = v79;
                                          if ( v79 < 0 )
                                          {
                                            wil::details::in1diag3::Return_Hr(
                                              retaddr,
                                              (void *)0x155,
                                              (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                              (const char *)(unsigned int)v79);
                                            return v82;
                                          }
                                          else
                                          {
                                            wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
                                              `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
                                              1u,
                                              v80,
                                              v81);
                                            v83 = a2->lpVtbl->QueryService;
                                            v84 = *((_QWORD *)this + 136);
                                            *((_QWORD *)this + 136) = 0LL;
                                            if ( v84 )
                                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
                                            v85 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v83)(
                                                    a2,
                                                    &SID_ImmersiveRawInputProvider,
                                                    &GUID_c1235996_b084_4af2_8663_28f19352097e,
                                                    (char *)this + 1088);
                                            v86 = v85;
                                            if ( v85 < 0 )
                                            {
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)0x15A,
                                                (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                                (const char *)(unsigned int)v85);
                                              return v86;
                                            }
                                            else
                                            {
                                              v91 = (struct IWindowManagementEvents *)*v24;
                                              v87 = winrt::make<SnapMigrationHandler,IWindowManagementEvents *>(
                                                      &v90,
                                                      &v91);
                                              winrt::Windows::Foundation::IUnknown::operator=((char *)this + 952, v87);
                                              if ( v90 )
                                                winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v90);
                                              return 0LL;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

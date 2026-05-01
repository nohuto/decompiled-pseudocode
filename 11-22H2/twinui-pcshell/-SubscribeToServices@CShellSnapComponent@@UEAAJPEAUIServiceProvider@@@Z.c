/*
 * XREFs of ?SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F7E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180111E40 (-IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?IsSnapBarSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180111E88 (-IsSnapBarSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ??$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@@winrt@@YA?A_P$$QEAPEAUIWindowManagementEvents@@@Z @ 0x18012AE4C (--$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@@winrt@@YA-A_P$$QEAPEAUIWindowManage.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@Z @ 0x1801B4DD4 (--$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNot_ea_1801B4DD4.c)
 *     ?SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicationViewCollection@@@Z @ 0x1801B5CDC (-SubscribeToServices@InteractionTracker@SnapInteraction@@QEAAJPEAUISnapComponent@@PEAUIApplicati.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
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
  SnapLayoutHelpers **v12; // r12
  int v13; // eax
  unsigned int v14; // ebx
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v16; // eax
  unsigned int v17; // ebx
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v19; // eax
  unsigned int v20; // ebx
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v22; // eax
  unsigned int v23; // ebx
  HRESULT (__stdcall *v24)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v25; // r15
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // ebx
  HRESULT (__stdcall *v29)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // ebx
  HRESULT (__stdcall *v33)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // ebx
  HRESULT (__stdcall *v37)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // ebx
  HRESULT (__stdcall *v41)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v42; // rcx
  int v43; // eax
  unsigned int v44; // ebx
  __int64 v45; // rcx
  int v46; // eax
  unsigned int v47; // ebx
  HRESULT (__stdcall *v48)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v49; // rcx
  int v50; // eax
  unsigned int v51; // ebx
  HRESULT (__stdcall *v52)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v53; // rcx
  int v54; // eax
  unsigned int v55; // ebx
  __int64 v56; // rax
  int v57; // eax
  unsigned int v58; // ebx
  HRESULT (__stdcall *v59)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v60; // rcx
  int v61; // eax
  unsigned int v62; // ebx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v64; // eax
  int v65; // r8d
  int v66; // r9d
  unsigned int v67; // ebx
  int v68; // eax
  unsigned int v69; // ebx
  __int64 v70; // rcx
  int v71; // eax
  unsigned int v72; // ebx
  HRESULT (__stdcall *v73)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v74; // rcx
  int v75; // eax
  unsigned int v76; // ebx
  int v77; // eax
  struct IImmersiveSettingsCache *v78; // rdx
  unsigned int v79; // ebx
  struct IImmersiveSettingsCache *v80; // rdx
  int v81; // eax
  unsigned int v82; // ebx
  int v84; // [rsp+20h] [rbp-48h]
  int v85; // [rsp+20h] [rbp-48h]
  int v86; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v88; // [rsp+70h] [rbp+8h] BYREF
  __int64 v89; // [rsp+78h] [rbp+10h] BYREF
  __int64 v90; // [rsp+80h] [rbp+18h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (struct IApplicationViewCollection **)((char *)this + 176);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
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
      (void *)0x141,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v6,
      v84);
    return v7;
  }
  else
  {
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 21);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v8)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           (char *)this + 168);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x142,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v9,
        v84);
      return v10;
    }
    else
    {
      v11 = a2->lpVtbl->QueryService;
      v12 = (SnapLayoutHelpers **)((char *)this + 216);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
      v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))v11)(
              a2,
              &unk_180818AC8,
              &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
              (char *)this + 216);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x143,
          (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)(unsigned int)v13,
          v84);
        return v14;
      }
      else
      {
        v15 = a2->lpVtbl->QueryService;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
        v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
                a2,
                &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                (char *)this + 224);
        v17 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x144,
            (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            (const char *)(unsigned int)v16,
            v84);
          return v17;
        }
        else
        {
          v18 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
          v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v18)(
                  a2,
                  &SID_MultitaskingViewServiceProvider,
                  &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
                  (char *)this + 208);
          v20 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x145,
              (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              (const char *)(unsigned int)v19,
              v84);
            return v20;
          }
          else
          {
            v21 = a2->lpVtbl->QueryService;
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
            v22 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v21)(
                    a2,
                    &GUID_05ac56a6_baf7_414f_b92c_7156052701de,
                    &GUID_05ac56a6_baf7_414f_b92c_7156052701de,
                    (char *)this + 232);
            v23 = v22;
            if ( v22 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x146,
                (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                (const char *)(unsigned int)v22,
                v84);
              return v23;
            }
            else
            {
              v24 = a2->lpVtbl->QueryService;
              v25 = (_QWORD *)((char *)this + 240);
              v26 = *((_QWORD *)this + 30);
              *((_QWORD *)this + 30) = 0LL;
              if ( v26 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
              v27 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v24)(
                      a2,
                      &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
                      &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
                      (char *)this + 240);
              v28 = v27;
              if ( v27 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x147,
                  (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                  (const char *)(unsigned int)v27,
                  v84);
                return v28;
              }
              else
              {
                v29 = a2->lpVtbl->QueryService;
                v30 = *((_QWORD *)this + 44);
                *((_QWORD *)this + 44) = 0LL;
                if ( v30 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
                v31 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v29)(
                        a2,
                        &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9,
                        &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9,
                        (char *)this + 352);
                v32 = v31;
                if ( v31 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x148,
                    (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                    (const char *)(unsigned int)v31,
                    v84);
                  return v32;
                }
                else
                {
                  v33 = a2->lpVtbl->QueryService;
                  v34 = *((_QWORD *)this + 43);
                  *((_QWORD *)this + 43) = 0LL;
                  if ( v34 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
                  v35 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v33)(
                          a2,
                          &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
                          &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
                          (char *)this + 344);
                  v36 = v35;
                  if ( v35 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x149,
                      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                      (const char *)(unsigned int)v35,
                      v84);
                    return v36;
                  }
                  else
                  {
                    v37 = a2->lpVtbl->QueryService;
                    v38 = *((_QWORD *)this + 45);
                    *((_QWORD *)this + 45) = 0LL;
                    if ( v38 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
                    v39 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v37)(
                            a2,
                            &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
                            &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
                            (char *)this + 360);
                    v40 = v39;
                    if ( v39 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x14A,
                        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                        (const char *)(unsigned int)v39,
                        v84);
                      return v40;
                    }
                    else
                    {
                      v41 = a2->lpVtbl->QueryService;
                      v42 = *((_QWORD *)this + 46);
                      *((_QWORD *)this + 46) = 0LL;
                      if ( v42 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
                      v43 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v41)(
                              a2,
                              &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
                              &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
                              (char *)this + 368);
                      v44 = v43;
                      if ( v43 < 0 )
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x14B,
                          (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                          (const char *)(unsigned int)v43,
                          v84);
                        return v44;
                      }
                      else
                      {
                        v45 = *((_QWORD *)this + 31);
                        *((_QWORD *)this + 31) = 0LL;
                        if ( v45 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
                        v46 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v25)(
                                *v25,
                                &GUID_dc8a3be5_1955_55a9_b901_9f152fa82752,
                                (char *)this + 248);
                        v47 = v46;
                        if ( v46 < 0 )
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x14C,
                            (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                            (const char *)(unsigned int)v46,
                            v84);
                          return v47;
                        }
                        else
                        {
                          v48 = a2->lpVtbl->QueryService;
                          v49 = *((_QWORD *)this + 69);
                          *((_QWORD *)this + 69) = 0LL;
                          if ( v49 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
                          v50 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v48)(
                                  a2,
                                  &IID_IImmersiveWindowMessageService,
                                  &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
                                  (char *)this + 552);
                          v51 = v50;
                          if ( v50 < 0 )
                          {
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x14D,
                              (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                              (const char *)(unsigned int)v50,
                              v84);
                            return v51;
                          }
                          else
                          {
                            v52 = a2->lpVtbl->QueryService;
                            v53 = *((_QWORD *)this + 127);
                            *((_QWORD *)this + 127) = 0LL;
                            if ( v53 )
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
                            v54 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v52)(
                                    a2,
                                    &SID_ImmersiveRawInputProvider,
                                    &GUID_c1235996_b084_4af2_8663_28f19352097e,
                                    (char *)this + 1016);
                            v55 = v54;
                            if ( v54 < 0 )
                            {
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)0x14E,
                                (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                (const char *)(unsigned int)v54,
                                v84);
                              return v55;
                            }
                            else
                            {
                              v90 = *v25;
                              v56 = winrt::make<SnapMigrationHandler,IWindowManagementEvents *>(&v89, &v90);
                              winrt::Windows::Foundation::IUnknown::operator=((char *)this + 880, v56);
                              if ( v89 )
                                winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v89);
                              v57 = SnapInteraction::InteractionTracker::SubscribeToServices(
                                      (CShellSnapComponent *)((char *)this + 568),
                                      (struct ISnapComponent *)(((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 48) >> 64)),
                                      *v5);
                              v58 = v57;
                              if ( v57 < 0 )
                              {
                                wil::details::in1diag3::Return_Hr(
                                  retaddr,
                                  (void *)0x152,
                                  (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                  (const char *)(unsigned int)v57,
                                  v84);
                                return v58;
                              }
                              else
                              {
                                v59 = a2->lpVtbl->QueryService;
                                v60 = *((_QWORD *)this + 48);
                                *((_QWORD *)this + 48) = 0LL;
                                if ( v60 )
                                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
                                v61 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v59)(
                                        a2,
                                        &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                                        &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                                        (char *)this + 384);
                                v62 = v61;
                                if ( v61 < 0 )
                                {
                                  wil::details::in1diag3::Return_Hr(
                                    retaddr,
                                    (void *)0x154,
                                    (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                    (const char *)(unsigned int)v61,
                                    v84);
                                  return v62;
                                }
                                else
                                {
                                  lpVtbl = a2->lpVtbl;
                                  v88 = 0LL;
                                  v64 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
                                          a2,
                                          &SID_IImmersiveMonitorService,
                                          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                                          &v88);
                                  v67 = v64;
                                  if ( v64 < 0 )
                                  {
                                    wil::details::in1diag3::Return_Hr(
                                      retaddr,
                                      (void *)0x157,
                                      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                      (const char *)(unsigned int)v64,
                                      v84);
                                    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v88);
                                    return v67;
                                  }
                                  else
                                  {
                                    v68 = SmartCookie::Register<IImmersiveMonitorNotificationService,long (IImmersiveMonitorNotificationService::*)(IImmersiveMonitorNotification *,unsigned long *),long (IImmersiveMonitorNotificationService::*)(unsigned long),CShellSnapComponent *>(
                                            (int)this + 736,
                                            v88,
                                            v65,
                                            v66,
                                            (__int64)this - 48);
                                    v69 = v68;
                                    if ( v68 < 0 )
                                    {
                                      wil::details::in1diag3::Return_Hr(
                                        retaddr,
                                        (void *)0x15C,
                                        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                        (const char *)(unsigned int)v68,
                                        v85);
                                      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v88);
                                      return v69;
                                    }
                                    else
                                    {
                                      v70 = *((_QWORD *)this + 68);
                                      *((_QWORD *)this + 68) = 0LL;
                                      if ( v70 )
                                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
                                      v71 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 25))(
                                              *((_QWORD *)this + 25),
                                              &GUID_1272c5ac_d7c9_5a11_88e3_f6ffaf79e9b1,
                                              (char *)this + 544);
                                      v72 = v71;
                                      if ( v71 < 0 )
                                      {
                                        wil::details::in1diag3::Return_Hr(
                                          retaddr,
                                          (void *)0x15E,
                                          (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                          (const char *)(unsigned int)v71,
                                          v85);
                                        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v88);
                                        return v72;
                                      }
                                      else
                                      {
                                        v73 = a2->lpVtbl->QueryService;
                                        v74 = *((_QWORD *)this + 47);
                                        *((_QWORD *)this + 47) = 0LL;
                                        if ( v74 )
                                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
                                        v75 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v73)(
                                                a2,
                                                &SID_ImmersiveShellHookService,
                                                &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                                                (char *)this + 376);
                                        v76 = v75;
                                        if ( v75 < 0 )
                                        {
                                          wil::details::in1diag3::Return_Hr(
                                            retaddr,
                                            (void *)0x15F,
                                            (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                            (const char *)(unsigned int)v75,
                                            v85);
                                          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v88);
                                          return v76;
                                        }
                                        else
                                        {
                                          v86 = (_DWORD)this + 392;
                                          v77 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned __int64))(**((_QWORD **)this + 47) + 24LL))(
                                                  *((_QWORD *)this + 47),
                                                  &unk_1808189E0,
                                                  4LL,
                                                  ((unsigned __int64)this + 120) & -(__int64)(this != (CShellSnapComponent *)48));
                                          v79 = v77;
                                          if ( v77 < 0 )
                                          {
                                            wil::details::in1diag3::Return_Hr(
                                              retaddr,
                                              (void *)0x169,
                                              (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                              (const char *)(unsigned int)v77,
                                              v86);
                                            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v88);
                                            return v79;
                                          }
                                          else
                                          {
                                            *((_BYTE *)this + 872) = SnapLayoutHelpers::IsSnapFlyoutSettingEnabled(
                                                                       *v12,
                                                                       v78);
                                            *((_BYTE *)this + 873) = SnapLayoutHelpers::IsSnapBarSettingEnabled(
                                                                       *v12,
                                                                       v80);
                                            v81 = (*(__int64 (__fastcall **)(struct IApplicationViewCollection *, char *, char *))(*(_QWORD *)*v5 + 96LL))(
                                                    *v5,
                                                    (char *)this + 1032,
                                                    (char *)this + 1104);
                                            v82 = v81;
                                            if ( v81 < 0 )
                                            {
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)0x16E,
                                                (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                                (const char *)(unsigned int)v81,
                                                v86);
                                              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v88);
                                              return v82;
                                            }
                                            else
                                            {
                                              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v88);
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

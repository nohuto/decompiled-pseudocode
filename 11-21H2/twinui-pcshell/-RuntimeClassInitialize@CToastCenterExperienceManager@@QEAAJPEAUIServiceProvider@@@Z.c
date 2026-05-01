/*
 * XREFs of ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800DB1F8
 * Callers:
 *     ??$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180174AF4 (--$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@De.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180096F68 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800A281C (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?TryGetUndockedShellAppId@@YAJPEBGPEAPEAUHSTRING__@@@Z @ 0x1800A60B4 (-TryGetUndockedShellAppId@@YAJPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1800FD8E0 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800FF230 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@Z @ 0x18010BDEC (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastC.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18010F5F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x180118960 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180168660 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x18017E768 (-SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddSideBySideAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1805F1238 (-AddSideBySideAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CToastCenterExperienceManager::RuntimeClassInitialize(
        CToastCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  HSTRING *v4; // r12
  HSTRING v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  char v8; // r13
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v10; // eax
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v12; // r8d
  int v13; // r9d
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64); // rdi
  __int64 AddressOf; // rax
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v21; // rdi
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int ready; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v24; // r8
  const unsigned __int16 *v25; // rcx
  int UndockedShellAppId; // eax
  unsigned int v27; // r8d
  __int64 v28; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // [rsp+30h] [rbp-39h] BYREF
  HSTRING v35; // [rsp+38h] [rbp-31h] BYREF
  __int64 v36; // [rsp+40h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-21h] BYREF
  HSTRING v38; // [rsp+60h] [rbp-9h]
  HSTRING_HEADER v39; // [rsp+68h] [rbp-1h] BYREF
  HSTRING v40; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = (HSTRING *)((char *)this + 104);
  v38 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ToastCenter",
    0x2Du,
    0x2Cu);
  v5 = v38;
  v40 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v39,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v6 = CSingleViewShellExperience::RuntimeClassInitialize(
         v4,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v40,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  hstringHeader.Reserved.Reserved1 = this;
  v8 = 1;
  hstringHeader.Reserved.Reserved2[8] = 1;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 56);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          (char *)this + 448);
  v7 = v10;
  if ( v10 < 0 )
  {
    v30 = 309LL;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 56) + 32LL))(
            *((_QWORD *)this + 56),
            ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
            (char *)this + 456);
    v7 = v10;
    if ( v10 < 0 )
    {
      v30 = 310LL;
    }
    else
    {
      v11 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 58);
      v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v11)(
              a2,
              &SID_InputHostLayout,
              &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
              (char *)this + 464);
      v7 = v10;
      if ( v10 < 0 )
      {
        v30 = 312LL;
      }
      else
      {
        v10 = SmartCookie::Register<IInputHostLayout,long (IInputHostLayout::*)(IInputHostLayoutChanges *,unsigned long *),long (IInputHostLayout::*)(unsigned long),CToastCenterExperienceManager *>(
                (int)this + 480,
                *((_QWORD *)this + 58),
                v12,
                v13,
                (__int64)this);
        v7 = v10;
        if ( v10 < 0 )
        {
          v30 = 314LL;
        }
        else
        {
          v14 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 84);
          v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v14)(
                  a2,
                  &SID_IImmersiveMonitorService,
                  &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                  (char *)this + 672);
          v7 = v10;
          if ( v10 < 0 )
          {
            v30 = 316LL;
          }
          else
          {
            v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 84) + 24LL))(
                    *((_QWORD *)this + 84),
                    ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
                    (char *)this + 616);
            v7 = v10;
            if ( v10 >= 0 )
            {
              v34 = 0LL;
              v15 = a2->lpVtbl->QueryService;
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
              v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v15)(
                      a2,
                      &SID_IImmersiveMonitorService,
                      &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                      &v34);
              v7 = v16;
              if ( v16 < 0 )
              {
                v31 = 322LL;
              }
              else
              {
                v17 = v34;
                v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 64LL);
                AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((char *)this + 680);
                v16 = v18(v17, AddressOf);
                v7 = v16;
                if ( v16 < 0 )
                {
                  v31 = 323LL;
                }
                else
                {
                  v20 = a2->lpVtbl->QueryService;
                  v21 = (_QWORD *)((char *)this + 664);
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 83);
                  v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v20)(
                          a2,
                          &IID_IImmersiveWindowMessageService,
                          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                          (char *)this + 664);
                  v7 = v16;
                  if ( v16 < 0 )
                  {
                    v31 = 327LL;
                  }
                  else
                  {
                    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v21 + 24LL))(
                            *v21,
                            0LL,
                            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
                            (char *)this + 608);
                    v7 = v16;
                    if ( v16 < 0 )
                    {
                      v31 = 329LL;
                    }
                    else
                    {
                      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(*(_QWORD *)*v21 + 24LL))(
                              *v21,
                              26LL,
                              (char *)this + 32,
                              (char *)this + 612);
                      v7 = v16;
                      if ( v16 >= 0 )
                      {
                        v36 = 0LL;
                        v22 = a2->lpVtbl->QueryService;
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 87);
                        ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v22)(
                                  a2,
                                  &IID_IRealmActivationHistory,
                                  &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
                                  (char *)this + 696);
                        v7 = ready;
                        if ( ready < 0 )
                        {
                          v32 = 333LL;
                        }
                        else
                        {
                          ready = CToastCenterExperienceManager::SubscribeToShellReadyWnf(this);
                          v7 = ready;
                          if ( ready < 0 )
                          {
                            v32 = 335LL;
                          }
                          else
                          {
                            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
                            ready = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                      (ExperienceManagerUtils *)a2,
                                      (struct IServiceProvider *)this + 12,
                                      v24);
                            v7 = ready;
                            if ( ready >= 0 )
                            {
                              v35 = 0LL;
                              UndockedShellAppId = TryGetUndockedShellAppId(v25, &v35);
                              v7 = UndockedShellAppId;
                              if ( UndockedShellAppId < 0 )
                              {
                                v33 = 340LL;
                              }
                              else if ( v35
                                     && (UndockedShellAppId = CSingleViewShellExperience::AddSideBySideAumid(
                                                                (CSingleViewShellExperience *)v4,
                                                                v35),
                                         v7 = UndockedShellAppId,
                                         UndockedShellAppId < 0) )
                              {
                                v33 = 343LL;
                              }
                              else
                              {
                                v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                        (__int64)&v39,
                                        (const WCHAR **)&off_18061DEE8,
                                        v27);
                                UndockedShellAppId = CSingleViewShellExperience::AddTestAumid(
                                                       (CSingleViewShellExperience *)v4,
                                                       *(HSTRING *)(v28 + 24));
                                v7 = UndockedShellAppId;
                                if ( UndockedShellAppId >= 0 )
                                {
                                  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)this + 82, (__int64)a2);
                                  *((_BYTE *)this + 444) = IsShellLauncherEnabledForCurrentUser();
                                  v8 = 0;
                                  v7 = 0;
LABEL_20:
                                  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v35);
LABEL_21:
                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v36);
LABEL_22:
                                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
                                  goto LABEL_23;
                                }
                                v33 = 346LL;
                              }
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)v33,
                                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                                (const char *)(unsigned int)UndockedShellAppId);
                              goto LABEL_20;
                            }
                            v32 = 337LL;
                          }
                        }
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)v32,
                          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                          (const char *)(unsigned int)ready);
                        goto LABEL_21;
                      }
                      v31 = 330LL;
                    }
                  }
                }
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v31,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                (const char *)(unsigned int)v16);
              goto LABEL_22;
            }
            v30 = 317LL;
          }
        }
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v30,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_23:
  if ( v8 )
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
  return v7;
}

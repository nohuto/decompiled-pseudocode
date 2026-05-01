/*
 * XREFs of ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E58B4
 * Callers:
 *     ??$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801345CC (--$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@De.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18009720C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1800E48DC (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800EA0E8 (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801070F0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180143A70 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1801B225C (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@Z @ 0x1801B48DC (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastC.c)
 *     ?SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801BBB0C (-SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CToastCenterExperienceManager::RuntimeClassInitialize(
        CToastCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  HSTRING v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  char v7; // r12
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v9; // eax
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // r8d
  int v12; // r9d
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v20; // rdi
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int ready; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v23; // r8
  unsigned int v24; // r8d
  HSTRING_HEADER *v25; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // [rsp+20h] [rbp-49h]
  __int64 v31; // [rsp+30h] [rbp-39h] BYREF
  __int64 v32; // [rsp+38h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-29h] BYREF
  HSTRING v34; // [rsp+58h] [rbp-11h]
  HSTRING_HEADER v35; // [rsp+60h] [rbp-9h] BYREF
  HSTRING v36; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v34 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ToastCenter",
    0x2Du,
    0x2Cu);
  v4 = v34;
  v36 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v35,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v5 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CToastCenterExperienceManager *)((char *)this + 104),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v36,
         v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      v30);
    return v6;
  }
  hstringHeader.Reserved.Reserved1 = this;
  v7 = 1;
  hstringHeader.Reserved.Reserved2[8] = 1;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 59);
  v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveSessionIdleDetector,
         &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
         (char *)this + 472);
  v6 = v9;
  if ( v9 < 0 )
  {
    v27 = 331LL;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 59) + 32LL))(
           *((_QWORD *)this + 59),
           ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
           (char *)this + 480);
    v6 = v9;
    if ( v9 < 0 )
    {
      v27 = 332LL;
    }
    else
    {
      v10 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 61);
      v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v10)(
             a2,
             &SID_InputHostLayout,
             &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
             (char *)this + 488);
      v6 = v9;
      if ( v9 < 0 )
      {
        v27 = 334LL;
      }
      else
      {
        v9 = SmartCookie::Register<IInputHostLayout,long (IInputHostLayout::*)(IInputHostLayoutChanges *,unsigned long *),long (IInputHostLayout::*)(unsigned long),CToastCenterExperienceManager *>(
               (int)this + 496,
               *((_QWORD *)this + 61),
               v11,
               v12,
               (__int64)this);
        v6 = v9;
        if ( v9 < 0 )
        {
          v27 = 336LL;
        }
        else
        {
          v13 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 86);
          v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v13)(
                 a2,
                 &SID_IImmersiveMonitorService,
                 &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                 (char *)this + 688);
          v6 = v9;
          if ( v9 < 0 )
          {
            v27 = 338LL;
          }
          else
          {
            v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 86) + 24LL))(
                   *((_QWORD *)this + 86),
                   ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
                   (char *)this + 632);
            v6 = v9;
            if ( v9 >= 0 )
            {
              v31 = 0LL;
              v14 = a2->lpVtbl->QueryService;
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
              v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v14)(
                      a2,
                      &SID_IImmersiveMonitorService,
                      &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                      &v31);
              v6 = v15;
              if ( v15 < 0 )
              {
                v28 = 344LL;
              }
              else
              {
                v16 = v31;
                v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 64LL);
                AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)this + 87);
                v15 = v17(v16, AddressOf);
                v6 = v15;
                if ( v15 < 0 )
                {
                  v28 = 345LL;
                }
                else
                {
                  v19 = a2->lpVtbl->QueryService;
                  v20 = (_QWORD *)((char *)this + 680);
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 85);
                  v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v19)(
                          a2,
                          &IID_IImmersiveWindowMessageService,
                          &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
                          (char *)this + 680);
                  v6 = v15;
                  if ( v15 < 0 )
                  {
                    v28 = 349LL;
                  }
                  else
                  {
                    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v20 + 24LL))(
                            *v20,
                            0LL,
                            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
                            (char *)this + 624);
                    v6 = v15;
                    if ( v15 < 0 )
                    {
                      v28 = 351LL;
                    }
                    else
                    {
                      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v20 + 24LL))(
                              *v20,
                              26LL,
                              ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
                              (char *)this + 628);
                      v6 = v15;
                      if ( v15 >= 0 )
                      {
                        v32 = 0LL;
                        v21 = a2->lpVtbl->QueryService;
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 89);
                        ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v21)(
                                  a2,
                                  &IID_IRealmActivationHistory,
                                  &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
                                  (char *)this + 712);
                        v6 = ready;
                        if ( ready < 0 )
                        {
                          v29 = 355LL;
                        }
                        else
                        {
                          ready = CToastCenterExperienceManager::SubscribeToShellReadyWnf(this);
                          v6 = ready;
                          if ( ready < 0 )
                          {
                            v29 = 357LL;
                          }
                          else
                          {
                            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
                            ready = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                      (ExperienceManagerUtils *)a2,
                                      (struct IServiceProvider *)this + 12,
                                      v23);
                            v6 = ready;
                            if ( ready < 0 )
                            {
                              v29 = 359LL;
                            }
                            else
                            {
                              v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                      &v35,
                                      (const WCHAR **)&off_1807A2AD0,
                                      v24);
                              ready = CSingleViewShellExperience::AddTestAumid(
                                        (CToastCenterExperienceManager *)((char *)this + 104),
                                        (HSTRING)v25[1].Reserved.Reserved1);
                              v6 = ready;
                              if ( ready >= 0 )
                              {
                                Microsoft::WRL::ComPtr<IServiceProvider>::operator=((char *)this + 672, a2);
                                *((_BYTE *)this + 468) = IsShellLauncherEnabledForCurrentUser();
                                v7 = 0;
                                v6 = 0;
LABEL_18:
                                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
LABEL_19:
                                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v31);
                                goto LABEL_20;
                              }
                              v29 = 361LL;
                            }
                          }
                        }
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)v29,
                          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                          (const char *)(unsigned int)ready,
                          v30);
                        goto LABEL_18;
                      }
                      v28 = 352LL;
                    }
                  }
                }
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v28,
                (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                (const char *)(unsigned int)v15,
                v30);
              goto LABEL_19;
            }
            v27 = 339LL;
          }
        }
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v9,
    v30);
LABEL_20:
  if ( v7 )
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
  return v6;
}

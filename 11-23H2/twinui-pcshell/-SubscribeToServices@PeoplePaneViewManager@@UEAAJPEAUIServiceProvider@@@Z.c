/*
 * XREFs of ?SubscribeToServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E3810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800E2B7C (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@Z @ 0x1801B4808 (--$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP8_ea_1801B4808.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@Z @ 0x1801B4F7C (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1801B4F7C.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall PeoplePaneViewManager::SubscribeToServices(PeoplePaneViewManager *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v5; // rdi
  int v6; // ebx
  int v7; // r8d
  int v8; // r9d
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, char *); // rdi
  int v13; // eax
  IUnknown *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64, char *); // rdi
  int v18; // eax
  IUnknown *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64, char *); // rdi
  int v23; // eax
  IUnknown *v24; // rax
  __int64 v25; // rcx
  HRESULT (__stdcall *v26)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v27; // eax
  HRESULT (__stdcall *v28)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v29)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v30; // rdi
  int v31; // r8d
  int v32; // r9d
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  int v39; // [rsp+20h] [rbp-69h]
  int v40; // [rsp+30h] [rbp-59h] BYREF
  __int64 v41; // [rsp+38h] [rbp-51h] BYREF
  IUnknown *v42; // [rsp+40h] [rbp-49h] BYREF
  __int64 v43; // [rsp+48h] [rbp-41h] BYREF
  HSTRING_HEADER v44; // [rsp+50h] [rbp-39h] BYREF
  __int64 v45; // [rsp+68h] [rbp-21h]
  HSTRING_HEADER v46; // [rsp+70h] [rbp-19h] BYREF
  __int64 v47; // [rsp+88h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+7h] BYREF
  __int64 v49; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  QueryService = a2->lpVtbl->QueryService;
  v5 = (_QWORD *)((char *)this + 320);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 40);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v5);
  if ( v6 < 0 )
  {
    v34 = 104LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (unsigned int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v6,
      v39);
    return (unsigned int)v6;
  }
  v6 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),PeoplePaneViewManager *>(
         (int)this + 328,
         *v5,
         v7,
         v8,
         (__int64)this - 24);
  if ( v6 < 0 )
  {
    v34 = 108LL;
    goto LABEL_31;
  }
  v41 = 0LL;
  v9 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, __int64 *))v9)(
          a2,
          &unk_180813488,
          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
          &v41);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (unsigned int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v10,
      v39);
    goto LABEL_27;
  }
  v49 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.PeopleBarFlyout",
    0x31u,
    0x30u);
  v11 = v41;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v41 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 63);
  v13 = v12(v11, v49, (char *)this + 504);
  v6 = v13;
  if ( v13 < 0 )
  {
    v35 = 114LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (unsigned int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v13,
      v39);
    goto LABEL_26;
  }
  v14 = (IUnknown *)*((_QWORD *)this + 63);
  v40 = 2;
  v42 = v14;
  v15 = *((_QWORD *)this + 64);
  if ( v15 )
  {
    *((_QWORD *)this + 64) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v13 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
          (__int64 *)this + 64,
          &GUID_1b7781cd_1b97_4728_8b6e_67a7e55cc53c,
          &v42,
          &v40);
  v6 = v13;
  if ( v13 < 0 )
  {
    v35 = 115LL;
    goto LABEL_35;
  }
  v47 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v46,
    L"Windows.Internal.ShellExperience.PeopleBarJumpView",
    0x33u,
    0x32u);
  v16 = v41;
  v17 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v41 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 65);
  v18 = v17(v16, v47, (char *)this + 520);
  v6 = v18;
  if ( v18 < 0 )
  {
    v36 = 118LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (unsigned int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v18,
      v39);
    goto LABEL_25;
  }
  v19 = (IUnknown *)*((_QWORD *)this + 65);
  v40 = 2;
  v42 = v19;
  v20 = *((_QWORD *)this + 66);
  if ( v20 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v18 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
          (__int64 *)this + 66,
          &GUID_ab65b025_ff88_470a_9513_b62bcd7ce879,
          &v42,
          &v40);
  v6 = v18;
  if ( v18 < 0 )
  {
    v36 = 119LL;
    goto LABEL_38;
  }
  v45 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v44,
    L"Windows.Internal.ShellExperience.ShoulderTap",
    0x2Du,
    0x2Cu);
  v21 = v41;
  v22 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v41 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 67);
  v23 = v22(v21, v45, (char *)this + 536);
  v6 = v23;
  if ( v23 < 0 )
  {
    v37 = 122LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (unsigned int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v23,
      v39);
    goto LABEL_24;
  }
  v24 = (IUnknown *)*((_QWORD *)this + 67);
  v40 = 2;
  v42 = v24;
  v25 = *((_QWORD *)this + 68);
  if ( v25 )
  {
    *((_QWORD *)this + 68) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v23 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
          (__int64 *)this + 68,
          &GUID_8667db0d_6960_465f_b9a4_c461863efa91,
          &v42,
          &v40);
  v6 = v23;
  if ( v23 < 0 )
  {
    v37 = 123LL;
    goto LABEL_41;
  }
  v43 = 0LL;
  v26 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v43);
  v27 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v26)(
          a2,
          &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
          &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
          &v43);
  v6 = v27;
  if ( v27 < 0 )
  {
    v38 = 127LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (unsigned int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v27,
      v39);
    goto LABEL_23;
  }
  v27 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, __int64))(*(_QWORD *)v43 + 64LL))(
          v43,
          L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
          0x28800000168LL);
  v6 = v27;
  if ( v27 < 0 )
  {
    v38 = 128LL;
    goto LABEL_48;
  }
  v28 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 21);
  v27 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v28)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          (char *)this + 168);
  v6 = v27;
  if ( v27 < 0 )
  {
    v38 = 130LL;
    goto LABEL_48;
  }
  v29 = a2->lpVtbl->QueryService;
  v30 = (_QWORD *)((char *)this + 176);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
  v27 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v29)(
          a2,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          (char *)this + 176);
  v6 = v27;
  if ( v27 < 0 )
  {
    v38 = 132LL;
    goto LABEL_48;
  }
  v27 = SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),PeoplePaneViewManager *>(
          (int)this + 192,
          *v30,
          v31,
          v32,
          (__int64)this - 24);
  v6 = v27;
  if ( v27 < 0 )
  {
    v38 = 136LL;
    goto LABEL_48;
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v30 + 24LL))(*v30, (char *)this + 184);
  v6 = v27;
  if ( v27 < 0 )
  {
    v38 = 137LL;
    goto LABEL_48;
  }
  v6 = 0;
LABEL_23:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v43);
LABEL_24:
  v45 = 0LL;
LABEL_25:
  v47 = 0LL;
LABEL_26:
  v49 = 0LL;
LABEL_27:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
  return (unsigned int)v6;
}

/*
 * XREFs of ?SubscribeToServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D7880
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800896BC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUn_ea_1800896BC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@Z @ 0x18010BFF4 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_18010BFF4.c)
 *     ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@Z @ 0x18010C0A4 (--$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAV.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
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
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64, char *); // rdi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64, char *); // rdi
  int v21; // eax
  __int64 v22; // rax
  HRESULT (__stdcall *v23)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v24; // eax
  HRESULT (__stdcall *v25)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v26)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v27; // rdi
  int v28; // r8d
  int v29; // r9d
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned int v36; // [rsp+30h] [rbp-59h] BYREF
  __int64 v37; // [rsp+38h] [rbp-51h] BYREF
  __int64 v38; // [rsp+40h] [rbp-49h] BYREF
  __int64 v39; // [rsp+48h] [rbp-41h] BYREF
  HSTRING_HEADER v40; // [rsp+50h] [rbp-39h] BYREF
  __int64 v41; // [rsp+68h] [rbp-21h]
  HSTRING_HEADER v42; // [rsp+70h] [rbp-19h] BYREF
  __int64 v43; // [rsp+88h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+7h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+1Fh]
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
    v31 = 104LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v6);
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
    v31 = 108LL;
    goto LABEL_25;
  }
  v37 = 0LL;
  v9 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, __int64 *))v9)(
          a2,
          &unk_1806846E0,
          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
          &v37);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_21;
  }
  v45 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.PeopleBarFlyout",
    0x31u,
    0x30u);
  v11 = v37;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v37 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 63);
  v13 = v12(v11, v45, (char *)this + 504);
  v6 = v13;
  if ( v13 < 0 )
  {
    v32 = 114LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_20;
  }
  v14 = *((_QWORD *)this + 63);
  v36 = 2;
  v38 = v14;
  v13 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
          (__int64 *)this + 64,
          (__int64)&GUID_1b7781cd_1b97_4728_8b6e_67a7e55cc53c,
          &v38,
          &v36);
  v6 = v13;
  if ( v13 < 0 )
  {
    v32 = 115LL;
    goto LABEL_29;
  }
  v43 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v42,
    L"Windows.Internal.ShellExperience.PeopleBarJumpView",
    0x33u,
    0x32u);
  v15 = v37;
  v16 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v37 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 65);
  v17 = v16(v15, v43, (char *)this + 520);
  v6 = v17;
  if ( v17 < 0 )
  {
    v33 = 118LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_19;
  }
  v18 = *((_QWORD *)this + 65);
  v36 = 2;
  v38 = v18;
  v17 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
          (__int64 *)this + 66,
          (__int64)&GUID_ab65b025_ff88_470a_9513_b62bcd7ce879,
          &v38,
          &v36);
  v6 = v17;
  if ( v17 < 0 )
  {
    v33 = 119LL;
    goto LABEL_32;
  }
  v41 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v40,
    L"Windows.Internal.ShellExperience.ShoulderTap",
    0x2Du,
    0x2Cu);
  v19 = v37;
  v20 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v37 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 67);
  v21 = v20(v19, v41, (char *)this + 536);
  v6 = v21;
  if ( v21 < 0 )
  {
    v34 = 122LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_18;
  }
  v22 = *((_QWORD *)this + 67);
  v36 = 2;
  v38 = v22;
  v21 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
          (__int64 *)this + 68,
          (__int64)&GUID_8667db0d_6960_465f_b9a4_c461863efa91,
          &v38,
          &v36);
  v6 = v21;
  if ( v21 < 0 )
  {
    v34 = 123LL;
    goto LABEL_35;
  }
  v39 = 0LL;
  v23 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v39);
  v24 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v23)(
          a2,
          &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
          &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
          &v39);
  v6 = v24;
  if ( v24 < 0 )
  {
    v35 = 127LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_17;
  }
  v24 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, __int64))(*(_QWORD *)v39 + 64LL))(
          v39,
          L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
          0x28800000168LL);
  v6 = v24;
  if ( v24 < 0 )
  {
    v35 = 128LL;
    goto LABEL_42;
  }
  v25 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 21);
  v24 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v25)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          (char *)this + 168);
  v6 = v24;
  if ( v24 < 0 )
  {
    v35 = 130LL;
    goto LABEL_42;
  }
  v26 = a2->lpVtbl->QueryService;
  v27 = (_QWORD *)((char *)this + 176);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
  v24 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v26)(
          a2,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          (char *)this + 176);
  v6 = v24;
  if ( v24 < 0 )
  {
    v35 = 132LL;
    goto LABEL_42;
  }
  v24 = SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),PeoplePaneViewManager *>(
          (int)this + 192,
          *v27,
          v28,
          v29,
          (__int64)this - 24);
  v6 = v24;
  if ( v24 < 0 )
  {
    v35 = 136LL;
    goto LABEL_42;
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v27 + 24LL))(*v27, (char *)this + 184);
  v6 = v24;
  if ( v24 < 0 )
  {
    v35 = 137LL;
    goto LABEL_42;
  }
  v6 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v39);
LABEL_18:
  v41 = 0LL;
LABEL_19:
  v43 = 0LL;
LABEL_20:
  v45 = 0LL;
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
  return (unsigned int)v6;
}

/*
 * XREFs of ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18037F0B0
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18037C05C (--$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x18005C210 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180096F68 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800A024C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800A281C (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E44D8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E4540 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800E47C8 (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800FF230 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     wistd::function_void___cdecl(unsigned_long_const_&)_::function_void___cdecl(unsigned_long_const_&)___lambda_1073f1795595263142ba0ada14a743ca__void_ @ 0x18037BC4C (wistd--function_void___cdecl(unsigned_long_const_-)_--function_void___cdecl(unsigne_ea_18037BC4C.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x180380AC8 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualTouchpadExperienceManager::RuntimeClassInitialize(
        CVirtualTouchpadExperienceManager *this,
        struct IServiceProvider *a2)
{
  HSTRING v4; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v9; // rbx
  int AgileReference; // edi
  __int64 v11; // rdx
  wil::details **wnf_subscription; // rax
  struct wil::details::wnf_subscription_state_base *v13; // rdx
  wil::details **v14; // rdi
  HMODULE *v15; // rbx
  HMODULE LibraryW; // rax
  const char *v17; // r9
  FARPROC ProcAddress; // rax
  FARPROC v19; // rax
  FARPROC v20; // rax
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  wil::details *v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  CVirtualTouchpadExperienceManager *v24; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING_HEADER v25; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v26; // [rsp+68h] [rbp-98h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-90h] BYREF
  HSTRING v28; // [rsp+88h] [rbp-78h]
  _BYTE v29[128]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v28 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.VirtualTouchpad",
    0x31u,
    0x30u);
  v4 = v28;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v25,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v5 = CSingleViewShellExperience::RuntimeClassInitialize(
         (HSTRING *)this + 8,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v26,
         v4);
  if ( v5 < 0 )
  {
    v6 = 199LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v25,
    L"ShellExperienceHostVS_ccv6fwk6gx0xp!App",
    0x28u,
    0x27u);
  v5 = CSingleViewShellExperience::AddTestAumid((CVirtualTouchpadExperienceManager *)((char *)this + 64), v26);
  if ( v5 < 0 )
  {
    v6 = 200LL;
    goto LABEL_3;
  }
  *((_DWORD *)this + 31) = 2;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 42);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
         &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
         (char *)this + 336);
  if ( v5 < 0 )
  {
    v6 = 206LL;
    goto LABEL_3;
  }
  v24 = this;
  if ( this )
    (*(void (__fastcall **)(CVirtualTouchpadExperienceManager *))(*(_QWORD *)this + 8LL))(this);
  v9 = 0LL;
  v21 = 0LL;
  AgileReference = 0;
  if ( this )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
    AgileReference = RoGetAgileReference(0LL, &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, this, &v21);
    v9 = v21;
  }
  v21 = 0LL;
  v23 = v9;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
  if ( AgileReference < 0 )
  {
    v11 = 210LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)AgileReference);
    goto LABEL_31;
  }
  v21 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  wistd::function_void___cdecl_unsigned_long_const____::function_void___cdecl_unsigned_long_const______lambda_1073f1795595263142ba0ada14a743ca__void_(
    (__int64)v29,
    &v21);
  wnf_subscription = (wil::details **)wil::make_wnf_subscription_nothrow<unsigned long>(
                                        &v22,
                                        (__int64)&WNF_SHEL_LOCKSCREEN_ACTIVE,
                                        (__int64)v29);
  v14 = wnf_subscription;
  if ( (wil::details **)((char *)this + 768) != wnf_subscription )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 96,
      *wnf_subscription);
    *v14 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(
    &v22,
    v13);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v29);
  if ( !*((_QWORD *)this + 96) )
  {
    AgileReference = -2147467259;
    v11 = 225LL;
    goto LABEL_29;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 34, (__int64)this);
  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)this + 41, (__int64)a2);
  v15 = (HMODULE *)((char *)this + 776);
  LibraryW = LoadLibraryW(L"user32.DLL");
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    (char *)this + 776,
    LibraryW);
  if ( *((_QWORD *)this + 97) )
  {
    ProcAddress = GetProcAddress(*((HMODULE *)this + 97), "SetPhysicalCursorPos");
    *((_QWORD *)this + 98) = ProcAddress;
    if ( ProcAddress )
    {
      v19 = GetProcAddress(*v15, "CalculatePopupWindowPosition");
      *((_QWORD *)this + 99) = v19;
      if ( v19 )
      {
        v20 = GetProcAddress(*v15, "GetPhysicalCursorPos");
        *((_QWORD *)this + 100) = v20;
        if ( v20 )
        {
          AgileReference = 0;
          goto LABEL_31;
        }
        v11 = 241LL;
      }
      else
      {
        v11 = 238LL;
      }
    }
    else
    {
      v11 = 235LL;
    }
    AgileReference = -2147024769;
    goto LABEL_29;
  }
  AgileReference = wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)0xE8,
                     (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                     v17);
LABEL_31:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
  return (unsigned int)AgileReference;
}

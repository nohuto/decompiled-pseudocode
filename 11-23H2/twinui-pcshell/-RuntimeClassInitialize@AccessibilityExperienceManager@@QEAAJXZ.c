/*
 * XREFs of ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1800E7F4C
 * Callers:
 *     ??$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAccessibilityExperienceManager@@@Z @ 0x180196AA4 (--$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800A5A8C (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     wistd::function_void___cdecl(unsigned_long_const_&)_::function_void___cdecl(unsigned_long_const_&)___lambda_0e57886e0f505b966e2d0c8861e990eb__void_ @ 0x1800EA5B0 (wistd--function_void___cdecl(unsigned_long_const_-)_--function_void___cdecl(unsigne_ea_1800EA5B0.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1800EAB24 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$make_shared@VWnfHelper@@$$V@std@@YA?AV?$shared_ptr@VWnfHelper@@@0@XZ @ 0x1801B5298 (--$make_shared@VWnfHelper@@$$V@std@@YA-AV-$shared_ptr@VWnfHelper@@@0@XZ.c)
 *     ?EnsureInputDeviceWatcher@AccessibilityExperienceManager@@AEAAJXZ @ 0x1801B827C (-EnsureInputDeviceWatcher@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?Subscribe@WnfHelper@@QEAAJPEAUIWnfCallback@@@Z @ 0x1801B9210 (-Subscribe@WnfHelper@@QEAAJPEAUIWnfCallback@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall AccessibilityExperienceManager::RuntimeClassInitialize(AccessibilityExperienceManager *this)
{
  HWND Window; // rax
  __int64 v3; // r12
  int AgileReference; // ebx
  int v5; // eax
  __int64 v6; // rbx
  int ActivationFactory; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, char *, char *); // r14
  int v10; // eax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  wil::details **wnf_subscription; // rax
  struct wil::details::wnf_subscription_state_base *v16; // rdx
  wil::details **v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  int X; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  WNDCLASSEXW v28; // [rsp+80h] [rbp-80h] BYREF
  _BYTE hstringHeader[32]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v30[128]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  memset_0(&v28, 0, sizeof(v28));
  v28.cbSize = 80;
  v28.lpfnWndProc = (WNDPROC)_AccessibilityEMWndProc;
  v28.lpszClassName = L"AccessibilityEMWndClass";
  RegisterClassExW(&v28);
  Window = CreateWindowExW(
             0,
             L"AccessibilityEMWndClass",
             L"AccessibilityEMWnd",
             0,
             0,
             0,
             0,
             0,
             HWND_MESSAGE,
             0LL,
             0LL,
             0LL);
  *((_QWORD *)this + 52) = Window;
  SetWindowLongPtrW(Window, -21, (LONG_PTR)this);
  qword_18098D6F0 = (__int64)L"Microsoft.ECApp_8wekyb3d8bbwe!App";
  v27 = (__int64)this + 144;
  if ( this != (AccessibilityExperienceManager *)-144LL )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 18) + 8LL))((char *)this + 144);
  v3 = 0LL;
  v24 = 0LL;
  AgileReference = 0;
  if ( this != (AccessibilityExperienceManager *)-144LL )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
    AgileReference = RoGetAgileReference(0LL, &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c, (char *)this + 144, &v24);
    v3 = v24;
  }
  v24 = 0LL;
  v26 = v3;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
  if ( AgileReference < 0 )
  {
    v21 = (unsigned int)AgileReference;
    v22 = 104LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v21,
      X);
    goto LABEL_26;
  }
  *(_OWORD *)hstringHeader = *(_OWORD *)&SID_AccessibilityExperienceManager.Revision;
  *(_OWORD *)&hstringHeader[16] = 0LL;
  v5 = CImmersiveShellComponent::RegisterServiceInformation(
         (AccessibilityExperienceManager *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)hstringHeader,
         1u);
  AgileReference = v5;
  if ( v5 < 0 )
  {
    v22 = 106LL;
LABEL_31:
    v21 = (unsigned int)v5;
    goto LABEL_32;
  }
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((char *)this + 288);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((char *)this + 288);
  AgileReference = v5;
  if ( v5 < 0 )
  {
    v22 = 108LL;
    goto LABEL_31;
  }
  v25 = 0LL;
  *(_QWORD *)&hstringHeader[24] = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    (HSTRING_HEADER *)hstringHeader,
    L"Windows.UI.Internal.Input.EyeControlApp",
    0x28u,
    0x27u);
  v6 = *(_QWORD *)&hstringHeader[24];
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  ActivationFactory = RoGetActivationFactory(v6, &GUID_fc3ec75f_fb9f_4147_93fc_59b58dbf65be, &v25);
  AgileReference = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v18 = (unsigned int)ActivationFactory;
    v19 = 111LL;
  }
  else
  {
    v8 = v25;
    v9 = *(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v25 + 48LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 51);
    v10 = v9(v8, (char *)this + 144, (char *)this + 408);
    AgileReference = v10;
    if ( v10 < 0 )
    {
      v18 = (unsigned int)v10;
      v19 = 112LL;
    }
    else
    {
      v11 = (__int64 *)std::make_shared<WnfHelper,>(hstringHeader);
      v12 = *v11;
      v13 = v11[1];
      *v11 = 0LL;
      v11[1] = 0LL;
      *((_QWORD *)this + 37) = v12;
      v14 = (std::_Ref_count_base *)*((_QWORD *)this + 38);
      *((_QWORD *)this + 38) = v13;
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      if ( *(_QWORD *)&hstringHeader[8] )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&hstringHeader[8]);
      if ( *((_QWORD *)this + 37) )
        WnfHelper::Subscribe(
          *((WnfHelper **)this + 37),
          (struct IWnfCallback *)(((unsigned __int64)this + 136) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      v24 = v3;
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      wistd::function_void___cdecl_unsigned_long_const____::function_void___cdecl_unsigned_long_const______lambda_0e57886e0f505b966e2d0c8861e990eb__void_(
        v30,
        &v24);
      wnf_subscription = (wil::details **)wil::make_wnf_subscription_nothrow<unsigned long>(
                                            hstringHeader,
                                            (__int64)&WNF_SHEL_LOCKSCREEN_ACTIVE,
                                            (__int64)v30);
      v17 = wnf_subscription;
      if ( (wil::details **)((char *)this + 312) != wnf_subscription )
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
          (wil::details **)this + 39,
          *wnf_subscription);
        *v17 = 0LL;
      }
      if ( *(_QWORD *)hstringHeader )
        wil::details::delete_wnf_subscription_state(*(wil::details **)hstringHeader, v16);
      wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v30);
      if ( *((_QWORD *)this + 39) )
      {
        AccessibilityExperienceManager::EnsureInputDeviceWatcher(this);
        AgileReference = 0;
        goto LABEL_25;
      }
      AgileReference = -2147467259;
      v18 = 2147500037LL;
      v19 = 131LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (unsigned int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)v18,
    X);
LABEL_25:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
LABEL_26:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
  return (unsigned int)AgileReference;
}

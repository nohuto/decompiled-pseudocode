/*
 * XREFs of ?Update@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z @ 0x18022E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802114B8 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Site@UIServiceProvider@@@SnapWindowProvider@SnapLauncher@@AEAA?AU?$com_ptr@UIServiceProvider@@@winrt@@XZ @ 0x18022DC90 (--$Site@UIServiceProvider@@@SnapWindowProvider@SnapLauncher@@AEAA-AU-$com_ptr@UIServiceProvider@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x180441DBC (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLauncher::SnapWindowProvider::Update(
        SnapLauncher::SnapWindowProvider *this,
        struct IUnknown *a2)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v14; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v10 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 47LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplauncher.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_12;
  }
  v14 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SnapWindow.Id", 0xEu, 0xDu);
  v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v10,
         v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 48LL;
    goto LABEL_5;
  }
  SnapLauncher::SnapWindowProvider::Site<IServiceProvider>(
    (SnapLauncher::SnapWindowProvider *)((char *)this - 16),
    (void **)&v12);
  if ( v12 )
  {
    v8 = *v12;
    v11 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *, GUID *, __int64 *))(v8 + 24))(
           v12,
           &qword_18082B6C8,
           &GUID_e1380b20_f578_40aa_bb7d_a22bd11b0836,
           &v11) >= 0 )
      (*(void (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v11 + 24LL))(v11, a2);
    wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>(&v11);
    if ( v12 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v12);
  }
  v6 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v6;
}

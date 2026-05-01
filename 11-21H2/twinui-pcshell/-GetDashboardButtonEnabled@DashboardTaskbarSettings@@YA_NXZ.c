/*
 * XREFs of ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D06E4
 * Callers:
 *     _lambda_c7ad7d039b35a8565706af83963bb0b1_::operator() @ 0x1801C5694 (_lambda_c7ad7d039b35a8565706af83963bb0b1_--operator().c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800FBCF4 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$as@U?$IReference@_N@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$IReference@_N@123@XZ @ 0x1801D0388 (--$as@U-$IReference@_N@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$IR.c)
 *     ??0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ @ 0x1801D063C (--0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ.c)
 *     ??0hresult_no_interface@winrt@@QEAA@XZ @ 0x1801D06C0 (--0hresult_no_interface@winrt@@QEAA@XZ.c)
 *     ?GetValue@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x1801D0900 (-GetValue@-$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Deskt.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall DashboardTaskbarSettings::GetDashboardButtonEnabled(DashboardTaskbarSettings *this)
{
  __int64 (__fastcall ****Value)(_QWORD, void *, _QWORD **); // rax
  _QWORD *v2; // rax
  unsigned int v3; // eax
  char v4; // bl
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[48]; // [rsp+38h] [rbp-30h] BYREF
  char v8; // [rsp+80h] [rbp+18h] BYREF
  struct IUnknown v9; // [rsp+88h] [rbp+20h] BYREF
  __int64 v10; // [rsp+90h] [rbp+28h] BYREF
  char v11; // [rsp+98h] [rbp+30h] BYREF

  winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting::DesktopTaskbarDaSetting(&v9);
  winrt::param::hstring::hstring((winrt::param::hstring *)v7, L"Value");
  Value = (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>::GetValue(
                                                                  &v9,
                                                                  &v11,
                                                                  v7);
  if ( !*Value )
  {
    winrt::hresult_no_interface::hresult_no_interface((winrt::hresult_no_interface *)pExceptionObject);
    throw (winrt::hresult_no_interface *)pExceptionObject;
  }
  v2 = winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Foundation::IReference<bool>>(Value, &v10);
  v8 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v2 + 48LL))(*v2, &v8);
  winrt::check_hresult(v3);
  v4 = v8;
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v10);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v11);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v9);
  return v4;
}

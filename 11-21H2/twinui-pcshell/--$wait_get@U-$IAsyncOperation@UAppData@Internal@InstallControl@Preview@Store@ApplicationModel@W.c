/*
 * XREFs of ??$wait_get@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@1@AEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@81@@Z @ 0x1801C3AD8
 * Callers:
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@34@@impl@winrt@@QEBA?AUAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x1801CF504 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UAppData@Internal@InstallCo.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800F79D0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA@AEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1801C3820 (--$wait_for_completed@U-$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@Applicat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x18041CF2C (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ??$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIAsyncInfo@123@XZ @ 0x180453718 (--$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AUIAsyn.c)
 */

// Hidden C++ exception states: #wind=2
winrt *__fastcall winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData>>(
        winrt *this,
        __int64 *a2)
{
  unsigned int v4; // eax
  struct IUnknown *v5; // rdx
  int v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, void **); // rbx
  void **v9; // rax
  unsigned int v10; // eax
  _BYTE pExceptionObject[48]; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0;
  winrt::Windows::Foundation::IUnknown::try_as<winrt::Windows::Foundation::IAsyncInfo>(a2, &v14);
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 56LL))(v14, &v13);
  winrt::check_hresult(v4);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v14);
  v6 = v13;
  if ( !v13 )
    v6 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData>>(a2);
  if ( v6 == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  *(_QWORD *)this = 0LL;
  v7 = *a2;
  v8 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v7 + 64LL);
  v9 = winrt::put_abi(this, v5);
  v10 = v8(v7, v9);
  winrt::check_hresult(v10);
  return this;
}

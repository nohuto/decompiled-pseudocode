/*
 * XREFs of ?RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ViewSizePreference@ViewManagement@UI@6@1_KPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Z @ 0x1804C95D8
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x1804B94D4 (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell.c)
 * Callees:
 *     ??4?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180048274 (--4-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801923A4 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 *     ??4?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A5588 (--4-$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_ex.c)
 *     ??4?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncCallback@@@Z @ 0x1804BCF94 (--4-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncCallback@@@Z.c)
 */

__int64 __fastcall ViewEventArgsForShowAsStandalone::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  *(_DWORD *)(a1 + 48) = 12;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=((__int64 *)(a1 + 56), a8);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (__int64 *)(a1 + 104),
    a2);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (__int64 *)(a1 + 112),
    a3);
  *(_DWORD *)(a1 + 124) = a5;
  *(_QWORD *)(a1 + 128) = a6;
  *(_DWORD *)(a1 + 120) = a4;
  Microsoft::WRL::ComPtr<IAsyncCallback>::operator=((__int64 *)(a1 + 144), a7);
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 152),
    a9);
  return 0LL;
}

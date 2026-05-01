/*
 * XREFs of ?RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewMode@ViewManagement@UI@6@W4ExperienceKind@WindowManagement@ApplicationModel@56@W4ViewSizePreference@896@3USize@Foundation@6@W4ViewGrouping@896@_KPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Z @ 0x1804C967C
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewMode@ViewManagement@UI@6@AEAW4ExperienceKind@WindowManagement@ApplicationModel@56@AEAW4ViewSizePreference@9UI@6@AEAW4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@W4ViewGrouping@9UI@6@HAEAPEAUIAsyncCallback@@$$TPEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewMode@ViewManagement@UI@7@AEAW4ExperienceKind@WindowManagement@ApplicationModel@67@AEAW4ViewSizePreference@ViewManagement@UI@7@4AEAUSize@Foundation@7@$$QEAW4ViewGrouping@ViewManagement@UI@7@$$QEAHAEAPEAUIAsyncCallback@@$$QEA$$T$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x1804B963C (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@I.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewMode@ViewManagement@UI@6@AEAW4ExperienceKind@WindowManagement@ApplicationModel@56@AEAW4ViewSizePreference@9UI@6@AEAW4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@W4ViewGrouping@9UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewMode@ViewManagement@UI@7@AEAW4ExperienceKind@WindowManagement@ApplicationModel@67@AEAW4ViewSizePreference@ViewManagement@UI@7@4AEAUSize@Foundation@7@$$QEAW4ViewGrouping@ViewManagement@UI@7@AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x1804CE8F8 (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerIn_ea_1804CE8F8.c)
 * Callees:
 *     ??4?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180048274 (--4-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801923A4 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 *     ??4?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A5588 (--4-$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_ex.c)
 *     ??4?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncCallback@@@Z @ 0x1804BCF94 (--4-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncCallback@@@Z.c)
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  *(_DWORD *)(a1 + 48) = 14;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=((__int64 *)(a1 + 56), a12);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (__int64 *)(a1 + 112),
    a2);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (__int64 *)(a1 + 120),
    a3);
  *(_DWORD *)(a1 + 132) = a5;
  *(_DWORD *)(a1 + 136) = a6;
  *(_DWORD *)(a1 + 140) = a7;
  *(_DWORD *)(a1 + 144) = a9;
  *(_QWORD *)(a1 + 152) = a10;
  *(_DWORD *)(a1 + 128) = a4;
  *(_QWORD *)(a1 + 160) = a8;
  Microsoft::WRL::ComPtr<IAsyncCallback>::operator=((__int64 *)(a1 + 168), a11);
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 176),
    a13);
  return 0LL;
}

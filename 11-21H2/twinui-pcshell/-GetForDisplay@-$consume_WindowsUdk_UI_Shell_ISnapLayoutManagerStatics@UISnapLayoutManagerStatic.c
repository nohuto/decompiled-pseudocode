/*
 * XREFs of ?GetForDisplay@?$consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics@UISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUSnapLayoutManager@Shell@UI@WindowsUdk@3@AEBUDisplayRegion@WindowManagement@6Windows@3@@Z @ 0x1800676B4
 * Callers:
 *     ?InitializeSnapQuadrantsPolicy@SnapLayoutHelpers@@YAXXZ @ 0x180066D10 (-InitializeSnapQuadrantsPolicy@SnapLayoutHelpers@@YAXXZ.c)
 *     ??$call@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@?$factory_cache_entry@USnapLayoutManager@Shell@UI@WindowsUdk@winrt@@UISnapLayoutManagerStatics@2345@@impl@winrt@@QEAA?AUSnapLayoutManager@Shell@UI@WindowsUdk@2@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@Z @ 0x18006758C (--$call@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@-$factory_cache_entry@USnapLayoutManager.c)
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x1805BB224 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics<winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>::GetForDisplay(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *a2 = v7;
  return a2;
}

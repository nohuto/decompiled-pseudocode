/*
 * XREFs of ?CreateSnapBarForWindow@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtensionStatics3@UISnapLayoutPickerExtensionStatics3@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUSnapLayoutManager@Shell@UI@WindowsUdk@3@_KAEBW4InputDeviceKind@5673@@Z @ 0x18068EE2C
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x1806920E8 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtensionStatics3<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtensionStatics3>::CreateSnapBarForWindow(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v5; // rcx
  signed int v7; // eax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v5 = *a1;
  v9 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 48LL))(
         v5,
         *a3,
         a4,
         *a5,
         &v9);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  *a2 = v9;
  return a2;
}

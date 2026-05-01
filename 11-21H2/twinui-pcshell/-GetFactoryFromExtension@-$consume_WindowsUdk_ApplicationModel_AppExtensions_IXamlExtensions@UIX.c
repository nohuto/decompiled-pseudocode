/*
 * XREFs of ?GetFactoryFromExtension@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions@UIXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@AEBUhstring@param@3@0@Z @ 0x1805B8DE4
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x1805BB224 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions<winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensions>::GetFactoryFromExtension(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rcx
  signed int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v4 + 56LL))(v4, *a3, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  *a2 = v8;
  return a2;
}

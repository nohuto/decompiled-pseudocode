/*
 * XREFs of ?WorkAreaSize@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA?AUSize@Foundation@Windows@3@XZ @ 0x1805B4BFC
 * Callers:
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805B4898 (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 *     ?TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUDisplayRegion@WindowManagement@UI@67@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x1805BAE5C (-TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaSize(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v3; // eax

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 72LL))(*a1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return a2;
}

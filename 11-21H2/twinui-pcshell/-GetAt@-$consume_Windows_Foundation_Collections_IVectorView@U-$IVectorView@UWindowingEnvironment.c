/*
 * XREFs of ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowingEnvironment@WindowManagement@UI@45@@impl@winrt@@QEBA?AUWindowingEnvironment@WindowManagement@UI@Windows@3@I@Z @ 0x1805B8CB4
 * Callers:
 *     ?TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUDisplayRegion@WindowManagement@UI@67@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x1805BAE5C (-TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowManagement::WindowingEnvironment>,winrt::Windows::UI::WindowManagement::WindowingEnvironment>::GetAt(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int a3)
{
  signed int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a1 + 48LL))(*a1, a3, a2);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  return a2;
}

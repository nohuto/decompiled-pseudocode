/*
 * XREFs of ?DisplayId@?$consume_Windows_UI_WindowManagement_IDisplayRegion2@UDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA?AU0Graphics@Windows@3@XZ @ 0x1805B8B2C
 * Callers:
 *     ?TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUDisplayRegion@WindowManagement@UI@67@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x1805BAE5C (-TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion2<winrt::Windows::UI::WindowManagement::DisplayRegion>::DisplayId(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v6 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v3)(
      v3,
      &winrt::impl::guid_v<winrt::Windows::UI::WindowManagement::IDisplayRegion2>,
      &v6);
    v3 = v6;
  }
  v7 = v3;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 48LL))(v3, a2);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  return a2;
}

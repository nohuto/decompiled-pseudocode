/*
 * XREFs of ??$end@U?$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x1805B7904
 * Callers:
 *     ?TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUDisplayRegion@WindowManagement@UI@67@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x1805BAE5C (-TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::end<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowManagement::WindowingEnvironment>,0>(
        __int64 a1,
        _QWORD *a2)
{
  signed int v4; // eax
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a2 + 56LL))(*a2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *(_DWORD *)(a1 + 8) = v6;
  result = a1;
  *(_QWORD *)a1 = a2;
  return result;
}

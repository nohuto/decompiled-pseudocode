/*
 * XREFs of ?FindAll@?$consume_Windows_UI_WindowManagement_IWindowingEnvironmentStatics@UIWindowingEnvironmentStatics@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x1805B8BDC
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_7ccb0e45379eda7a4635e112a63cbc6f_@@CA?AU?$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@AEBUIWindowingEnvironmentStatics@WindowManagement@UI@56@@Z @ 0x1805B6F40 (-_lambda_invoker_cdecl_@_lambda_7ccb0e45379eda7a4635e112a63cbc6f_@@CA-AU-$IVectorView@UWindowing.c)
 *     ?TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUDisplayRegion@WindowManagement@UI@67@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x1805BAE5C (-TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_WindowManagement_IWindowingEnvironmentStatics<winrt::Windows::UI::WindowManagement::IWindowingEnvironmentStatics>::FindAll(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}

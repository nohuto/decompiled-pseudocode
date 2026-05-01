/*
 * XREFs of ?find_interface@?$implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@UIExecuteCommand@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180701830
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // r9
  __int64 result; // rax
  bool v5; // al
  __int64 v6; // r10

  if ( winrt::operator==(a2, &winrt::impl::guid_v<IInspectable>) )
  {
    result = v2 - 8;
    if ( v2 == 16 )
      return 0LL;
  }
  else
  {
    v5 = winrt::operator==(v3, winrt::impl::guid_v<IExecuteCommand>);
    return v6 & -(__int64)v5;
  }
  return result;
}

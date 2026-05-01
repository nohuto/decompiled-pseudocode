/*
 * XREFs of ?find_interface@?$implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowFactoryInternal@345@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180638B50
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // al
  __int64 v3; // r8

  v2 = winrt::operator==(a2, winrt::impl::guid_v<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>);
  return (v3 - 8) & -(__int64)v2;
}

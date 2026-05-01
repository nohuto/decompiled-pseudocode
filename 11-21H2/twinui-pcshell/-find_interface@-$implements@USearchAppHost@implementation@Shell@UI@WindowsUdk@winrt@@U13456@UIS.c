/*
 * XREFs of ?find_interface@?$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801A2BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r8

  if ( winrt::operator==(a2, winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost>) )
  {
    v4 = v3 + 16;
    return v4 & -(__int64)(v3 != 0);
  }
  if ( winrt::operator==(v2, winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost2>) )
  {
    v4 = v3 + 24;
    return v4 & -(__int64)(v3 != 0);
  }
  if ( winrt::operator==(v5, winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost3>) )
  {
    v4 = v3 + 32;
    return v4 & -(__int64)(v3 != 0);
  }
  return v6;
}

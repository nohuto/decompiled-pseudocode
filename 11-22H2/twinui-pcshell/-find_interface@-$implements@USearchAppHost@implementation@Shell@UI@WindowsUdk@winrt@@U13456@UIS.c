/*
 * XREFs of ?find_interface@?$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D86B0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // r10
  __int64 v7; // rax
  __int64 v9; // rax

  if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost>) )
  {
    v9 = v3 + 16;
    return v9 & -(__int64)(v3 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(v2, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost2>) )
  {
    v9 = v3 + 24;
    return v9 & -(__int64)(v3 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(v4, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost3>) )
  {
    v9 = v3 + 32;
    return v9 & -(__int64)(v3 != 0);
  }
  v7 = *v6 - winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost4>;
  if ( *v6 == winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost4> )
    v7 = v6[1] - 0x4A236E019E7CDA95LL;
  if ( !v7 )
  {
    v9 = v3 + 40;
    return v9 & -(__int64)(v3 != 0);
  }
  return v5;
}

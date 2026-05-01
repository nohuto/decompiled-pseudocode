/*
 * XREFs of ?IsBootCorrelationIdForSessionPresent@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NXZ @ 0x180278230
 * Callers:
 *     ?CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ @ 0x1802774F4 (-CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x180466940 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool winrt::Windows::Internal::Shell::implementation::Utils::IsBootCorrelationIdForSessionPresent(void)
{
  winrt::hstring *v0; // rax
  winrt::hstring *v1; // rax
  const WCHAR *v2; // rax
  bool v3; // bl
  void *v5; // [rsp+50h] [rbp+8h] BYREF
  void *v6; // [rsp+58h] [rbp+10h] BYREF
  HKEY v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  v0 = winrt::hstring::hstring((winrt::hstring *)&v6, L"Software\\Microsoft\\Windows\\RemoteSystemIntegration\\");
  v1 = (winrt::hstring *)winrt::operator+(&v5, v0, L"SystemId_boot");
  v2 = winrt::hstring::c_str(v1);
  v3 = RegGetValueW(HKEY_CURRENT_USER, v2, L"CorrelationId", 2u, 0LL, 0LL, 0LL) == 0;
  winrt::hstring::~hstring(&v5);
  winrt::hstring::~hstring(&v6);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v7);
  return v3;
}

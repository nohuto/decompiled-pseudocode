/*
 * XREFs of ?CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ @ 0x1802774F4
 * Callers:
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008A48C (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$CorrelationIdCopied@AEAY0BAE@G@CloudPCTelemetry@@SAXAEAY0BAE@G@Z @ 0x180276A24 (--$CorrelationIdCopied@AEAY0BAE@G@CloudPCTelemetry@@SAXAEAY0BAE@G@Z.c)
 *     ?IsBootCorrelationIdForSessionPresent@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NXZ @ 0x180278230 (-IsBootCorrelationIdForSessionPresent@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x180466940 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18050C18C (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x180706530 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
void winrt::Windows::Internal::Shell::implementation::Utils::CopyCorrelationIdForBootUserSession(void)
{
  const unsigned __int16 *v0; // r8
  winrt::hstring *v1; // rax
  winrt::hstring *v2; // rax
  const WCHAR *v3; // rax
  bool v4; // bl
  __int64 v5; // rax
  unsigned int v6; // eax
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  void *v8; // [rsp+58h] [rbp-A8h] BYREF
  void *v9; // [rsp+60h] [rbp-A0h] BYREF
  HKEY *p_hKey; // [rsp+68h] [rbp-98h] BYREF
  HKEY phkResult; // [rsp+70h] [rbp-90h] BYREF
  char v12; // [rsp+78h] [rbp-88h]
  _WORD Data[264]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  if ( !winrt::Windows::Internal::Shell::implementation::Utils::IsBootCorrelationIdForSessionPresent() )
  {
    memset_0(Data, 0, 0x208uLL);
    hKey = 0LL;
    CloudPCHelpers::GetCorrelationId(Data, (wchar_t *)L"SystemId_boot", v0);
    p_hKey = &hKey;
    phkResult = 0LL;
    v12 = 1;
    v1 = winrt::hstring::hstring((winrt::hstring *)&v9, L"Software\\Microsoft\\Windows\\RemoteSystemIntegration\\");
    v2 = (winrt::hstring *)winrt::operator+(&v8, v1, L"SystemId_boot");
    v3 = winrt::hstring::c_str(v2);
    v4 = RegCreateKeyExW(HKEY_CURRENT_USER, v3, 0, 0LL, 1u, 0x20006u, 0LL, &phkResult, 0LL) == 0;
    winrt::hstring::~hstring(&v8);
    winrt::hstring::~hstring(&v9);
    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(&p_hKey);
    if ( v4 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( Data[v5] );
      v6 = RegSetValueExW(hKey, L"CorrelationId", 0, 1u, (const BYTE *)Data, 2 * v5 + 2);
      if ( v6 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0xB4,
          (int)"pcshell\\twinui\\cloudpc\\lib\\Utils.h",
          (const char *)v6);
      else
        CloudPCTelemetry::CorrelationIdCopied<unsigned short (&)[260]>((__int64)Data);
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  }
}

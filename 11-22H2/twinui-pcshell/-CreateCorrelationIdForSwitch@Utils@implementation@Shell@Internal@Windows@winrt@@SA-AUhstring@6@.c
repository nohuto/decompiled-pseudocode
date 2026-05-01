/*
 * XREFs of ?CreateCorrelationIdForSwitch@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@U76@@Z @ 0x18070FBE4
 * Callers:
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180712008 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180714D9C (-LaunchForSwitchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1800B54E0 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

// Hidden C++ exception states: #wind=5
volatile signed __int32 *__fastcall winrt::Windows::Internal::Shell::implementation::Utils::CreateCorrelationIdForSwitch(
        volatile signed __int32 *a1,
        volatile signed __int32 **a2)
{
  HRESULT v4; // eax
  int v6; // eax
  winrt::hstring *v7; // rax
  winrt::hstring *v8; // rax
  const WCHAR *v9; // rax
  bool v10; // si
  __int64 v11; // rax
  struct winrt::impl::hstring_header *v12; // rdx
  unsigned int v13; // r8d
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  winrt::impl *v15; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v16; // [rsp+60h] [rbp-A0h] BYREF
  HKEY *p_hKey; // [rsp+68h] [rbp-98h]
  HKEY phkResult; // [rsp+70h] [rbp-90h] BYREF
  char v19; // [rsp+78h] [rbp-88h]
  volatile signed __int32 **v20; // [rsp+88h] [rbp-78h]
  GUID pguid; // [rsp+90h] [rbp-70h] BYREF
  wchar_t Data[40]; // [rsp+A0h] [rbp-60h] BYREF
  OLECHAR sz; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t v24[39]; // [rsp+F2h] [rbp-Eh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v16 = a1;
  v20 = a2;
  pguid = 0LL;
  hKey = 0LL;
  v4 = CoCreateGuid(&pguid);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E,
      (int)"pcshell\\twinui\\cloudpc\\lib\\Utils.h",
      (const char *)(unsigned int)v4);
LABEL_3:
    winrt::hstring::hstring((winrt::hstring *)a1, &LocaleName);
    goto LABEL_4;
  }
  memset_0(&sz, 0, 0x4EuLL);
  memset_0(Data, 0, 0x4AuLL);
  if ( StringFromGUID2(&pguid, &sz, 39) != 39 )
    goto LABEL_3;
  v24[36] = 0;
  v6 = StringCchCopyW(Data, 37LL, v24);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x67,
      (int)"pcshell\\twinui\\cloudpc\\lib\\Utils.h",
      (const char *)(unsigned int)v6);
    Data[0] = 0;
  }
  p_hKey = &hKey;
  phkResult = 0LL;
  v19 = 1;
  v7 = winrt::hstring::hstring((winrt::hstring *)&v16, L"Software\\Microsoft\\Windows\\RemoteSystemIntegration\\");
  v8 = (winrt::hstring *)winrt::operator+((__int64)&v15, (__int64)v7, (__int64)a2);
  v9 = winrt::hstring::c_str(v8);
  v10 = RegCreateKeyExW(HKEY_CURRENT_USER, v9, 0, 0LL, 1u, 0x20006u, 0LL, &phkResult, 0LL) == 0;
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v15);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
  if ( v19 )
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      p_hKey,
      phkResult);
  if ( v10 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( Data[v11] );
    RegSetValueExW(hKey, L"CorrelationId", 0, 1u, (const BYTE *)Data, 2 * v11 + 2);
  }
  winrt::hstring::hstring((winrt::hstring *)&v15, Data);
  *(_QWORD *)a1 = winrt::impl::duplicate_hstring(v15, v12, v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v15);
LABEL_4:
  if ( hKey )
    RegCloseKey(hKey);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  return a1;
}

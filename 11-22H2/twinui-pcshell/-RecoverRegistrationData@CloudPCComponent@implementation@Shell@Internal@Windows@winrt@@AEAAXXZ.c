/*
 * XREFs of ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801ADAC0
 * Callers:
 *     ?perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801ADA70 (-perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1800B54E0 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C4EC4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x180466940 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ??$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@U76@U76@@winrt@@YA?A_P$$QEAUhstring@0@00@Z @ 0x1807027F0 (--$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@U76@U76@@winrt.c)
 *     ?IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x180706F84 (-IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEB.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x180725ECC (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 */

// Hidden C++ exception states: #wind=26
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::RecoverRegistrationData(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this)
{
  const WCHAR *v1; // rax
  PHKEY phkResult; // rdx
  DWORD v3; // edi
  const char *v4; // r9
  struct winrt::impl::hstring_header *v5; // rdx
  unsigned int v6; // r8d
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent *v7; // rcx
  bool IsValidRegistrationData; // bl
  DWORD v9; // ebx
  HKEY *v10; // rsi
  struct winrt::impl::hstring_header *v11; // rdx
  unsigned int v12; // r8d
  winrt::hstring *v13; // rax
  const WCHAR *v14; // rax
  struct winrt::impl::hstring_header *v15; // rdx
  unsigned int v16; // r8d
  struct winrt::impl::hstring_header *v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rax
  winrt::hstring *v21; // rax
  const WCHAR *v22; // rax
  struct winrt::impl::hstring_header *v23; // rdx
  unsigned int v24; // r8d
  struct winrt::impl::hstring_header *v25; // rdx
  unsigned int v26; // r8d
  struct winrt::impl::hstring_header *v27; // rdx
  unsigned int v28; // r8d
  const struct winrt::Windows::Internal::Shell::RegistrationData *v29; // rax
  bool v30; // [rsp+40h] [rbp-6E8h] BYREF
  HKEY v31; // [rsp+48h] [rbp-6E0h] BYREF
  DWORD v32; // [rsp+50h] [rbp-6D8h] BYREF
  DWORD cchName; // [rsp+54h] [rbp-6D4h] BYREF
  struct winrt::impl::hstring_header *v34; // [rsp+58h] [rbp-6D0h] BYREF
  struct winrt::impl::hstring_header *v35; // [rsp+60h] [rbp-6C8h] BYREF
  DWORD pcbData[2]; // [rsp+68h] [rbp-6C0h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-6B8h] BYREF
  winrt::impl *v38; // [rsp+78h] [rbp-6B0h] BYREF
  winrt::impl *v39; // [rsp+80h] [rbp-6A8h] BYREF
  winrt::impl *v40; // [rsp+88h] [rbp-6A0h] BYREF
  winrt::impl *v41; // [rsp+90h] [rbp-698h] BYREF
  __int64 v42; // [rsp+98h] [rbp-690h] BYREF
  winrt::impl *v43; // [rsp+A0h] [rbp-688h] BYREF
  winrt::impl *v44; // [rsp+A8h] [rbp-680h] BYREF
  struct winrt::impl::hstring_header *v45; // [rsp+B0h] [rbp-678h] BYREF
  winrt::impl *v46; // [rsp+B8h] [rbp-670h] BYREF
  volatile signed __int32 *v47; // [rsp+C0h] [rbp-668h] BYREF
  volatile signed __int32 *v48; // [rsp+C8h] [rbp-660h] BYREF
  volatile signed __int32 *v49; // [rsp+D0h] [rbp-658h] BYREF
  volatile signed __int32 *v50; // [rsp+D8h] [rbp-650h] BYREF
  WCHAR Name[264]; // [rsp+E0h] [rbp-648h] BYREF
  WCHAR v52[264]; // [rsp+2F0h] [rbp-438h] BYREF
  unsigned __int16 pvData[264]; // [rsp+500h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+728h] [rbp+0h]

  hKey = 0LL;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  v1 = winrt::hstring::c_str((winrt::hstring *)&c_remoteSystemAvailabilityRegPath);
  RegOpenKeyExW(HKEY_CURRENT_USER, v1, 0, 0x20019u, phkResult);
  v3 = 0;
  try
  {
    while ( 1 )
    {
      cchName = 260;
      if ( RegEnumKeyExW(hKey, v3, Name, &cchName, 0LL, 0LL, 0LL, 0LL) )
        break;
      winrt::hstring::hstring((winrt::hstring *)&v38, Name);
      v31 = (HKEY)winrt::impl::duplicate_hstring(v38, v5, v6);
      IsValidRegistrationData = winrt::Windows::Internal::Shell::implementation::CloudPCComponent::IsValidRegistrationData(
                                  v7,
                                  (const struct winrt::hstring *)&v31);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v31);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v38);
      if ( IsValidRegistrationData )
      {
        v31 = 0LL;
        v32 = 260;
        v9 = 0;
        v10 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v31);
        winrt::hstring::hstring((winrt::hstring *)&v39, Name);
        *(_QWORD *)pcbData = winrt::impl::duplicate_hstring(v39, v11, v12);
        v13 = (winrt::hstring *)winrt::operator+(
                                  (__int64)&v47,
                                  (__int64)&c_remoteSystemAvailabilityRegPath,
                                  (__int64)pcbData);
        v14 = winrt::hstring::c_str(v13);
        RegOpenKeyExW(HKEY_CURRENT_USER, v14, 0, 0x20019u, v10);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v47);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)pcbData);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v39);
        while ( !RegEnumKeyExW(v31, v9, v52, &v32, 0LL, 0LL, 0LL, 0LL) )
        {
          pcbData[0] = 520;
          winrt::hstring::hstring((winrt::hstring *)&v41, v52);
          v35 = winrt::impl::duplicate_hstring(v41, v15, v16);
          winrt::hstring::hstring((winrt::hstring *)&v40, Name);
          v34 = winrt::impl::duplicate_hstring(v40, v17, v18);
          v19 = winrt::operator+((__int64)&v50, (__int64)&c_remoteSystemAvailabilityRegPath, (__int64)&v34);
          v20 = winrt::operator+(&v49, v19, L"\\");
          v21 = (winrt::hstring *)winrt::operator+((__int64)&v48, v20, (__int64)&v35);
          v22 = winrt::hstring::c_str(v21);
          RegGetValueW(HKEY_CURRENT_USER, v22, L"displayName", 2u, 0LL, pvData, pcbData);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v48);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v49);
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v50);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v34);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v40);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v35);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v41);
          v30 = 1;
          winrt::hstring::hstring((winrt::hstring *)&v46, pvData);
          v45 = winrt::impl::duplicate_hstring(v46, v23, v24);
          winrt::hstring::hstring((winrt::hstring *)&v44, Name);
          v34 = winrt::impl::duplicate_hstring(v44, v25, v26);
          winrt::hstring::hstring((winrt::hstring *)&v43, v52);
          v35 = winrt::impl::duplicate_hstring(v43, v27, v28);
          v29 = (const struct winrt::Windows::Internal::Shell::RegistrationData *)winrt::make<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::hstring,winrt::hstring,winrt::hstring>(
                                                                                    &v42,
                                                                                    &v35,
                                                                                    &v34,
                                                                                    &v45);
          winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData(v29, &v30);
          if ( v42 )
            winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v42);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v35);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v43);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v34);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v44);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v45);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v46);
          ++v9;
          v32 = 260;
        }
        if ( v31 )
          RegCloseKey(v31);
      }
      ++v3;
    }
    if ( hKey )
      RegCloseKey(hKey);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x12E,
      (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v4);
  }
}

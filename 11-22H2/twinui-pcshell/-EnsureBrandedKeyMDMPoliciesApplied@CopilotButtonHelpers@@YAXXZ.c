/*
 * XREFs of ?EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ @ 0x180261A08
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1801CE4C6 (wcscmp_0.c)
 *     ?GetCopilotHardwareKeyAppEnforcedByPolicy@CopilotButtonHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802628A4 (-GetCopilotHardwareKeyAppEnforcedByPolicy@CopilotButtonHelpers@@YA-AV-$basic_string@GU-$char_tra.c)
 *     ?GetRegistryKeyStringValue@CopilotButtonHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG00@Z @ 0x1802637D4 (-GetRegistryKeyStringValue@CopilotButtonHelpers@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$a.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x18046A3A4 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CopilotButtonHelpers::EnsureBrandedKeyMDMPoliciesApplied(CopilotButtonHelpers *this, __int64 a2)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rcx
  int v4; // eax
  int v5; // eax
  const unsigned __int16 *v6; // r9
  int v7; // eax
  const wchar_t *v8; // rcx
  int v9; // eax
  wchar_t *String1[3]; // [rsp+20h] [rbp-19h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-1h]
  unsigned __int16 *v12[4]; // [rsp+40h] [rbp+7h] BYREF
  _BYTE v13[32]; // [rsp+60h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  CopilotButtonHelpers::GetRegistryKeyStringValue(String1, a2, L"BrandedKeyChoiceType");
  CopilotButtonHelpers::GetRegistryKeyStringValue(v13, v2, L"AppAumid");
  CopilotButtonHelpers::GetCopilotHardwareKeyAppEnforcedByPolicy(v12);
  if ( v12[2] )
  {
    v6 = (const unsigned __int16 *)v12;
    if ( v12[3] >= (unsigned __int16 *)8 )
      v6 = v12[0];
    v7 = SHRegSetString(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\Shell\\BrandedKey", L"AppAumid", v6);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x69,
        (int)"Internal\\Shell\\Inc\\CopilotHardwareButtonHelpers.h",
        (const char *)(unsigned int)v7,
        (int)String1[0]);
    v8 = (const wchar_t *)String1;
    if ( v11 >= 8 )
      v8 = String1[0];
    if ( !wcscmp_0(v8, L"App") )
    {
      v9 = SHRegSetString(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\Shell\\BrandedKey",
             L"BrandedKeyChoiceType",
             L"AppEnforcedByPolicy");
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x6F,
          (int)"Internal\\Shell\\Inc\\CopilotHardwareButtonHelpers.h",
          (const char *)(unsigned int)v9,
          (int)String1[0]);
    }
  }
  else
  {
    v3 = (const wchar_t *)String1;
    if ( v11 >= 8 )
      v3 = String1[0];
    if ( !wcscmp_0(v3, L"AppEnforcedByPolicy") )
    {
      v4 = SHRegSetString(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\Shell\\BrandedKey",
             L"AppAumid",
             &LocaleName);
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x62,
          (int)"Internal\\Shell\\Inc\\CopilotHardwareButtonHelpers.h",
          (const char *)(unsigned int)v4,
          (int)String1[0]);
      v5 = SHRegSetString(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\Shell\\BrandedKey",
             L"BrandedKeyChoiceType",
             L"App");
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x64,
          (int)"Internal\\Shell\\Inc\\CopilotHardwareButtonHelpers.h",
          (const char *)(unsigned int)v5,
          (int)String1[0]);
    }
  }
  std::wstring::_Tidy_deallocate((__int64)v12);
  std::wstring::_Tidy_deallocate((__int64)v13);
  std::wstring::_Tidy_deallocate((__int64)String1);
}

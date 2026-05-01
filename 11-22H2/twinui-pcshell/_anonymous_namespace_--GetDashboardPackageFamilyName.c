/*
 * XREFs of _anonymous_namespace_::GetDashboardPackageFamilyName @ 0x18023C07C
 * Callers:
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x18023A414 (_anonymous_namespace_--FindDashboardAppExtension.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetRegistrySettingString @ 0x18023C948 (_anonymous_namespace_--GetRegistrySettingString.c)
 *     _anonymous_namespace_::IsInternalDevUnlocked @ 0x18023F27C (_anonymous_namespace_--IsInternalDevUnlocked.c)
 */

// Hidden C++ exception states: #wind=4
winrt::hstring *__fastcall anonymous_namespace_::GetDashboardPackageFamilyName(winrt::hstring *this)
{
  __int64 RegistrySettingString; // rax
  _QWORD v4[2]; // [rsp+40h] [rbp-39h] BYREF
  __m128i si128; // [rsp+50h] [rbp-29h]
  _QWORD v6[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v7[4]; // [rsp+80h] [rbp+7h] BYREF
  _BYTE v8[32]; // [rsp+A0h] [rbp+27h] BYREF

  if ( (unsigned __int8)anonymous_namespace_::IsInternalDevUnlocked(this) )
  {
    v4[0] = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    std::wstring::wstring(v7, L"Package");
    std::wstring::wstring(v6, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh");
    RegistrySettingString = anonymous_namespace_::GetRegistrySettingString(v8, v6, v7, v4);
    if ( *(_QWORD *)(RegistrySettingString + 24) >= 8uLL )
      RegistrySettingString = *(_QWORD *)RegistrySettingString;
    winrt::hstring::hstring(this, (const unsigned __int16 *)RegistrySettingString);
    std::wstring::_Tidy_deallocate((__int64)v8);
    std::wstring::_Tidy_deallocate((__int64)v6);
    std::wstring::_Tidy_deallocate((__int64)v7);
    std::wstring::_Tidy_deallocate((__int64)v4);
  }
  else
  {
    winrt::hstring::hstring(this, &LocaleName);
  }
  return this;
}

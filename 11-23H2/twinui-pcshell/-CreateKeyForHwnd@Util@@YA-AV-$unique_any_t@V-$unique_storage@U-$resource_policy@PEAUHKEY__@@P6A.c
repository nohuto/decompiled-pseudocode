/*
 * XREFs of ?CreateKeyForHwnd@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_J@Z @ 0x180710218
 * Callers:
 *     ?SetValue@InProcPropertyStore@Util@@UEAAX_KAEBUhstring@winrt@@1@Z @ 0x180718C00 (-SetValue@InProcPropertyStore@Util@@UEAAX_KAEBUhstring@winrt@@1@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$check_win32@J@winrt@@YAXJ@Z @ 0x18070B840 (--$check_win32@J@winrt@@YAXJ@Z.c)
 *     ?GetKeyPathForHwnd@Util@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@Z @ 0x180711F60 (-GetKeyPathForHwnd@Util@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_J@Z.c)
 */

// Hidden C++ exception states: #wind=2
PHKEY __fastcall Util::CreateKeyForHwnd(PHKEY phkResult)
{
  __int64 KeyPathForHwnd; // rax
  LSTATUS Key; // eax
  _BYTE v5[32]; // [rsp+60h] [rbp-38h] BYREF

  *phkResult = 0LL;
  KeyPathForHwnd = Util::GetKeyPathForHwnd(v5);
  if ( *(_QWORD *)(KeyPathForHwnd + 24) >= 8uLL )
    KeyPathForHwnd = *(_QWORD *)KeyPathForHwnd;
  Key = RegCreateKeyExW(HKEY_CURRENT_USER, (LPCWSTR)KeyPathForHwnd, 0, 0LL, 1u, 0xF003Fu, 0LL, phkResult, 0LL);
  winrt::check_win32<long>(Key);
  std::wstring::_Tidy_deallocate((__int64)v5);
  return phkResult;
}

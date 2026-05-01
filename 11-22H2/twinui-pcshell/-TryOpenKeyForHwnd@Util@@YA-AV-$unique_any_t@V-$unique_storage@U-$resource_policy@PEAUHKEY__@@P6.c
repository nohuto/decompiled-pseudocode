/*
 * XREFs of ?TryOpenKeyForHwnd@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_J@Z @ 0x180719990
 * Callers:
 *     ?TryGetValue@InProcPropertyStore@Util@@UEAA?AUhstring@winrt@@_KAEBU34@@Z @ 0x1807193D0 (-TryGetValue@InProcPropertyStore@Util@@UEAA-AUhstring@winrt@@_KAEBU34@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$check_win32@J@winrt@@YAXJ@Z @ 0x18070B840 (--$check_win32@J@winrt@@YAXJ@Z.c)
 *     ?GetKeyPathForHwnd@Util@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@Z @ 0x180711F60 (-GetKeyPathForHwnd@Util@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
HKEY *__fastcall Util::TryOpenKeyForHwnd(HKEY *a1, __int64 a2)
{
  __int64 KeyPathForHwnd; // rax
  LSTATUS v4; // edi
  HKEY hKey; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v7[32]; // [rsp+40h] [rbp-38h] BYREF

  hKey = 0LL;
  KeyPathForHwnd = Util::GetKeyPathForHwnd((__int64)v7, a2);
  if ( *(_QWORD *)(KeyPathForHwnd + 24) >= 8uLL )
    KeyPathForHwnd = *(_QWORD *)KeyPathForHwnd;
  v4 = RegOpenKeyExW(HKEY_CURRENT_USER, (LPCWSTR)KeyPathForHwnd, 1u, 0xF003Fu, &hKey);
  std::wstring::_Tidy_deallocate((__int64)v7);
  if ( v4 == 2 )
  {
    *a1 = 0LL;
    *a1 = 0LL;
    if ( hKey )
      RegCloseKey(hKey);
  }
  else
  {
    winrt::check_win32<long>(v4);
    *a1 = hKey;
  }
  return a1;
}

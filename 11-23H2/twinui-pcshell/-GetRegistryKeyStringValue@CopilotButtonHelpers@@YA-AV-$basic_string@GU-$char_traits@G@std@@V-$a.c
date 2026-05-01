/*
 * XREFs of ?GetRegistryKeyStringValue@CopilotButtonHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG00@Z @ 0x1802637D4
 * Callers:
 *     ?EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ @ 0x180261A08 (-EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x18018D6DC (-SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803D4B3C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CopilotButtonHelpers::GetRegistryKeyStringValue(_QWORD *a1, __int64 a2, const unsigned __int16 *a3)
{
  _QWORD *v5; // rax
  _QWORD v7[4]; // [rsp+40h] [rbp-248h] BYREF
  unsigned __int16 v8[264]; // [rsp+60h] [rbp-228h] BYREF

  std::wstring::wstring(a1, &LocaleName);
  if ( !SHRegGetStringEx(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\Shell\\BrandedKey", a3, 2u, v8, 0x104u) )
  {
    v5 = std::wstring::wstring(v7, v8);
    std::wstring::operator=(a1, v5);
    std::wstring::_Tidy_deallocate((__int64)v7);
  }
  return a1;
}

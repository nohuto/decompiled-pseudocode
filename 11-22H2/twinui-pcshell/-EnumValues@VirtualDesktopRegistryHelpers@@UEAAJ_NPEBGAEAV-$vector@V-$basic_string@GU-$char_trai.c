/*
 * XREFs of ?EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180196470
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z @ 0x1801965E4 (-_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA?A_T$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1803F7A48 (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopRegistryHelpers::EnumValues(
        VirtualDesktopRegistryHelpers *a1,
        bool a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 v5; // dl
  __int64 v6; // rcx
  const WCHAR *v7; // r9
  LSTATUS v8; // eax
  unsigned int v9; // ebx
  DWORD i; // ebx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // [rsp+20h] [rbp-278h]
  DWORD cchValueName; // [rsp+40h] [rbp-258h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-250h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-248h] BYREF
  WCHAR ValueName[264]; // [rsp+70h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  if ( !VirtualDesktopRegistryHelpers::_IsKeyAvailable(a1, a2) )
    return 0LL;
  phkResult = 0LL;
  v8 = RegOpenKeyW(*(HKEY *)(v6 + 8LL * v5 + 16), v7, &phkResult);
  v9 = v8;
  if ( v8 )
  {
    if ( v8 > 0 )
      v9 = (unsigned __int16)v8 | 0x80070000;
    if ( phkResult )
      RegCloseKey(phkResult);
    return v9;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      cchValueName = 260;
      v12 = RegEnumValueW(phkResult, i, ValueName, &cchValueName, 0LL, 0LL, 0LL, 0LL);
      if ( v12 )
        break;
      std::wstring::wstring(v17, ValueName);
      std::vector<std::wstring>::emplace_back<std::wstring>(a4, v17);
      std::wstring::_Tidy_deallocate((__int64)v17);
    }
    if ( v12 == 259 )
    {
      if ( phkResult )
        RegCloseKey(phkResult);
      return 0LL;
    }
    else
    {
      v13 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x96,
              (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
              (const char *)v12,
              v14);
      if ( phkResult )
        RegCloseKey(phkResult);
      return v13;
    }
  }
}

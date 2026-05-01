/*
 * XREFs of ?EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1805FB5A0
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

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall VirtualDesktopRegistryHelpers::EnumKeys(
        VirtualDesktopRegistryHelpers *a1,
        char a2,
        __int64 a3,
        __int64 *a4)
{
  unsigned __int8 v5; // dl
  __int64 v6; // rcx
  const WCHAR *v7; // r9
  LSTATUS v9; // eax
  unsigned int v10; // ebx
  DWORD i; // ebx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  HKEY phkResult; // [rsp+20h] [rbp-258h] BYREF
  _QWORD v15[5]; // [rsp+28h] [rbp-250h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( !VirtualDesktopRegistryHelpers::_IsKeyAvailable(a1, a2) )
    return 0LL;
  phkResult = 0LL;
  v9 = RegOpenKeyW(*(HKEY *)(v6 + 8LL * v5 + 16), v7, &phkResult);
  v10 = v9;
  if ( v9 )
  {
    if ( v9 > 0 )
      v10 = (unsigned __int16)v9 | 0x80070000;
    if ( phkResult )
      RegCloseKey(phkResult);
    return v10;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v12 = RegEnumKeyW(phkResult, i, Name, 0x104u);
      if ( v12 )
        break;
      std::wstring::wstring(v15, Name);
      std::vector<std::wstring>::emplace_back<std::wstring>(a4, (__int64)v15);
      std::wstring::_Tidy_deallocate((__int64)v15);
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
              124LL,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
              (const char *)v12);
      if ( phkResult )
        RegCloseKey(phkResult);
      return v13;
    }
  }
}

/*
 * XREFs of ?GetPropertyValueFromRegistryKey@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG_N@Z @ 0x180575E0C
 * Callers:
 *     ?ModifyUnpackagedApp@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x180576314 (-ModifyUnpackagedApp@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180374980 (-reserve@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803B14F0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180575AD0 (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall GetPropertyValueFromRegistryKey(_OWORD *a1, HKEY a2, const WCHAR *a3)
{
  unsigned int v6; // eax
  BYTE *v7; // rax
  unsigned int v8; // eax
  LPBYTE *v9; // rdx
  unsigned int lpData; // [rsp+20h] [rbp-50h]
  unsigned int lpDataa; // [rsp+20h] [rbp-50h]
  DWORD cbData; // [rsp+30h] [rbp-40h] BYREF
  DWORD Type[2]; // [rsp+38h] [rbp-38h] BYREF
  LPBYTE v15[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  *(_QWORD *)Type = a1;
  cbData = 0;
  v6 = RegQueryValueExW(a2, a3, 0LL, Type, 0LL, &cbData);
  if ( v6 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      68LL,
      (__int64)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      (const char *)v6,
      lpData);
  *(_QWORD *)&v16 = 0LL;
  *((_QWORD *)&v16 + 1) = 7LL;
  LOWORD(v15[0]) = 0;
  std::wstring::reserve((void **)v15, (unsigned __int64)cbData >> 1);
  v7 = (BYTE *)v15;
  if ( *((_QWORD *)&v16 + 1) >= 8uLL )
    v7 = v15[0];
  v8 = RegQueryValueExW(a2, a3, 0LL, Type, v7, &cbData);
  if ( v8 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      71LL,
      (__int64)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      (const char *)v8,
      lpDataa);
  if ( Type[0] == 2 )
  {
    v9 = v15;
    if ( *((_QWORD *)&v16 + 1) >= 8uLL )
      v9 = (LPBYTE *)v15[0];
    wil::ExpandEnvironmentStringsW<std::wstring,256>((__int64)a1, (__int64)v9);
  }
  else
  {
    *a1 = *(_OWORD *)v15;
    a1[1] = v16;
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = 7LL;
    LOWORD(v15[0]) = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)v15);
  return a1;
}

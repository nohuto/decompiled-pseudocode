/*
 * XREFs of ?GetPropertyValueFromRegistryKey@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG_N@Z @ 0x180633C18
 * Callers:
 *     ?ModifyUnpackagedApp@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x180634138 (-ModifyUnpackagedApp@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1802E78DC (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 *     ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x18044A5B0 (-reserve@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
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
  DWORD Type[4]; // [rsp+38h] [rbp-38h] BYREF
  LPBYTE v15[2]; // [rsp+48h] [rbp-28h] BYREF
  __m128i si128; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  *(_QWORD *)Type = a1;
  cbData = 0;
  v6 = RegQueryValueExW(a2, a3, 0LL, Type, 0LL, &cbData);
  if ( v6 )
    wil::details::in1diag3::Throw_Win32(
      retaddr,
      68LL,
      (__int64)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      (const char *)v6,
      lpData);
  v15[0] = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  std::wstring::reserve((void **)v15, (unsigned __int64)cbData >> 1);
  v7 = (BYTE *)v15;
  if ( si128.m128i_i64[1] >= 8uLL )
    v7 = v15[0];
  v8 = RegQueryValueExW(a2, a3, 0LL, Type, v7, &cbData);
  if ( v8 )
    wil::details::in1diag3::Throw_Win32(
      retaddr,
      71LL,
      (__int64)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      (const char *)v8,
      lpDataa);
  if ( Type[0] == 2 )
  {
    v9 = v15;
    if ( si128.m128i_i64[1] >= 8uLL )
      v9 = (LPBYTE *)v15[0];
    wil::ExpandEnvironmentStringsW<std::wstring,256>((__int64)a1, (__int64)v9);
  }
  else
  {
    *a1 = *(_OWORD *)v15;
    a1[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v15[0]) = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)v15);
  return a1;
}

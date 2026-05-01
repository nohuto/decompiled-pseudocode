/*
 * XREFs of ?PackageFamilyNameToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180565AD0
 * Callers:
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1805655C4 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174FA4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180563BE8 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV-$basic_string@GU-$char_traits@G@st.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall Windows::Internal::FamilySafety::AppLimits::PackageFamilyNameToAppId(_OWORD *a1, _WORD *a2)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // r8
  _QWORD *v6; // rax
  __int128 v8; // [rsp+28h] [rbp-50h] BYREF
  __int128 v9; // [rsp+38h] [rbp-40h]
  _QWORD v10[4]; // [rsp+48h] [rbp-30h] BYREF

  v4 = std::wstring::wstring(v10, L"appx:");
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = std::wstring::append(v4, a2, v5);
  v8 = *(_OWORD *)v6;
  v9 = *((_OWORD *)v6 + 1);
  v6[2] = 0LL;
  v6[3] = 7LL;
  *(_WORD *)v6 = 0;
  std::wstring::_Tidy_deallocate((__int64)v10);
  Windows::Internal::FamilySafety::AppLimits::ToLowerCase(&v8);
  *a1 = v8;
  a1[1] = v9;
  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = 7LL;
  LOWORD(v8) = 0;
  std::wstring::_Tidy_deallocate((__int64)&v8);
  return a1;
}

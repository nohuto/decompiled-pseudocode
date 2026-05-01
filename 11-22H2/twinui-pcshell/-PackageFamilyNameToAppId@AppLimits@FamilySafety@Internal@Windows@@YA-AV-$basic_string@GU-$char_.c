/*
 * XREFs of ?PackageFamilyNameToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1806233E0
 * Callers:
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180622E64 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 * Callees:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x180090534 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180620690 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV-$basic_string@GU-$char_traits@G@st.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall Windows::Internal::FamilySafety::AppLimits::PackageFamilyNameToAppId(_OWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int128 v6; // [rsp+30h] [rbp-58h] BYREF
  __m128i si128; // [rsp+40h] [rbp-48h]
  _QWORD v8[4]; // [rsp+50h] [rbp-38h] BYREF

  v4 = std::wstring::wstring(v8, L"appx:");
  std::operator+<unsigned short>(&v6, v4, a2);
  std::wstring::_Tidy_deallocate((__int64)v8);
  Windows::Internal::FamilySafety::AppLimits::ToLowerCase(&v6);
  *a1 = v6;
  a1[1] = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v6) = 0;
  std::wstring::_Tidy_deallocate((__int64)&v6);
  return a1;
}

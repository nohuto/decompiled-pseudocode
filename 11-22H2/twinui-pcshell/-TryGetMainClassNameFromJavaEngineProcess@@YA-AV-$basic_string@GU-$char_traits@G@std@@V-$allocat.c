/*
 * XREFs of ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180629308
 * Callers:
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x180627B20 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180620690 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV-$basic_string@GU-$char_traits@G@st.c)
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180629120 (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180629434 (-TryGetProcessCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@Z.c)
 */

_QWORD *__fastcall TryGetMainClassNameFromJavaEngineProcess(_QWORD *a1)
{
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF

  TryGetProcessCommandLine(v3);
  if ( v3[2] )
  {
    Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v3);
    TryExtractJavaMainClassNameFromCommandLine(a1, (__int64)v3);
  }
  else
  {
    *a1 = 0LL;
    a1[2] = 0LL;
    a1[3] = 7LL;
  }
  std::wstring::_Tidy_deallocate((__int64)v3);
  return a1;
}

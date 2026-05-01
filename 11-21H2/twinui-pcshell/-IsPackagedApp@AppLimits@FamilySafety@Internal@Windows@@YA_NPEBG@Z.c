/*
 * XREFs of ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x1805647E4
 * Callers:
 *     ?GetDisplayName@AppUsageTracker@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180564640 (-GetDisplayName@AppUsageTracker@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ?IsAppActive@AppUsageTracker@@UEAA_NPEBG@Z @ 0x180564740 (-IsAppActive@AppUsageTracker@@UEAA_NPEBG@Z.c)
 *     ?TerminateApp@AppUsageTracker@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180564A40 (-TerminateApp@AppUsageTracker@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Window.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180126B8C (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Windows::Internal::FamilySafety::AppLimits::IsPackagedApp(
        Windows::Internal::FamilySafety::AppLimits *this,
        const unsigned __int16 *a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rdx
  int v4; // eax
  bool v5; // bl
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = std::wstring::wstring(v7, this);
  v3 = 5LL;
  if ( v2[2] < 5uLL )
    v3 = v2[2];
  if ( v2[3] >= 8uLL )
    v2 = (_QWORD *)*v2;
  LOBYTE(v4) = std::_Traits_compare<std::char_traits<unsigned short>>((__int64)v2, v3, (__int64)L"appx:", 5uLL);
  v5 = v4 == 0;
  std::wstring::_Tidy_deallocate((__int64)v7);
  return v5;
}

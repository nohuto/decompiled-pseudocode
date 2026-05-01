/*
 * XREFs of ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x1806218B4
 * Callers:
 *     ?GetDisplayName@AppUsageTracker@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180621690 (-GetDisplayName@AppUsageTracker@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ?IsAppActive@AppUsageTracker@@UEAA_NPEBG@Z @ 0x180621810 (-IsAppActive@AppUsageTracker@@UEAA_NPEBG@Z.c)
 *     ?TerminateApp@AppUsageTracker@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180621B30 (-TerminateApp@AppUsageTracker@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Window.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1802D21B6 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Windows::Internal::FamilySafety::AppLimits::IsPackagedApp(
        Windows::Internal::FamilySafety::AppLimits *this,
        const unsigned __int16 *a2)
{
  char *v2; // rax
  unsigned __int64 v3; // rdx
  int v4; // eax
  bool v5; // bl
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (char *)std::wstring::wstring(v7, this);
  v3 = 5LL;
  if ( *((_QWORD *)v2 + 2) < 5uLL )
    v3 = *((_QWORD *)v2 + 2);
  if ( *((_QWORD *)v2 + 3) >= 8uLL )
    v2 = *(char **)v2;
  LOBYTE(v4) = std::_Traits_compare<std::char_traits<unsigned short>>(v2, v3, (char *)L"appx:", 5uLL);
  v5 = v4 == 0;
  std::wstring::_Tidy_deallocate((__int64)v7);
  return v5;
}

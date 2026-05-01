/*
 * XREFs of ?GetDisplayName@AppUsageTracker@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180621690
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x1806218B4 (-IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppUsageTracker::GetDisplayName(
        __int64 a1,
        __int64 a2,
        Windows::Internal::FamilySafety::AppLimits *a3)
{
  __int64 v6; // rdi
  _BYTE v8[32]; // [rsp+30h] [rbp-48h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  if ( !Windows::Internal::FamilySafety::AppLimits::IsPackagedApp(a3, (const unsigned __int16 *)a2) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, Windows::Internal::FamilySafety::AppLimits *))(**(_QWORD **)(a1 + 88)
                                                                                                  + 80LL))(
           *(_QWORD *)(a1 + 88),
           v8,
           a3);
    if ( a2 != v6 )
    {
      std::wstring::_Tidy_deallocate(a2);
      *(_OWORD *)a2 = *(_OWORD *)v6;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(v6 + 16);
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 24) = 7LL;
      *(_WORD *)v6 = 0;
    }
    std::wstring::_Tidy_deallocate((__int64)v8);
  }
  return a2;
}

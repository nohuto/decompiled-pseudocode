/*
 * XREFs of ?TerminateApp@AppUsageTracker@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180621B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x1806218B4 (-IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z.c)
 */

__int64 __fastcall AppUsageTracker::TerminateApp(
        __int64 a1,
        Windows::Internal::FamilySafety::AppLimits *a2,
        unsigned int a3)
{
  __int64 v6; // rcx

  if ( !Windows::Internal::FamilySafety::AppLimits::IsPackagedApp(a2, (const unsigned __int16 *)a2) )
    return (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::FamilySafety::AppLimits *, _QWORD))(**(_QWORD **)(a1 + 88) + 56LL))(
             *(_QWORD *)(a1 + 88),
             a2,
             a3);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, Windows::Internal::FamilySafety::AppLimits *))(**(_QWORD **)(a1 + 80)
                                                                                               + 48LL))(
         *(_QWORD *)(a1 + 80),
         a2) )
  {
    v6 = *(_QWORD *)(a1 + 80);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 88);
  }
  return (*(__int64 (__fastcall **)(__int64, Windows::Internal::FamilySafety::AppLimits *, _QWORD))(*(_QWORD *)v6 + 56LL))(
           v6,
           a2,
           a3);
}

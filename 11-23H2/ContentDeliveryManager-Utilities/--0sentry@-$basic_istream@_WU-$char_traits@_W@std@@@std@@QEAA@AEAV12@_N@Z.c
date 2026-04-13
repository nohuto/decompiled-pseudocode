/*
 * XREFs of ??0sentry@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@_N@Z @ 0x1800B7100
 * Callers:
 *     ??5?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x1800B722C (--5-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800CFE24 (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 * Callees:
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x1800B8ABC (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::wistream::sentry::sentry(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  *(_QWORD *)a1 = a2;
  v3 = *(_QWORD *)(*(int *)(*(_QWORD *)a2 + 4LL) + a2 + 72);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *(_BYTE *)(a1 + 8) = std::wistream::_Ipfx(*(_QWORD *)a1);
  return a1;
}

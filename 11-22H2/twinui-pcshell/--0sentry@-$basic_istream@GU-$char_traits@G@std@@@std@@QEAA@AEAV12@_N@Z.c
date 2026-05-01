/*
 * XREFs of ??0sentry@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@_N@Z @ 0x1803E2DF8
 * Callers:
 *     ??$?5GU?$char_traits@G@std@@G@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@AEAV10@AEBU?$_Timeobj@GPEAUtm@@@0@@Z @ 0x1803E19EC (--$-5GU-$char_traits@G@std@@G@std@@YAAEAV-$basic_istream@GU-$char_traits@G@std@@@0@AEAV10@AEBU-$.c)
 *     ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x180694708 (--$getline@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@YAAEAV-$basic_istream@GU-$char_traits@G.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_istream<unsigned short>::sentry::sentry(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx

  *(_QWORD *)a1 = a2;
  v5 = std::basic_ios<unsigned short>::rdbuf(a2 + *(int *)(*(_QWORD *)a2 + 4LL));
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  LOBYTE(v6) = a3;
  *(_BYTE *)(a1 + 8) = std::basic_istream<unsigned short>::_Ipfx(*(_QWORD *)a1, v6);
  return a1;
}

/*
 * XREFs of ??1_Sentry_base@?$basic_istream@DU?$char_traits@D@std@@@std@@QEAA@XZ @ 0x18001E500
 * Callers:
 *     ??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QEAA@XZ @ 0x18001E5A4 (--1sentry@-$basic_ostream@DU-$char_traits@D@std@@@std@@QEAA@XZ.c)
 *     ??$getline@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@$$QEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@D@Z @ 0x180050DF0 (--$getline@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@YAAEAV-$basic_istream@DU-$char_traits@D.c)
 *     ??1sentry@?$basic_istream@DU?$char_traits@D@std@@@std@@QEAA@XZ @ 0x180051334 (--1sentry@-$basic_istream@DU-$char_traits@D@std@@@std@@QEAA@XZ.c)
 *     ??$?5DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@$$QEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z @ 0x18008EDFC (--$-5DU-$char_traits@D@std@@V-$allocator@D@1@@std@@YAAEAV-$basic_istream@DU-$char_traits@D@std@@.c)
 *     _std::basic_istream_char_std::char_traits_char___::sentry::sentry_::_1_::dtor$0 @ 0x1800E4893 (_std--basic_istream_char_std--char_traits_char___--sentry--sentry_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::istream::_Sentry_base::~_Sentry_base(__int64 a1)
{
  __int64 result; // rax

  result = std::ios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}

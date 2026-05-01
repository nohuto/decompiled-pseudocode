/*
 * XREFs of ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1803D5574
 * Callers:
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1803D4330 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     _std::operator___unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$0 @ 0x1803D4547 (_std--operator___unsigned_short_std--char_traits_unsigned_short____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_ostream<unsigned short>::sentry::~sentry(_QWORD *a1)
{
  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(*a1);
  return std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base((__int64)a1);
}

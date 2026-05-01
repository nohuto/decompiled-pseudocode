/*
 * XREFs of ??1sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x180600CB4
 * Callers:
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x1805FF188 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     _std::operator___wchar_t_std::char_traits_wchar_t____::_1_::dtor$0 @ 0x1805FF39F (_std--operator___wchar_t_std--char_traits_wchar_t____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wostream::sentry::~sentry(_QWORD *a1)
{
  if ( !std::uncaught_exception() )
    std::wostream::_Osfx(*a1);
  return std::wostream::_Sentry_base::~_Sentry_base((__int64)a1);
}

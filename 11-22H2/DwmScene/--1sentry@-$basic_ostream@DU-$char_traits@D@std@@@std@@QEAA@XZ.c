/*
 * XREFs of ??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QEAA@XZ @ 0x18001E5A4
 * Callers:
 *     ??$_Insert_string@DU?$char_traits@D@std@@_K@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@QEBD_K@Z @ 0x18001DFB4 (--$_Insert_string@DU-$char_traits@D@std@@_K@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@0.c)
 *     ??$?6U?$char_traits@D@std@@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@PEBD@Z @ 0x1800203F0 (--$-6U-$char_traits@D@std@@@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@0@AEAV10@PEBD@Z.c)
 *     _std::operator___std::char_traits_char____::_1_::dtor$0 @ 0x1800E4881 (_std--operator___std--char_traits_char____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::ostream::sentry::~sentry(_QWORD *a1)
{
  std::ostream::_Osfx(*a1);
  return std::istream::_Sentry_base::~_Sentry_base((__int64)a1);
}

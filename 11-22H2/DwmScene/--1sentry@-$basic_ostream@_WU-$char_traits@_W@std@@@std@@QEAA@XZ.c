/*
 * XREFs of ??1sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x18003205C
 * Callers:
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEBD@Z @ 0x18002D7D0 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ??$_Insert_string@_WU?$char_traits@_W@std@@_K@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@QEB_W_K@Z @ 0x18002F3AC (--$_Insert_string@_WU-$char_traits@_W@std@@_K@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std.c)
 *     _std::_Insert_string_wchar_t_std::char_traits_wchar_t__unsigned___int64__::_1_::dtor$0 @ 0x1800E51A5 (_std--_Insert_string_wchar_t_std--char_traits_wchar_t__unsigned___int64__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wostream::sentry::~sentry(_QWORD *a1)
{
  std::wostream::_Osfx(*a1);
  return std::wostream::_Sentry_base::~_Sentry_base((__int64)a1);
}

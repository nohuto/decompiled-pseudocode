/*
 * XREFs of ?c_str@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAPEBDXZ @ 0x1800D7788
 * Callers:
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x180101E34 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::string::c_str(_QWORD *a1)
{
  if ( a1[3] >= 0x10uLL )
    return (_QWORD *)*a1;
  return a1;
}

/*
 * XREFs of ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180044CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x18002AD04 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEBD@Z.c)
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180044C60 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

_QWORD *__fastcall std::_Iostream_error_category::message(__int64 a1, _QWORD *a2, int a3)
{
  if ( a3 == 1 )
    std::string::string(a2, "iostream stream error");
  else
    std::_Generic_error_category::message(a1, a2, a3);
  return a2;
}

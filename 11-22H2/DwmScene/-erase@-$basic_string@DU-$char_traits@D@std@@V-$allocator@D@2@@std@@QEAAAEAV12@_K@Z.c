/*
 * XREFs of ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K@Z @ 0x180051EBC
 * Callers:
 *     ??$getline@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@$$QEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@D@Z @ 0x180050DF0 (--$getline@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@YAAEAV-$basic_istream@DU-$char_traits@D.c)
 *     ??$?5DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@$$QEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z @ 0x18008EDFC (--$-5DU-$char_traits@D@std@@V-$allocator@D@1@@std@@YAAEAV-$basic_istream@DU-$char_traits@D@std@@.c)
 * Callees:
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@D@std@@@std@@QEBAX_K@Z @ 0x18001DB50 (-_Check_offset@-$_String_val@U-$_Simple_types@D@std@@@std@@QEBAX_K@Z.c)
 */

_QWORD *__fastcall std::string::erase(_QWORD *a1)
{
  _BYTE *v2; // rax

  std::_String_val<std::_Simple_types<char>>::_Check_offset((__int64)a1, 0LL);
  v2 = a1;
  if ( a1[3] >= 0x10uLL )
    v2 = (_BYTE *)*a1;
  a1[2] = 0LL;
  *v2 = 0;
  return a1;
}

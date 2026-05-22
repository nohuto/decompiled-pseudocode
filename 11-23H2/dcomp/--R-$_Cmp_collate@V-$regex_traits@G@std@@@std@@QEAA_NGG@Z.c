/*
 * XREFs of ??R?$_Cmp_collate@V?$regex_traits@G@std@@@std@@QEAA_NGG@Z @ 0x18014EF80
 * Callers:
 *     ??$_Cmp_chrange@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@PEBGU?$_Cmp_collate@V?$regex_traits@G@std@@@2@@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0PEBG1U?$_Cmp_collate@V?$regex_traits@G@std@@@0@@Z @ 0x18014E080 (--$_Cmp_chrange@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@PEB.c)
 *     ??$_Cmp_chrange@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@U?$_Cmp_collate@V?$regex_traits@G@std@@@2@@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@000U?$_Cmp_collate@V?$regex_traits@G@std@@@0@@Z @ 0x18014E190 (--$_Cmp_chrange@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@V12.c)
 * Callees:
 *     ?translate@?$_Regex_traits@G@std@@QEBAGG@Z @ 0x180150D2C (-translate@-$_Regex_traits@G@std@@QEBAGG@Z.c)
 */

bool __fastcall std::_Cmp_collate<std::regex_traits<unsigned short>>::operator()(
        _QWORD *a1,
        __int64 a2,
        unsigned __int16 a3)
{
  __int64 v3; // rdi
  __int16 v5; // bx

  v3 = *a1;
  v5 = std::_Regex_traits<unsigned short>::translate(*a1, a2);
  return v5 == (__int16)std::_Regex_traits<unsigned short>::translate(v3, a3);
}

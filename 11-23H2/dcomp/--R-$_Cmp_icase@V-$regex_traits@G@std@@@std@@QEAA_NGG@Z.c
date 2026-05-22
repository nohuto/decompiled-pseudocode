/*
 * XREFs of ??R?$_Cmp_icase@V?$regex_traits@G@std@@@std@@QEAA_NGG@Z @ 0x1800B72B2
 * Callers:
 *     ??$_Cmp_chrange@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@PEBGU?$_Cmp_icase@V?$regex_traits@G@std@@@2@@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0PEBG1U?$_Cmp_icase@V?$regex_traits@G@std@@@0@@Z @ 0x18014E108 (--$_Cmp_chrange@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@s_ea_18014E108.c)
 *     ??$_Cmp_chrange@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@U?$_Cmp_icase@V?$regex_traits@G@std@@@2@@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@000U?$_Cmp_icase@V?$regex_traits@G@std@@@0@@Z @ 0x18014E21C (--$_Cmp_chrange@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@s_ea_18014E21C.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Cmp_icase<std::regex_traits<unsigned short>>::operator()(
        __int64 *a1,
        unsigned __int16 a2,
        unsigned __int16 a3)
{
  __int64 v3; // rdi
  unsigned __int16 v5; // bx

  v3 = *a1;
  v5 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*a1 + 8), a3);
  return (unsigned __int16)std::ctype<unsigned short>::tolower(*(_QWORD *)(v3 + 8), a2) == v5;
}

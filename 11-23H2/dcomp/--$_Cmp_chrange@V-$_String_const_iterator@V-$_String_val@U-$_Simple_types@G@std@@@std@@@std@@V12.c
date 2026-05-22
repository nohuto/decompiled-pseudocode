/*
 * XREFs of ??$_Cmp_chrange@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@U?$_Cmp_collate@V?$regex_traits@G@std@@@2@@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@000U?$_Cmp_collate@V?$regex_traits@G@std@@@0@@Z @ 0x18014E190
 * Callers:
 *     ??$_Compare@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@V?$regex_traits@G@2@@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@000AEBV?$regex_traits@G@0@W4syntax_option_type@regex_constants@0@@Z @ 0x18014E358 (--$_Compare@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@V12@V-$.c)
 * Callees:
 *     ??R?$_Cmp_collate@V?$regex_traits@G@std@@@std@@QEAA_NGG@Z @ 0x18014EF80 (--R-$_Cmp_collate@V-$regex_traits@G@std@@@std@@QEAA_NGG@Z.c)
 */

unsigned __int16 **std::_Cmp_chrange<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_Cmp_collate<std::regex_traits<unsigned short>>>(
        unsigned __int16 **a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        ...)
{
  unsigned __int16 *i; // rbp
  __int64 v10; // r8
  __int64 v11; // rdx
  va_list va; // [rsp+58h] [rbp+30h] BYREF

  va_start(va, a5);
  for ( i = a2; i != a3; ++i )
  {
    if ( a4 == a5 )
      goto LABEL_8;
    v10 = *a4;
    v11 = *i;
    ++a4;
    if ( !(unsigned __int8)std::_Cmp_collate<std::regex_traits<unsigned short>>::operator()(va, v11, v10) )
    {
      *a1 = a2;
      return a1;
    }
  }
  if ( a4 != a5 )
    i = a2;
LABEL_8:
  *a1 = i;
  return a1;
}

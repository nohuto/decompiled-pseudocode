/*
 * XREFs of ??$_Cmp_chrange@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@PEBGU?$_Cmp_icase@V?$regex_traits@G@std@@@2@@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0PEBG1U?$_Cmp_icase@V?$regex_traits@G@std@@@0@@Z @ 0x18014E108
 * Callers:
 *     ??$_Compare@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@PEBGV?$regex_traits@G@2@@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0PEBG1AEBV?$regex_traits@G@0@W4syntax_option_type@regex_constants@0@@Z @ 0x18014E2A8 (--$_Compare@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@PEBGV-$.c)
 * Callees:
 *     ??R?$_Cmp_icase@V?$regex_traits@G@std@@@std@@QEAA_NGG@Z @ 0x1800B72B2 (--R-$_Cmp_icase@V-$regex_traits@G@std@@@std@@QEAA_NGG@Z.c)
 */

unsigned __int16 **std::_Cmp_chrange<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short const *,std::_Cmp_icase<std::regex_traits<unsigned short>>>(
        unsigned __int16 **a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        ...)
{
  unsigned __int16 *i; // rsi
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // dx
  va_list va; // [rsp+58h] [rbp+30h] BYREF

  va_start(va, a5);
  for ( i = a2; i != a3; ++i )
  {
    if ( a4 == a5 )
      goto LABEL_8;
    v10 = *a4;
    v11 = *i;
    ++a4;
    if ( !std::_Cmp_icase<std::regex_traits<unsigned short>>::operator()((__int64 *)va, v11, v10) )
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

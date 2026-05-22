/*
 * XREFs of ??$_Compare@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@V?$regex_traits@G@2@@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@000AEBV?$regex_traits@G@0@W4syntax_option_type@regex_constants@0@@Z @ 0x18014E358
 * Callers:
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 * Callees:
 *     ??$_Cmp_chrange@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@U?$_Cmp_collate@V?$regex_traits@G@std@@@2@@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@000U?$_Cmp_collate@V?$regex_traits@G@std@@@0@@Z @ 0x18014E190 (--$_Cmp_chrange@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@V12.c)
 *     ??$_Cmp_chrange@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@U?$_Cmp_icase@V?$regex_traits@G@std@@@2@@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@000U?$_Cmp_icase@V?$regex_traits@G@std@@@0@@Z @ 0x18014E21C (--$_Cmp_chrange@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@s_ea_18014E21C.c)
 */

unsigned __int16 **__fastcall std::_Compare<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::regex_traits<unsigned short>>(
        unsigned __int16 **a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int16 a7)
{
  bool v7; // zf
  unsigned __int16 *v8; // r11
  unsigned __int16 **v10; // rax
  unsigned __int16 *v11; // rdi
  unsigned __int16 v12; // r10
  unsigned __int16 *v13; // rax
  unsigned __int16 *v15; // [rsp+40h] [rbp+8h] BYREF

  v7 = (a7 & 0x100) == 0;
  v8 = a2;
  *a1 = a3;
  if ( !v7 )
  {
    v10 = std::_Cmp_chrange<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_Cmp_icase<std::regex_traits<unsigned short>>>(
            &v15,
            a2,
            a3,
            a4,
            a5,
            a6);
LABEL_5:
    v8 = *v10;
    goto LABEL_13;
  }
  if ( (a7 & 0x800) != 0 )
  {
    v10 = std::_Cmp_chrange<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_Cmp_collate<std::regex_traits<unsigned short>>>(
            &v15,
            a2,
            a3,
            a4,
            a5,
            a6);
    goto LABEL_5;
  }
  v11 = a2;
  while ( v11 != a3 )
  {
    if ( a4 == a5 )
      goto LABEL_12;
    v12 = *a4;
    v13 = a2++;
    ++a4;
    v11 = a2;
    if ( *v13 != v12 )
      goto LABEL_13;
  }
  if ( a4 != a5 )
    goto LABEL_13;
LABEL_12:
  v8 = a2;
LABEL_13:
  *a1 = v8;
  return a1;
}

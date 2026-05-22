/*
 * XREFs of ??$?0U?$char_traits@G@std@@V?$allocator@G@1@@?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@W4syntax_option_type@regex_constants@1@@Z @ 0x18007D000
 * Callers:
 *     ?GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180021934 (-GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PE.c)
 * Callees:
 *     ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x18007D0C8 (--$use_facet@V-$collate@G@std@@@std@@YAAEBV-$collate@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18007D19C (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?_Compile@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ @ 0x18007D2C0 (-_Compile@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ.c)
 *     ??0?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAA@AEBV?$regex_traits@G@1@PEBG1W4syntax_option_type@regex_constants@1@@Z @ 0x18007D3BC (--0-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAA@AEBV-$regex_traits@G@1@PEBG1W4syntax_option_.c)
 *     ?_Tidy@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18007D4A0 (-_Tidy@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x180080744 (-_Tidy@-$vector@IV-$allocator@I@std@@@std@@AEAAXXZ.c)
 */

__int64 *__fastcall std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::basic_regex<unsigned short,std::regex_traits<unsigned short>>(
        __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  char *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  _BYTE v9[32]; // [rsp+30h] [rbp-98h] BYREF
  char v10[112]; // [rsp+50h] [rbp-78h] BYREF

  *a1 = 0LL;
  a1[4] = (__int64)std::locale::_Init(1);
  a1[1] = std::use_facet<std::collate<unsigned short>>((std::locale *)(a1 + 3));
  a1[2] = std::use_facet<std::ctype<unsigned short>>((std::locale *)(a1 + 3));
  v4 = a2;
  if ( a2[3] >= 8uLL )
    v4 = (_QWORD *)*a2;
  v5 = (char *)v4 + 2 * a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>(
    v9,
    a1 + 1,
    a2,
    v5);
  v6 = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Compile(v9);
  v7 = v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 44));
  std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Tidy(a1);
  *a1 = v7;
  std::vector<unsigned int>::_Tidy(v10);
  return a1;
}

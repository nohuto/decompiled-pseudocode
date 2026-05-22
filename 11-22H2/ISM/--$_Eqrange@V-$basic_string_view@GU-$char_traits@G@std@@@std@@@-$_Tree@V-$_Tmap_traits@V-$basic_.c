/*
 * XREFs of ??$_Eqrange@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x1800BCB80
 * Callers:
 *     ?CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BDB44 (-CheckConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$char_tra.c)
 *     ?CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BDBD4 (-CheckModifiedConstantExistence@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$.c)
 * Callees:
 *     ??$?RAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x1800BC904 (--$-RAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV-$basic_string_view@GU.c)
 *     ??$?RAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800BC944 (--$-RAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@AEBV-$basic_string@GU-$char_traits@G@s.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Eqrange<std::basic_string_view<unsigned short>>(
        __int64 a1,
        _QWORD *a2,
        __m128i *a3)
{
  __int64 *v3; // rbp
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  _QWORD *result; // rax

  v3 = *(__int64 **)a1;
  v6 = *(__int64 **)a1;
  v7 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  v8 = v7;
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( (unsigned __int8)std::less<void>::operator()<std::wstring const &,std::basic_string_view<unsigned short> const &>(
                            a1,
                            v8 + 4,
                            a3) )
    {
      v8 = (__int64 *)v8[2];
    }
    else
    {
      if ( *((_BYTE *)v6 + 25)
        && (unsigned __int8)std::less<void>::operator()<std::basic_string_view<unsigned short> const &,std::wstring const &>(
                              a1,
                              a3,
                              v8 + 4) )
      {
        v6 = v8;
      }
      v3 = v8;
      v8 = (__int64 *)*v8;
    }
  }
  if ( !*((_BYTE *)v6 + 25) )
    v7 = (__int64 *)*v6;
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( (unsigned __int8)std::less<void>::operator()<std::basic_string_view<unsigned short> const &,std::wstring const &>(
                            a1,
                            a3,
                            v7 + 4) )
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v6;
  return result;
}

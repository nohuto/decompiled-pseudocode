/*
 * XREFs of ?compare@?$_WChar_traits@_W@std@@SAHQEB_W0_K@Z @ 0x18001F790
 * Callers:
 *     ??$_Traits_compare@U?$char_traits@_W@std@@@std@@YAHQEB_W_K01@Z @ 0x18001ED8C (--$_Traits_compare@U-$char_traits@_W@std@@@std@@YAHQEB_W_K01@Z.c)
 *     ?Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z @ 0x18004226C (-Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z.c)
 *     ??$?9V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@std@@YA_NAEBV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@0@0@Z @ 0x1800586A4 (--$-9V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$basic_stri.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@0@V10@V10@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@@Z @ 0x1800590F4 (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$basic_string@_WU-$char_traits@_W@.c)
 *     ??$?RV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x18006182C (--$-RV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V01@@-$_Uhash_compare@V-$b.c)
 *     _lambda_718c83fccd190710b454871d75af9a8f_::operator() @ 0x180064288 (_lambda_718c83fccd190710b454871d75af9a8f_--operator().c)
 *     _lambda_7df625487201977a352489cf8de9dd55_::operator() @ 0x180064414 (_lambda_7df625487201977a352489cf8de9dd55_--operator().c)
 *     _lambda_fc5806797b07904940ba13a2a5c07b95_::operator() @ 0x18006456C (_lambda_fc5806797b07904940ba13a2a5c07b95_--operator().c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ??$?9_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x1800DC058 (--$-9_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_WChar_traits<wchar_t>::compare(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9

  result = 0LL;
  if ( a3 )
  {
    v4 = a1 - (_QWORD)a2;
    while ( *(_WORD *)((char *)a2 + v4) >= *a2 )
    {
      if ( *(_WORD *)((char *)a2 + v4) > *a2 )
        return 1LL;
      if ( a3 == 1 )
        return result;
      --a3;
      ++a2;
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}

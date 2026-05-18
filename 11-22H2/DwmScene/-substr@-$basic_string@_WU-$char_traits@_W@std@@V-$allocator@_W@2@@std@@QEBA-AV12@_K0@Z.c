/*
 * XREFs of ?substr@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV12@_K0@Z @ 0x18001FA7C
 * Callers:
 *     _lambda_718c83fccd190710b454871d75af9a8f_::operator() @ 0x180064288 (_lambda_718c83fccd190710b454871d75af9a8f_--operator().c)
 *     _lambda_7df625487201977a352489cf8de9dd55_::operator() @ 0x180064414 (_lambda_7df625487201977a352489cf8de9dd55_--operator().c)
 *     _lambda_fc5806797b07904940ba13a2a5c07b95_::operator() @ 0x18006456C (_lambda_fc5806797b07904940ba13a2a5c07b95_--operator().c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?GetDomain@IConfigurationManager@Utils@Spectre@@UEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x1800DBD60 (-GetDomain@IConfigurationManager@Utils@Spectre@@UEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V.c)
 * Callees:
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@D@std@@@std@@QEBAX_K@Z @ 0x18001DB50 (-_Check_offset@-$_String_val@U-$_Simple_types@D@std@@@std@@QEBAX_K@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18001E6E8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

__int64 __fastcall std::wstring::substr(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _QWORD *v7; // rbx

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  v7 = (_QWORD *)a1;
  *(_WORD *)a2 = 0;
  std::_String_val<std::_Simple_types<char>>::_Check_offset(a1, a3);
  if ( v7[2] - a3 < a4 )
    a4 = v7[2] - a3;
  if ( v7[3] >= 8uLL )
    v7 = (_QWORD *)*v7;
  std::wstring::assign((char *)a2, (char *)v7 + 2 * a3, a4);
  return a2;
}

/*
 * XREFs of ??0?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@$0A@@std@@@std@@QEAA@AEBU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z @ 0x180030A0C
 * Callers:
 *     ??0?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@@1@@Z @ 0x180030D64 (--0-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@MU-$less@V-$basic_string@.c)
 *     ?SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ @ 0x18003670C (-SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string const,float>>,0>>::_Tree<std::_Tmap_traits<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string const,float>>,0>>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = operator new(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *a1 = v2;
  return a1;
}

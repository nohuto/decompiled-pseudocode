/*
 * XREFs of ?GetOptionName@ShaderManager@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@23@@Z @ 0x18004FC64
 * Callers:
 *     ?GetOptionNames@ShaderManager@Engine@Spectre@@QEBA?AV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@_K@Z @ 0x18004FCB0 (-GetOptionNames@ShaderManager@Engine@Spectre@@QEBA-AV-$set@V-$basic_string@DU-$char_traits@D@std.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall Spectre::Engine::ShaderManager::GetOptionName(__int64 a1, _QWORD *a2, int a3)
{
  if ( a3 == -1 )
  {
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[3] = 15LL;
    *(_BYTE *)a2 = 0;
  }
  else
  {
    std::string::string(a2, a1 + 32 * (a3 + 1LL));
  }
  return a2;
}

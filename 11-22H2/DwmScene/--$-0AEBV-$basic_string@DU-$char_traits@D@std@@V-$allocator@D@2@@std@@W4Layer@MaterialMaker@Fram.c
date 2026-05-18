/*
 * XREFs of ??$?0AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@$0A@@?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAW4Layer@MaterialMaker@Framework@Spectre@@@Z @ 0x1800982EC
 * Callers:
 *     ?GetSerializablePropertyLayer@BaseShaderExtension@Engine@Spectre@@UEBA?AW4Layer@MaterialMaker@Framework@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009A630 (-GetSerializablePropertyLayer@BaseShaderExtension@Engine@Spectre@@UEBA-AW4Layer@MaterialMaker@Fr.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  std::string::string((_QWORD *)a1, a2);
  *(_BYTE *)(a1 + 32) = *a3;
  return a1;
}

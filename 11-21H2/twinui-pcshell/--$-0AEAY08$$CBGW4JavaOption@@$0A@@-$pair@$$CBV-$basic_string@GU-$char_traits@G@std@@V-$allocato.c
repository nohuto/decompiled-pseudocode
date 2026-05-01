/*
 * XREFs of ??$?0AEAY08$$CBGW4JavaOption@@$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@QEAA@AEAY08$$CBG$$QEAW4JavaOption@@@Z @ 0x1801B7568
 * Callers:
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1801B7BFC (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

__int64 __fastcall std::pair<std::wstring const,enum JavaOption>::pair<std::wstring const,enum JavaOption>(
        __int64 a1,
        _WORD *a2,
        _DWORD *a3)
{
  std::wstring::wstring((_QWORD *)a1, a2);
  *(_DWORD *)(a1 + 32) = *a3;
  return a1;
}

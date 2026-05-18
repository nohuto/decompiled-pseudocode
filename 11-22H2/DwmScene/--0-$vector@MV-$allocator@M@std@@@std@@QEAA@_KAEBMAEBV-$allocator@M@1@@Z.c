/*
 * XREFs of ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@_KAEBMAEBV?$allocator@M@1@@Z @ 0x180044DA4
 * Callers:
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@H@Z @ 0x180044F8C (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@_ea_180044F8C.c)
 *     ??0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@12@_N@Z @ 0x18004514C (--0ShaderPropertyDefinition@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@_ea_18004514C.c)
 * Callees:
 *     ??$_Construct_n@AEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAX_KAEBM@Z @ 0x180044BE0 (--$_Construct_n@AEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAX_KAEBM@Z.c)
 */

__int64 *__fastcall std::vector<float>::vector<float>(__int64 *a1, __int64 a2, _DWORD *a3)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<float>::_Construct_n<float const &>(a1, a2, a3);
  return a1;
}

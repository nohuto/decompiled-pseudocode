/*
 * XREFs of ??$_Uninitialized_copy@PEAW4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@YAPEAW4EShaderModel@Engine@Spectre@@QEAW4123@0PEAW4123@AEAV?$allocator@W4EShaderModel@Engine@Spectre@@@0@@Z @ 0x180017094
 * Callers:
 *     ??0?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800176E8 (--0-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spectre@@@std@@@st.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4EShaderModel@Engine@Spectre@@PEAW4123@@std@@YAPEAW4EShaderModel@Engine@Spectre@@PEAW4123@00@Z @ 0x180016DC4 (--$_Copy_memmove@PEAW4EShaderModel@Engine@Spectre@@PEAW4123@@std@@YAPEAW4EShaderModel@Engine@Spe.c)
 */

char *__fastcall std::_Uninitialized_copy<enum Spectre::Engine::EShaderModel *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<enum Spectre::Engine::EShaderModel *,enum Spectre::Engine::EShaderModel *>(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}

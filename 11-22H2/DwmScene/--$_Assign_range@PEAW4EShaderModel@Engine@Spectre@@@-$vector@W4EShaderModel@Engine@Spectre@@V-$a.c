/*
 * XREFs of ??$_Assign_range@PEAW4EShaderModel@Engine@Spectre@@@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAXPEAW4EShaderModel@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180016C68
 * Callers:
 *     ??4?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180017CDC (--4-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spectre@@@std@@@st.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4EShaderModel@Engine@Spectre@@PEAW4123@@std@@YAPEAW4EShaderModel@Engine@Spectre@@PEAW4123@00@Z @ 0x180016DC4 (--$_Copy_memmove@PEAW4EShaderModel@Engine@Spectre@@PEAW4123@@std@@YAPEAW4EShaderModel@Engine@Spe.c)
 *     ?_Clear_and_reserve_geometric@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18001B5F8 (-_Clear_and_reserve_geometric@-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderMode.c)
 */

__int64 __fastcall std::vector<enum Spectre::Engine::EShaderModel>::_Assign_range<enum Spectre::Engine::EShaderModel *>(
        _QWORD *a1,
        void *a2,
        __int64 a3)
{
  __int64 result; // rax

  if ( (a3 - (__int64)a2) >> 2 > (unsigned __int64)((__int64)(a1[2] - *a1) >> 2) )
    std::vector<enum Spectre::Engine::EShaderModel>::_Clear_and_reserve_geometric();
  result = std::_Copy_memmove<enum Spectre::Engine::EShaderModel *,enum Spectre::Engine::EShaderModel *>(a2);
  a1[1] = result;
  return result;
}

/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180017994
 * Callers:
 *     ??0?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800176E8 (--0-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spectre@@@std@@@st.c)
 *     ??$_Construct_n@AEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAX_KAEBM@Z @ 0x180044BE0 (--$_Construct_n@AEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAX_KAEBM@Z.c)
 *     ??$_Construct_n@PEBMPEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K$$QEAPEBM1@Z @ 0x180044C64 (--$_Construct_n@PEBMPEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K$$QEAPEBM1@Z.c)
 *     ??$_Construct_n@PEBW4EShaderModel@Engine@Spectre@@PEBW4123@@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBW4EShaderModel@Engine@Spectre@@1@Z @ 0x18004D4B8 (--$_Construct_n@PEBW4EShaderModel@Engine@Spectre@@PEBW4123@@-$vector@W4EShaderModel@Engine@Spect.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x180081D80 (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18001B850 (-_Tidy@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@TValueElement@Sh.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<enum Spectre::Engine::EShaderModel>>::~_Tidy_guard<std::vector<enum Spectre::Engine::EShaderModel>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy();
  return result;
}

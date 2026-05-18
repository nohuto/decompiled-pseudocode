/*
 * XREFs of ?_Buy_nonzero@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18001B514
 * Callers:
 *     ??0?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800176E8 (--0-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spectre@@@std@@@st.c)
 *     ??$_Construct_n@PEBW4EShaderModel@Engine@Spectre@@PEBW4123@@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBW4EShaderModel@Engine@Spectre@@1@Z @ 0x18004D4B8 (--$_Construct_n@PEBW4EShaderModel@Engine@Spectre@@PEBW4123@@-$vector@W4EShaderModel@Engine@Spect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<enum Spectre::Engine::EShaderModel>::_Buy_nonzero(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  return std::vector<float>::_Buy_raw();
}

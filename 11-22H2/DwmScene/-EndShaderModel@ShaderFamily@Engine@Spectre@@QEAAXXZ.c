/*
 * XREFs of ?EndShaderModel@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060900
 * Callers:
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F3B0 (-OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShader.c)
 *     ?OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F7A0 (-OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShaderMo.c)
 *     ?OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x180080830 (-OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?OnCreate@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18009A980 (-OnCreate@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShaderMo.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ShaderFamily::EndShaderModel(Spectre::Engine::ShaderFamily *this)
{
  *((_DWORD *)this + 138) = 0;
}

/*
 * XREFs of ?SetVertexLayout@ShaderPipeline@Engine@Spectre@@QEAAXVVertexLayoutDesc@VertexLayoutBase@23@@Z @ 0x180087BBC
 * Callers:
 *     ?AddBackgroundShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@@Z @ 0x18007CC8C (-AddBackgroundShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@.c)
 *     ?AddStochasticTransparencyShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@@Z @ 0x18007D3B0 (-AddStochasticTransparencyShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShade.c)
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F3B0 (-OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShader.c)
 *     ?OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F7A0 (-OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShaderMo.c)
 *     ?OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x180080830 (-OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x180098B0C (-AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV-$vect.c)
 *     ?AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z @ 0x180099D68 (-AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z.c)
 * Callees:
 *     ??4?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008693C (--4-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexElementDesc@.c)
 */

void __fastcall Spectre::Engine::ShaderPipeline::SetVertexLayout(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 128) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 8);
  std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::operator=(
    (_QWORD *)(a1 + 144),
    (_QWORD *)(a2 + 16));
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 40);
  std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Tidy(a2 + 16);
}

/*
 * XREFs of ?SetRenderState@ShaderPipeline@Engine@Spectre@@QEAAXW4BlendMode@23@W4CullMode@23@W4DepthMode@23@W4RenderStateOptions@123@@Z @ 0x180087618
 * Callers:
 *     ?AddBackgroundShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@@Z @ 0x18007CC8C (-AddBackgroundShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@.c)
 *     ?AddStochasticTransparencyShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@@Z @ 0x18007D3B0 (-AddStochasticTransparencyShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShade.c)
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F3B0 (-OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShader.c)
 *     ?OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F7A0 (-OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShaderMo.c)
 *     ?OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x180080830 (-OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x180098B0C (-AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV-$vect.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall Spectre::Engine::ShaderPipeline::SetRenderState(__int64 a1, int a2, int a3, int a4, char a5)
{
  char v6; // r10
  std::_Ref_count_base *v7[2]; // [rsp+20h] [rbp-10h] BYREF

  v6 = a5 & 0xE | 1;
  if ( *(_BYTE *)(a1 + 124) != v6
    || *(_DWORD *)(a1 + 112) != a2
    || *(_DWORD *)(a1 + 116) != a3
    || *(_DWORD *)(a1 + 120) != a4
    || *(_BYTE *)(a1 + 125) != (a5 & 1) )
  {
    *(_DWORD *)(a1 + 112) = a2;
    *(_BYTE *)(a1 + 125) = a5 & 1;
    *(_DWORD *)(a1 + 116) = a3;
    *(_DWORD *)(a1 + 120) = a4;
    *(_BYTE *)(a1 + 124) = v6;
    *(_OWORD *)v7 = 0LL;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 48), (__int64 *)v7);
    if ( v7[1] )
      std::_Ref_count_base::_Decref(v7[1]);
    *(_OWORD *)v7 = 0LL;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 64), (__int64 *)v7);
    if ( v7[1] )
      std::_Ref_count_base::_Decref(v7[1]);
    *(_OWORD *)v7 = 0LL;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 80), (__int64 *)v7);
    if ( v7[1] )
      std::_Ref_count_base::_Decref(v7[1]);
    *(_OWORD *)v7 = 0LL;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 96), (__int64 *)v7);
    if ( v7[1] )
      std::_Ref_count_base::_Decref(v7[1]);
  }
}

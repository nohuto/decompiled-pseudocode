/*
 * XREFs of ??4?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180017CDC
 * Callers:
 *     ??4DeviceDescription@Engine@Spectre@@QEAAAEAU012@AEBU012@@Z @ 0x180017D08 (--4DeviceDescription@Engine@Spectre@@QEAAAEAU012@AEBU012@@Z.c)
 *     ?SetShaderModels@ShaderManager@Engine@Spectre@@QEAAXAEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x1800507F0 (-SetShaderModels@ShaderManager@Engine@Spectre@@QEAAXAEBV-$vector@W4EShaderModel@Engine@Spectre@@.c)
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F3B0 (-OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShader.c)
 *     ?OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F7A0 (-OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShaderMo.c)
 *     ?OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x180080830 (-OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?OnCreate@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18009A980 (-OnCreate@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShaderMo.c)
 * Callees:
 *     ??$_Assign_range@PEAW4EShaderModel@Engine@Spectre@@@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAXPEAW4EShaderModel@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180016C68 (--$_Assign_range@PEAW4EShaderModel@Engine@Spectre@@@-$vector@W4EShaderModel@Engine@Spectre@@V-$a.c)
 */

_QWORD *__fastcall std::vector<enum Spectre::Engine::EShaderModel>::operator=(_QWORD *a1, __int64 a2)
{
  if ( a1 != (_QWORD *)a2 )
    std::vector<enum Spectre::Engine::EShaderModel>::_Assign_range<enum Spectre::Engine::EShaderModel *>(
      a1,
      *(void **)a2,
      *(_QWORD *)(a2 + 8));
  return a1;
}

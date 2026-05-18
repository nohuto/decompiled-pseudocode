/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002945C
 * Callers:
 *     ?RenderSymbols@Bounds@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004A4B0 (-RenderSymbols@Bounds@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_.c)
 *     ?RenderSymbols@MeshInstance@Engine@Spectre@@EEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C850 (-RenderSymbols@MeshInstance@Engine@Spectre@@EEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ??0?$array@UMatrix@Math@Utils@Spectre@@$03@std@@QEAA@XZ @ 0x180059220 (--0-$array@UMatrix@Math@Utils@Spectre@@$03@std@@QEAA@XZ.c)
 *     ??0Camera@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18005930C (--0Camera@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?RenderSymbols@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18005CA50 (-RenderSymbols@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_.c)
 *     ?CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@@Z @ 0x18008CD80 (-CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@std@@P.c)
 *     ?CalculateBlurConstants@ImageProcessingEffectBlur@Engine@Spectre@@IEBAXAEAV?$array@UVector4@Math@Utils@Spectre@@$0BA@@std@@0MM@Z @ 0x18009C688 (-CalculateBlurConstants@ImageProcessingEffectBlur@Engine@Spectre@@IEBAXAEAV-$array@UVector4@Math.c)
 *     ?Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV45@@Z @ 0x18009CCA0 (-Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA-AV-$shared_ptr@VTexture@Engine@Spectre@@@.c)
 *     ??0RenderOutputD3D11@D3D11@Engine@Spectre@@IEAA@UOutputDescription@23@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@6@@Z @ 0x1800C8B40 (--0RenderOutputD3D11@D3D11@Engine@Spectre@@IEAA@UOutputDescription@23@V-$shared_ptr@VRenderDevic.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  do
  {
    a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
}

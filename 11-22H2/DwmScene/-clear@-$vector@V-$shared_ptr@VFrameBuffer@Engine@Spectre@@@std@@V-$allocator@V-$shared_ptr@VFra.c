/*
 * XREFs of ?clear@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAXXZ @ 0x1800278E4
 * Callers:
 *     ?OnShutdown@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026E80 (-OnShutdown@RenderDevice@Engine@Spectre@@MEAAXXZ.c)
 *     ?OnShutdown@Engine@1Spectre@@MEAAXXZ @ 0x180035310 (-OnShutdown@Engine@1Spectre@@MEAAXXZ.c)
 *     ??0ResourceData@Engine@Spectre@@QEAA@XZ @ 0x1800973E0 (--0ResourceData@Engine@Spectre@@QEAA@XZ.c)
 *     ??0ResourceData@Engine@Spectre@@QEAA@_KV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@@Z @ 0x180097454 (--0ResourceData@Engine@Spectre@@QEAA@_KV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@@@Z.c)
 *     ??0ResourceData@Engine@Spectre@@QEAA@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@Z @ 0x1800974F0 (--0ResourceData@Engine@Spectre@@QEAA@_KV-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@Z.c)
 *     ?SetResource@ResourceData@Engine@Spectre@@QEAAXV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@@Z @ 0x180097728 (-SetResource@ResourceData@Engine@Spectre@@QEAAXV-$shared_ptr@VRendererResource@Engine@Spectre@@@.c)
 *     ??1ImageProcessingEffectBlur@Engine@Spectre@@UEAA@XZ @ 0x18009BF10 (--1ImageProcessingEffectBlur@Engine@Spectre@@UEAA@XZ.c)
 *     ?UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x18009D410 (-UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@.c)
 *     ?Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ @ 0x1800E07B0 (-Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@0@@Z @ 0x18001203C (--$_Destroy_range@V-$allocator@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@std@@@std@@YA.c)
 */

__int64 __fastcall std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::clear(__int64 *a1)
{
  __int64 result; // rax

  std::_Destroy_range<std::allocator<std::shared_ptr<Spectre::Engine::IRenderOutput>>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}

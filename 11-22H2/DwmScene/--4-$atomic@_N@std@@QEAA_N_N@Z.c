/*
 * XREFs of ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x180040168
 * Callers:
 *     ?AddNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@AEBV?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@@Z @ 0x180040548 (-AddNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV4.c)
 *     ?OnLayerModified@Scene@Engine@Spectre@@QEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18004181C (-OnLayerModified@Scene@Engine@Spectre@@QEAAXV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato.c)
 *     ?CreateRenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800577F0 (-CreateRenderThread@Display@Engine@Spectre@@AEAAXXZ.c)
 *     ?DeleteRenderThread@Display@Engine@Spectre@@AEAAXAEAV?$unique_lock@Vmutex@std@@@std@@@Z @ 0x1800578BC (-DeleteRenderThread@Display@Engine@Spectre@@AEAAXAEAV-$unique_lock@Vmutex@std@@@std@@@Z.c)
 *     ?Render@Display@Engine@Spectre@@QEAAXXZ @ 0x180057B28 (-Render@Display@Engine@Spectre@@QEAAXXZ.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 *     ?RenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800581C0 (-RenderThread@Display@Engine@Spectre@@AEAAXXZ.c)
 *     _lambda_7df625487201977a352489cf8de9dd55_::operator() @ 0x180064414 (_lambda_7df625487201977a352489cf8de9dd55_--operator().c)
 *     _lambda_fc5806797b07904940ba13a2a5c07b95_::operator() @ 0x18006456C (_lambda_fc5806797b07904940ba13a2a5c07b95_--operator().c)
 *     ?UpdateScenes@ViewerEngine@Engine@Spectre@@MEAAXXZ @ 0x18006DD20 (-UpdateScenes@ViewerEngine@Engine@Spectre@@MEAAXXZ.c)
 *     ?Cancel@Tween@Tweening@Utils@Spectre@@QEAAXXZ @ 0x180092248 (-Cancel@Tween@Tweening@Utils@Spectre@@QEAAXXZ.c)
 *     ?SetEnabled@CpuProfiler@Engine@Spectre@@QEAAX_N@Z @ 0x1800A047C (-SetEnabled@CpuProfiler@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?SetEnabled@GpuProfiler@Engine@Spectre@@QEAAX_N@Z @ 0x1800A14D8 (-SetEnabled@GpuProfiler@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?SetLowFidelityEnabled@GpuProfiler@Engine@Spectre@@QEAAX_N@Z @ 0x1800A14EC (-SetLowFidelityEnabled@GpuProfiler@Engine@Spectre@@QEAAX_N@Z.c)
 * Callees:
 *     ?store@?$_Atomic_storage@_N$00@std@@QEAAX_N@Z @ 0x180042D30 (-store@-$_Atomic_storage@_N$00@std@@QEAAX_N@Z.c)
 */

char __fastcall std::atomic<bool>::operator=(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r9

  LOBYTE(a4) = a2;
  std::_Atomic_storage<bool,1>::store(a1, a2, a3, a4);
  return v4;
}

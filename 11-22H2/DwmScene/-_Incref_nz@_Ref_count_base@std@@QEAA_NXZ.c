/*
 * XREFs of ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180011A3C
 * Callers:
 *     ??$_Construct_from_weak@VScene@Engine@Spectre@@@?$_Ptr_base@VScene@Engine@Spectre@@@std@@IEAA_NAEBV?$weak_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180010974 (--$_Construct_from_weak@VScene@Engine@Spectre@@@-$_Ptr_base@VScene@Engine@Spectre@@@std@@IEAA_NA.c)
 *     ?GetResourceByIndex@Engine@1Spectre@@QEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@_K@Z @ 0x1800346FC (-GetResourceByIndex@Engine@1Spectre@@QEAA-AV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@.c)
 *     ?UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV?$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x18003725C (-UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV-$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@.c)
 *     ?lock@?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VGpuProfiler@Engine@Spectre@@@2@XZ @ 0x18003888C (-lock@-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VGpuProfiler@Engine@Spec.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 *     ?Update@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18004CB70 (-Update@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ??$?0VIRenderOutput@Engine@Spectre@@$0A@@?$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@QEAA@AEBV?$weak_ptr@VIRenderOutput@Engine@Spectre@@@1@@Z @ 0x180056C00 (--$-0VIRenderOutput@Engine@Spectre@@$0A@@-$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@QEA.c)
 *     ?Set@?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@IEAA_NM@Z @ 0x180092E70 (-Set@-$TweenProperty@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre.c)
 *     ?ReleaseQuery@RenderDeviceQuery@Engine@Spectre@@AEAAXXZ @ 0x1800A210C (-ReleaseQuery@RenderDeviceQuery@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Ref_count_base::_Incref_nz(std::_Ref_count_base *this)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v1 = *((_DWORD *)this + 2);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)this + 2, v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}

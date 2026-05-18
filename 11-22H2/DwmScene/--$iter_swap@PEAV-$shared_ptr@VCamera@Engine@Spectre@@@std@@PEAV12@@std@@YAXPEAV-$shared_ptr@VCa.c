/*
 * XREFs of ??$iter_swap@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@0@Z @ 0x18003AD30
 * Callers:
 *     ??$reverse@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@YAXQEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@0@Z @ 0x18003AD3C (--$reverse@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@YAXQEAV-$shared_ptr@VCamera@Engi.c)
 *     ??$_Med3_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@00P6A_NAEBV10@1@Z@Z @ 0x18007151C (--$_Med3_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV-$s.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YA?AU?$pair@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@0@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@0@0P6A_NAEBV20@1@Z@Z @ 0x1800715D0 (--$_Partition_by_median_guess_unchecked@PEAV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@.c)
 *     ??$_Med3_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YAXPEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@00VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A42A4 (--$_Med3_unchecked@PEAV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibili.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YA?AU?$pair@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@PEAV12@@0@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@0VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A4308 (--$_Partition_by_median_guess_unchecked@PEAV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VComp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>()
{
  return std::swap<Spectre::Engine::Component>();
}

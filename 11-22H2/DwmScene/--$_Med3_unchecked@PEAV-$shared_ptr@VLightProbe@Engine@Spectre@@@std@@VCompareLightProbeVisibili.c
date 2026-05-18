/*
 * XREFs of ??$_Med3_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YAXPEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@00VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A42A4
 * Callers:
 *     ??$_Guess_median_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YAXPEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@00VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A40E4 (--$_Guess_median_unchecked@PEAV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbe.c)
 * Callees:
 *     ??$iter_swap@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@0@Z @ 0x18003AD30 (--$iter_swap@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@@std@@YAXPEAV-$shared_ptr@VCa.c)
 *     ??RCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@QEBA_NAEBV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@0@Z @ 0x1800A44D4 (--RCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@QEBA_NAEBV-$shared_ptr@VLightProbe@.c)
 */

__int64 __fastcall std::_Med3_unchecked<std::shared_ptr<Spectre::Engine::LightProbe> *,Spectre::Engine::LightGatherer::CompareLightProbeVisibility>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r11

  if ( (unsigned __int8)Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(a1, a2, a1) )
    std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
  result = Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(v4, a3, v5);
  if ( (_BYTE)result )
  {
    std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
    result = Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(v8, v7, v9);
    if ( (_BYTE)result )
      return std::iter_swap<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *>();
  }
  return result;
}

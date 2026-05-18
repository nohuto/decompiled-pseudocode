/*
 * XREFs of ??$_Guess_median_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YAXPEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@00VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A40E4
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YA?AU?$pair@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@PEAV12@@0@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@0VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A4308 (--$_Partition_by_median_guess_unchecked@PEAV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VComp.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YAXPEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@00VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A42A4 (--$_Med3_unchecked@PEAV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibili.c)
 */

__int64 __fastcall std::_Guess_median_unchecked<std::shared_ptr<Spectre::Engine::LightProbe> *,Spectre::Engine::LightGatherer::CompareLightProbeVisibility>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbp

  v3 = a3;
  v4 = (a3 - a1) >> 4;
  v5 = a2;
  if ( v4 > 40 )
  {
    v6 = (v4 + 1) >> 3;
    v7 = 16 * v6;
    v6 *= 32LL;
    v8 = v7 + a1;
    std::_Med3_unchecked<std::shared_ptr<Spectre::Engine::LightProbe> *,Spectre::Engine::LightGatherer::CompareLightProbeVisibility>(
      a1,
      v7 + a1,
      v6 + a1);
    std::_Med3_unchecked<std::shared_ptr<Spectre::Engine::LightProbe> *,Spectre::Engine::LightGatherer::CompareLightProbeVisibility>(
      v5 - v7,
      v5,
      v7 + v5);
    std::_Med3_unchecked<std::shared_ptr<Spectre::Engine::LightProbe> *,Spectre::Engine::LightGatherer::CompareLightProbeVisibility>(
      v3 - v6,
      v3 - v7,
      v3);
    a3 = v3 - v7;
    a2 = v5;
    a1 = v8;
  }
  return std::_Med3_unchecked<std::shared_ptr<Spectre::Engine::LightProbe> *,Spectre::Engine::LightGatherer::CompareLightProbeVisibility>(
           a1,
           a2,
           a3);
}

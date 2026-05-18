/*
 * XREFs of ??RCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@QEBA_NAEBV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@0@Z @ 0x1800A44D4
 * Callers:
 *     ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YAPEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@QEAV10@0VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A41A0 (--$_Insertion_sort_unchecked@PEAV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightPro.c)
 *     ??$_Med3_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YAXPEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@00VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A42A4 (--$_Med3_unchecked@PEAV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibili.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@std@@YA?AU?$pair@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@PEAV12@@0@PEAV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@0VCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@@Z @ 0x1800A4308 (--$_Partition_by_median_guess_unchecked@PEAV-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@VComp.c)
 * Callees:
 *     ?IsEnabled@LightProbe@Engine@Spectre@@QEBA_NXZ @ 0x180051B80 (-IsEnabled@LightProbe@Engine@Spectre@@QEBA_NXZ.c)
 */

bool __fastcall Spectre::Engine::LightGatherer::CompareLightProbeVisibility::operator()(
        __int64 a1,
        __int64 a2,
        Spectre::Engine::LightProbe **a3)
{
  Spectre::Engine::LightProbe *v3; // r9
  char IsEnabled; // al
  Spectre::Engine::LightProbe *v5; // rcx
  char v6; // dl

  Spectre::Engine::LightProbe::IsEnabled(*a3);
  IsEnabled = Spectre::Engine::LightProbe::IsEnabled(v3);
  return IsEnabled != v6 && Spectre::Engine::LightProbe::IsEnabled(v5);
}

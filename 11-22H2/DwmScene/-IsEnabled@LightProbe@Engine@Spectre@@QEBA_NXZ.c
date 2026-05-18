/*
 * XREFs of ?IsEnabled@LightProbe@Engine@Spectre@@QEBA_NXZ @ 0x180051B80
 * Callers:
 *     ??RCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@QEBA_NAEBV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@0@Z @ 0x1800A44D4 (--RCompareLightProbeVisibility@LightGatherer@Engine@Spectre@@QEBA_NAEBV-$shared_ptr@VLightProbe@.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::LightProbe::IsEnabled(Spectre::Engine::LightProbe *this)
{
  return *((_BYTE *)this + 88);
}

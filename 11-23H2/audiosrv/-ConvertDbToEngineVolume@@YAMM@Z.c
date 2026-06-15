/*
 * XREFs of ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800DF428
 * Callers:
 *     ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x180048820 (-GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z.c)
 *     ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x1800DFE6C (-GetDuckingState@CAudioSession@@QEAAJPEAM@Z.c)
 *     s_apmSetVolumeGroupGainForId @ 0x1801125F0 (s_apmSetVolumeGroupGainForId.c)
 * Callees:
 *     pow @ 0x180067A04 (pow.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow(10.0, a1 / 20.0);
}

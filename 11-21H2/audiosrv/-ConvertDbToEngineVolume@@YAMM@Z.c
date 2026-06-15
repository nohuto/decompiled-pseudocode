/*
 * XREFs of ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800D6C20
 * Callers:
 *     ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x18000C320 (-GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z.c)
 *     ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x1800D7DD0 (-GetDuckingState@CAudioSession@@QEAAJPEAM@Z.c)
 *     s_apmSetVolumeGroupGainForId @ 0x180111120 (s_apmSetVolumeGroupGainForId.c)
 * Callees:
 *     pow @ 0x18005F984 (pow.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow(10.0, a1 / 20.0);
}

/*
 * XREFs of ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18002CAD4
 * Callers:
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z @ 0x18002DC18 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180039784 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z @ 0x180040430 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z.c)
 *     ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x180040A60 (--0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z.c)
 * Callees:
 *     pow @ 0x1800177E4 (pow.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow(10.0, a1 / 20.0);
}

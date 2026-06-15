/*
 * XREFs of ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x18003E508
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18003E018 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CFA0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 * Callees:
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18002EDFC (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x18003E598 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 *     ?IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014DA28 (-IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall GetConnectorTypeForStream(
        EffectPack **a1,
        int a2,
        enum _AUDCLNT_SHAREMODE a3,
        const struct tWAVEFORMATEX *a4,
        struct IProcessSubmixProxy *a5)
{
  char v7; // bl
  int v9; // edi

  v7 = a2;
  if ( (a2 & 0x400000) != 0 )
    return 3LL;
  v9 = a2 & 0x20000;
  if ( a5 && v9 )
    return 0LL;
  if ( (unsigned int)EffectPack::HardwareLoopbackEnabled(a1[1]) && v9 )
    return 2LL;
  if ( a3 == AUDCLNT_SHAREMODE_EXCLUSIVE
    && (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(*a1)
    && a4
    && !CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(*a1, a4) )
  {
    return 1LL;
  }
  return (v7 & 2) == 0;
}

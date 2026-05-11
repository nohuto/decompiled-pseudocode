/*
 * XREFs of IsSupportedFormat @ 0x1C0035D24
 * Callers:
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0036408 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0036CB8 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C0036BDC (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C0036C38 (USBParseGetAudioSpecificInterface.c)
 */

bool __fastcall IsSupportedFormat(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 AudioSpecificInterface; // rax
  unsigned __int8 *v6; // r8
  unsigned __int16 v7; // ax
  __int64 DescriptorInConfiguration; // rax

  v3 = 0;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(a1, a2, a3, 7LL);
  v6 = (unsigned __int8 *)AudioSpecificInterface;
  if ( AudioSpecificInterface )
  {
    v7 = *(_WORD *)(AudioSpecificInterface + 5);
    if ( v7 == 1 )
    {
      DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(a1, &v6[*v6], 36LL);
      if ( DescriptorInConfiguration )
        return *(_BYTE *)(DescriptorInConfiguration + 6) != 8;
    }
    else if ( v7 > 1u && (v7 <= 5u || v7 > 0x1000u && (v7 <= 0x1002u || v7 == 8193 || v7 == 8195 || v7 == 8447)) )
    {
      return 1;
    }
  }
  return v3;
}

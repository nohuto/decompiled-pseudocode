/*
 * XREFs of IsSupportedFormat @ 0x1C00338F8
 * Callers:
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0034038 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0034858 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseGetAudioSpecificInterface @ 0x1C00347D8 (USBParseGetAudioSpecificInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C0038C80 (USBParseFindDescriptorInConfiguration.c)
 */

char __fastcall IsSupportedFormat(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  unsigned __int8 *AudioSpecificInterface; // rax
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  __int64 DescriptorInConfiguration; // rax
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx

  v3 = 0;
  AudioSpecificInterface = (unsigned __int8 *)USBParseGetAudioSpecificInterface(a1, a2, a3, 7LL);
  if ( AudioSpecificInterface )
  {
    v6 = *(unsigned __int16 *)(AudioSpecificInterface + 5);
    if ( v6 > 0x1001 )
    {
      v11 = v6 - 4098;
      if ( !v11 )
        return 1;
      v12 = v11 - 4095;
      if ( !v12 )
        return 1;
      v13 = v12 - 2;
      if ( !v13 || v13 == 252 )
        return 1;
    }
    else
    {
      if ( v6 == 4097 )
        return 1;
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 - 1 >= 2 )
              return v3;
          }
        }
        return 1;
      }
      DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                    a1,
                                    &AudioSpecificInterface[*AudioSpecificInterface],
                                    36LL,
                                    8LL);
      if ( DescriptorInConfiguration && *(_BYTE *)(DescriptorInConfiguration + 6) != 8 )
        return 1;
    }
  }
  return v3;
}

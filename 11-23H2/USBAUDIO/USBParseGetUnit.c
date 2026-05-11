/*
 * XREFs of USBParseGetUnit @ 0x1C002A12C
 * Callers:
 *     USBParseCountOutputChannelsForUnit @ 0x1C003E648 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C003E770 (USBParseGetChannelConfigForUnit.c)
 * Callees:
 *     USBParseFindDescriptor @ 0x1C003475C (USBParseFindDescriptor.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C0038C80 (USBParseFindDescriptorInConfiguration.c)
 */

unsigned __int8 *__fastcall USBParseGetUnit(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 *i; // rbx
  unsigned __int8 *DescriptorInConfiguration; // rax
  unsigned __int8 *v7; // rdi

  i = 0LL;
  DescriptorInConfiguration = (unsigned __int8 *)USBParseFindDescriptorInConfiguration(a1, a2, 36LL, 8LL);
  v7 = DescriptorInConfiguration;
  if ( DescriptorInConfiguration )
  {
    for ( i = (unsigned __int8 *)USBParseFindDescriptor(
                                   a1,
                                   DescriptorInConfiguration,
                                   *(unsigned __int16 *)(DescriptorInConfiguration + 5),
                                   &DescriptorInConfiguration[*DescriptorInConfiguration]);
          i;
          i = (unsigned __int8 *)((unsigned __int64)&i[*i] & -(__int64)(&i[*i] < &v7[*(unsigned __int16 *)(v7 + 5)])) )
    {
      if ( i[3] == a3 )
        break;
    }
  }
  return i;
}

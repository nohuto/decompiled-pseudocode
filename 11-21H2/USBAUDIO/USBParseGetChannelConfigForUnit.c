/*
 * XREFs of USBParseGetChannelConfigForUnit @ 0x1C0036F38
 * Callers:
 *     USBParseExtensionUnit @ 0x1C00367C0 (USBParseExtensionUnit.c)
 *     USBParseFeatureUnit @ 0x1C0036920 (USBParseFeatureUnit.c)
 *     USBParseMixerUnit @ 0x1C0038240 (USBParseMixerUnit.c)
 *     USBParseProcessUnit @ 0x1C00384A0 (USBParseProcessUnit.c)
 *     USBParseSelectorUnit @ 0x1C00386F0 (USBParseSelectorUnit.c)
 *     USBParseTerminalUnit @ 0x1C0038820 (USBParseTerminalUnit.c)
 * Callees:
 *     USBParseGetUnit @ 0x1C0037C74 (USBParseGetUnit.c)
 */

__int64 __fastcall USBParseGetChannelConfigForUnit(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int i; // edi
  __int64 Unit; // rax
  char v7; // cl

  v2 = 0;
  for ( i = 0; i < 0x3E8; ++i )
  {
    Unit = USBParseGetUnit(a1, a2);
    if ( !Unit )
      break;
    v7 = *(_BYTE *)(Unit + 2);
    if ( v7 == 2 )
      return *(unsigned __int16 *)(Unit + 8);
    if ( v7 != 3 )
    {
      if ( v7 == 4 )
        return *(unsigned __int16 *)(*(unsigned __int8 *)(Unit + 4) + Unit + 6);
      if ( v7 != 5 && v7 != 6 )
      {
        if ( (unsigned __int8)(v7 - 7) <= 1u )
          return *(unsigned __int16 *)(*(unsigned __int8 *)(Unit + 6) + Unit + 8);
        return v2;
      }
    }
  }
  return v2;
}

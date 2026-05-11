/*
 * XREFs of USBParseCountOutputChannelsForUnit @ 0x1C00364FC
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

__int64 __fastcall USBParseCountOutputChannelsForUnit(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int i; // edi
  _BYTE *Unit; // rax

  v2 = 0;
  for ( i = 0; i < 0x3E8; ++i )
  {
    Unit = (_BYTE *)USBParseGetUnit(a1, a2);
    if ( !Unit )
      break;
    if ( Unit[2] == 2 )
      return (unsigned __int8)Unit[7];
    if ( Unit[2] != 3 )
    {
      if ( Unit[2] == 4 )
        return (unsigned __int8)Unit[(unsigned __int8)Unit[4] + 5];
      if ( Unit[2] != 5 && Unit[2] != 6 )
      {
        if ( (unsigned int)(unsigned __int8)Unit[2] - 7 <= 1 )
          return (unsigned __int8)Unit[(unsigned __int8)Unit[6] + 7];
        return v2;
      }
    }
  }
  return v2;
}

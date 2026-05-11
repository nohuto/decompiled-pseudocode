/*
 * XREFs of USBParseGetPinIndexForStreamingTerminal @ 0x1C0035384
 * Callers:
 *     USBParseMIDIInJack @ 0x1C00358E0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C0035A00 (USBParseMIDIOutJack.c)
 *     USBParseTerminalUnit @ 0x1C003E8A0 (USBParseTerminalUnit.c)
 * Callees:
 *     USBParseGetTerminalLinkFromPinId @ 0x1C00354DC (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C0038C80 (USBParseFindDescriptorInConfiguration.c)
 */

__int64 __fastcall USBParseGetPinIndexForStreamingTerminal(__int64 a1, unsigned __int8 *a2, char a3)
{
  unsigned int v3; // edi
  char v4; // bp
  unsigned int v7; // ebx
  int TerminalLinkFromPinId; // r8d
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  char v13; // cl
  unsigned int v14; // eax
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int8 *DescriptorInConfiguration; // rax
  unsigned __int8 *v19; // rdx
  unsigned __int8 *v20; // r8
  char *v21; // rcx
  char v22; // al
  unsigned int v23; // ecx

  v3 = 0;
  v4 = 0;
  v7 = -1;
  if ( a3 )
  {
    v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 4LL);
    if ( *(_BYTE *)(a1 + 5) )
    {
      if ( !(_BYTE)v9 )
        return v7;
    }
    else
    {
      if ( !(_BYTE)v9 )
        return v7;
      v10 = *(__int64 **)(a1 + 16);
      v11 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 4LL);
      do
      {
        v12 = *v10;
        v10 += 2;
        v13 = *(_BYTE *)(v12 + 6);
        v14 = v3 + 1;
        if ( v13 != 2 )
          v14 = v3;
        v3 = v14;
        --v11;
      }
      while ( v11 );
    }
    v15 = 0LL;
    v16 = v9;
    do
    {
      v17 = *(_QWORD *)(v15 + *(_QWORD *)(a1 + 16));
      if ( *(_BYTE *)(v17 + 6) == 3 )
      {
        DescriptorInConfiguration = (unsigned __int8 *)USBParseFindDescriptorInConfiguration(
                                                         *(_QWORD *)(a1 + 40),
                                                         v17,
                                                         36LL,
                                                         7LL);
        if ( DescriptorInConfiguration )
        {
          v19 = &DescriptorInConfiguration[*DescriptorInConfiguration];
          if ( !v4 )
          {
            v20 = &DescriptorInConfiguration[*(unsigned __int16 *)(DescriptorInConfiguration + 5)];
            while ( v19 < v20 )
            {
              if ( v19 == a2 )
              {
                v4 = 1;
                break;
              }
              v21 = (char *)(v19 + 3);
              v19 += *v19;
              v4 = 0;
              v22 = *v21;
              v23 = v3 + 1;
              if ( v22 != 1 )
                v23 = v3;
              v3 = v23;
            }
          }
        }
      }
      v15 += 16LL;
      --v16;
    }
    while ( v16 );
    if ( v4 )
      return v3;
  }
  else
  {
    TerminalLinkFromPinId = USBParseGetTerminalLinkFromPinId(a1, 0LL);
    while ( TerminalLinkFromPinId != -1 )
    {
      if ( v4 )
        break;
      if ( TerminalLinkFromPinId == a2[3] )
      {
        v4 = 1;
        v7 = v3;
      }
      else
      {
        TerminalLinkFromPinId = USBParseGetTerminalLinkFromPinId(a1, ++v3);
      }
    }
  }
  return v7;
}

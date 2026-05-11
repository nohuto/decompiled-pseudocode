/*
 * XREFs of USBParseCountOutputChannelsForUnit @ 0x1C003E648
 * Callers:
 *     USBParseExtensionUnit @ 0x1C0034370 (USBParseExtensionUnit.c)
 *     USBParseFeatureUnit @ 0x1C0034530 (USBParseFeatureUnit.c)
 *     USBParseMixerUnit @ 0x1C0035BD0 (USBParseMixerUnit.c)
 *     USBParseProcessUnit @ 0x1C0035E60 (USBParseProcessUnit.c)
 *     USBParseSelectorUnit @ 0x1C0036100 (USBParseSelectorUnit.c)
 *     USBParseTerminalUnit @ 0x1C003E8A0 (USBParseTerminalUnit.c)
 * Callees:
 *     USBParseGetUnit @ 0x1C002A12C (USBParseGetUnit.c)
 */

__int64 __fastcall USBParseCountOutputChannelsForUnit(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int v4; // edi
  unsigned __int64 v6; // rsi
  unsigned __int8 *Unit; // rax
  unsigned __int64 v10; // r8
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx

  *a4 = 0;
  v4 = 0;
  v6 = a1 + *(unsigned __int16 *)(a1 + 2);
  while ( 1 )
  {
    Unit = USBParseGetUnit(a1, a2, a3);
    if ( !Unit )
      return 0LL;
    v10 = *Unit;
    if ( (unsigned __int64)&Unit[v10] > v6 )
      return 3221225473LL;
    if ( Unit[2] == 2 )
    {
      if ( (unsigned __int8)v10 >= 0xCu )
      {
        v13 = Unit[7];
        goto LABEL_25;
      }
      return 3221225473LL;
    }
    if ( Unit[2] == 3 )
    {
      if ( (unsigned __int8)v10 < 9u )
        return 3221225473LL;
      a3 = Unit[7];
      goto LABEL_15;
    }
    if ( Unit[2] == 4 )
      break;
    if ( Unit[2] == 5 )
    {
      if ( (unsigned __int8)v10 <= 5u )
        return 3221225473LL;
      a3 = Unit[5];
    }
    else
    {
      if ( Unit[2] != 6 )
      {
        if ( (unsigned int)Unit[2] - 7 >= 2 )
        {
          *a4 = 0;
          return 0LL;
        }
        if ( (unsigned __int8)v10 >= 7u )
        {
          v12 = Unit[6];
          if ( v10 >= v12 + 7 )
          {
            v13 = Unit[v12 + 7];
LABEL_25:
            *a4 = v13;
            return 0LL;
          }
        }
        return 3221225473LL;
      }
      if ( (unsigned __int8)v10 < 6u )
        return 3221225473LL;
      a3 = Unit[4];
    }
LABEL_15:
    if ( (unsigned int)++v4 >= 0x3E8 )
      return 0LL;
  }
  if ( (unsigned __int8)v10 >= 5u )
  {
    v14 = Unit[4];
    if ( v10 >= v14 + 5 )
    {
      v13 = Unit[v14 + 5];
      goto LABEL_25;
    }
  }
  return 3221225473LL;
}

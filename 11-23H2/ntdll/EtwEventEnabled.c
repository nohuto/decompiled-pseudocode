/*
 * XREFs of EtwEventEnabled @ 0x1800527B0
 * Callers:
 *     EtwEventWriteStartScenario @ 0x1800525C0 (EtwEventWriteStartScenario.c)
 *     EtwEventWriteEndScenario @ 0x1800526C0 (EtwEventWriteEndScenario.c)
 * Callees:
 *     ProviderHandleLookup @ 0x180030550 (ProviderHandleLookup.c)
 */

BOOLEAN __cdecl EtwEventEnabled(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor)
{
  __int16 v3; // rbx^4
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int64 Keyword; // rdx
  BOOLEAN result; // al
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al

  v3 = WORD2(RegHandle);
  result = 0;
  if ( EventDescriptor )
  {
    v4 = ProviderHandleLookup(RegHandle, RegHandle);
    v5 = v4;
    if ( v4 )
    {
      if ( v3 == *(_WORD *)(v4 + 84) )
      {
        Keyword = EventDescriptor->Keyword;
        if ( *(_BYTE *)(v4 + 116) )
        {
          v8 = *(_BYTE *)(v4 + 117);
          if ( (EventDescriptor->Level <= v8 || !v8)
            && ((*(_BYTE *)(v5 + 112) & 0x40) != 0 && !Keyword
             || (Keyword & *(_QWORD *)(v5 + 104)) != 0 && (Keyword & *(_QWORD *)(v5 + 96)) == *(_QWORD *)(v5 + 96)) )
          {
            return 1;
          }
        }
        if ( *(_BYTE *)(v5 + 236) )
        {
          v9 = *(_BYTE *)(v5 + 237);
          if ( (EventDescriptor->Level <= v9 || !v9)
            && ((*(_BYTE *)(v5 + 232) & 0x40) != 0 && !Keyword
             || (Keyword & *(_QWORD *)(v5 + 224)) != 0 && (Keyword & *(_QWORD *)(v5 + 216)) == *(_QWORD *)(v5 + 216)) )
          {
            return 1;
          }
        }
      }
    }
  }
  return result;
}

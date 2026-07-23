/*
 * XREFs of EtwEventEnabled @ 0x180004AF0
 * Callers:
 *     EtwEventWriteStartScenario @ 0x180002EC0 (EtwEventWriteStartScenario.c)
 *     EtwEventWriteEndScenario @ 0x180004A00 (EtwEventWriteEndScenario.c)
 * Callees:
 *     ProviderHandleLookup @ 0x1800A3A68 (ProviderHandleLookup.c)
 */

BOOLEAN __cdecl EtwEventEnabled(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor)
{
  __int64 v4; // rax
  __int64 v5; // r8
  REGHANDLE v6; // rbx
  unsigned __int64 Keyword; // rdx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  BOOLEAN result; // al

  result = 0;
  if ( EventDescriptor )
  {
    v4 = ProviderHandleLookup(RegHandle, (unsigned int)RegHandle);
    v5 = v4;
    if ( v4 )
    {
      v6 = HIDWORD(RegHandle);
      if ( (_WORD)v6 )
      {
        if ( (_WORD)v6 == *(_WORD *)(v4 + 96) )
        {
          Keyword = EventDescriptor->Keyword;
          if ( *(_BYTE *)(v4 + 124) )
          {
            v8 = *(_BYTE *)(v4 + 125);
            if ( (EventDescriptor->Level <= v8 || !v8)
              && ((*(_BYTE *)(v5 + 120) & 0x40) != 0 && !Keyword
               || (Keyword & *(_QWORD *)(v5 + 112)) != 0 && (Keyword & *(_QWORD *)(v5 + 104)) == *(_QWORD *)(v5 + 104)) )
            {
              return 1;
            }
          }
          if ( *(_BYTE *)(v5 + 244) )
          {
            v9 = *(_BYTE *)(v5 + 245);
            if ( (EventDescriptor->Level <= v9 || !v9)
              && ((*(_BYTE *)(v5 + 240) & 0x40) != 0 && !Keyword
               || (Keyword & *(_QWORD *)(v5 + 232)) != 0 && (Keyword & *(_QWORD *)(v5 + 224)) == *(_QWORD *)(v5 + 224)) )
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

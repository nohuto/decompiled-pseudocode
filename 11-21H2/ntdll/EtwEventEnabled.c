/*
 * XREFs of EtwEventEnabled @ 0x180004AF0
 * Callers:
 *     EtwEventWriteStartScenario @ 0x180002EC0 (EtwEventWriteStartScenario.c)
 *     EtwEventWriteEndScenario @ 0x180004A00 (EtwEventWriteEndScenario.c)
 * Callees:
 *     ProviderHandleLookup @ 0x1800A3A68 (ProviderHandleLookup.c)
 */

bool __fastcall EtwEventEnabled(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  bool result; // al

  result = 0;
  if ( a2 )
  {
    v4 = ProviderHandleLookup(a1, (unsigned int)a1);
    v5 = v4;
    if ( v4 )
    {
      v6 = HIDWORD(a1);
      if ( (_WORD)v6 )
      {
        if ( (_WORD)v6 == *(_WORD *)(v4 + 96) )
        {
          v7 = *(_QWORD *)(a2 + 8);
          if ( *(_BYTE *)(v4 + 124) )
          {
            v8 = *(_BYTE *)(v4 + 125);
            if ( (*(_BYTE *)(a2 + 4) <= v8 || !v8)
              && ((*(_BYTE *)(v5 + 120) & 0x40) != 0 && !v7
               || (v7 & *(_QWORD *)(v5 + 112)) != 0 && (v7 & *(_QWORD *)(v5 + 104)) == *(_QWORD *)(v5 + 104)) )
            {
              return 1;
            }
          }
          if ( *(_BYTE *)(v5 + 244) )
          {
            v9 = *(_BYTE *)(v5 + 245);
            if ( (*(_BYTE *)(a2 + 4) <= v9 || !v9)
              && ((*(_BYTE *)(v5 + 240) & 0x40) != 0 && !v7
               || (v7 & *(_QWORD *)(v5 + 232)) != 0 && (v7 & *(_QWORD *)(v5 + 224)) == *(_QWORD *)(v5 + 224)) )
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

/*
 * XREFs of EtwEventEnabled @ 0x1800527B0
 * Callers:
 *     EtwEventWriteStartScenario @ 0x1800525C0 (EtwEventWriteStartScenario.c)
 *     EtwEventWriteEndScenario @ 0x1800526C0 (EtwEventWriteEndScenario.c)
 * Callees:
 *     ProviderHandleLookup @ 0x180030550 (ProviderHandleLookup.c)
 */

bool __fastcall EtwEventEnabled(__int64 a1, __int64 a2)
{
  __int16 v3; // rbx^4
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  bool result; // al
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al

  v3 = WORD2(a1);
  result = 0;
  if ( a2 )
  {
    v4 = ProviderHandleLookup(a1, a1);
    v5 = v4;
    if ( v4 )
    {
      if ( v3 == *(_WORD *)(v4 + 84) )
      {
        v6 = *(_QWORD *)(a2 + 8);
        if ( *(_BYTE *)(v4 + 116) )
        {
          v8 = *(_BYTE *)(v4 + 117);
          if ( (*(_BYTE *)(a2 + 4) <= v8 || !v8)
            && ((*(_BYTE *)(v5 + 112) & 0x40) != 0 && !v6
             || (v6 & *(_QWORD *)(v5 + 104)) != 0 && (v6 & *(_QWORD *)(v5 + 96)) == *(_QWORD *)(v5 + 96)) )
          {
            return 1;
          }
        }
        if ( *(_BYTE *)(v5 + 236) )
        {
          v9 = *(_BYTE *)(v5 + 237);
          if ( (*(_BYTE *)(a2 + 4) <= v9 || !v9)
            && ((*(_BYTE *)(v5 + 232) & 0x40) != 0 && !v6
             || (v6 & *(_QWORD *)(v5 + 224)) != 0 && (v6 & *(_QWORD *)(v5 + 216)) == *(_QWORD *)(v5 + 216)) )
          {
            return 1;
          }
        }
      }
    }
  }
  return result;
}

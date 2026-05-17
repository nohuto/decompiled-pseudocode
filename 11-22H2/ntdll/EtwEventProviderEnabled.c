/*
 * XREFs of EtwEventProviderEnabled @ 0x180030150
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007BFAC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     ProviderHandleLookup @ 0x180030720 (ProviderHandleLookup.c)
 */

char __fastcall EtwEventProviderEnabled(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int16 v5; // rdi^4
  __int64 v6; // rax
  char v7; // r9
  __int64 v8; // rcx
  unsigned __int8 v10; // al

  v5 = WORD2(a1);
  v6 = ProviderHandleLookup(a1, (unsigned int)a1);
  v7 = 0;
  v8 = v6;
  if ( !v6 || v5 != *(_WORD *)(v6 + 84) )
    return 0;
  if ( *(_BYTE *)(v6 + 116)
    && (a2 <= *(_BYTE *)(v6 + 117) || !*(_BYTE *)(v6 + 117))
    && ((*(_BYTE *)(v6 + 112) & 0x40) != 0 && !a3
     || (a3 & *(_QWORD *)(v6 + 104)) != 0 && (a3 & *(_QWORD *)(v6 + 96)) == *(_QWORD *)(v6 + 96)) )
  {
    return 1;
  }
  if ( *(_BYTE *)(v6 + 236) )
  {
    v10 = *(_BYTE *)(v6 + 237);
    if ( (a2 <= v10 || !v10)
      && ((*(_BYTE *)(v8 + 232) & 0x40) != 0 && !a3
       || (a3 & *(_QWORD *)(v8 + 224)) != 0 && (a3 & *(_QWORD *)(v8 + 216)) == *(_QWORD *)(v8 + 216)) )
    {
      return 1;
    }
  }
  return v7;
}

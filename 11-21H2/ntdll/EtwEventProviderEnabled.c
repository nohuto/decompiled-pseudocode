/*
 * XREFs of EtwEventProviderEnabled @ 0x18007B090
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180002FFC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     ProviderHandleLookup @ 0x1800A3A68 (ProviderHandleLookup.c)
 */

char __fastcall EtwEventProviderEnabled(unsigned __int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v6; // rax
  char v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // al

  v6 = ProviderHandleLookup(a1, (unsigned int)a1);
  v7 = 0;
  v8 = v6;
  if ( !v6 )
    return 0;
  v9 = HIDWORD(a1);
  if ( !(_WORD)v9 || (_WORD)v9 != *(_WORD *)(v6 + 96) )
    return 0;
  if ( *(_BYTE *)(v6 + 124)
    && (a2 <= *(_BYTE *)(v6 + 125) || !*(_BYTE *)(v6 + 125))
    && ((*(_BYTE *)(v6 + 120) & 0x40) != 0 && !a3
     || (a3 & *(_QWORD *)(v6 + 112)) != 0 && (a3 & *(_QWORD *)(v6 + 104)) == *(_QWORD *)(v6 + 104)) )
  {
    return 1;
  }
  if ( *(_BYTE *)(v6 + 244) )
  {
    v10 = *(_BYTE *)(v6 + 245);
    if ( (a2 <= v10 || !v10)
      && ((*(_BYTE *)(v8 + 240) & 0x40) != 0 && !a3
       || (a3 & *(_QWORD *)(v8 + 232)) != 0 && (a3 & *(_QWORD *)(v8 + 224)) == *(_QWORD *)(v8 + 224)) )
    {
      return 1;
    }
  }
  return v7;
}

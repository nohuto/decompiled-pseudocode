/*
 * XREFs of EtwpAcquireLoggerContextByLoggerName @ 0x1406BD81C
 * Callers:
 *     EtwQueryTraceHandleByLoggerName @ 0x1407E5A14 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpAcquireLoggerContext @ 0x1407F8D10 (EtwpAcquireLoggerContext.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140B975B4 (EtwpEnableBootLoggerRegistryProviders.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall EtwpAcquireLoggerContextByLoggerName(__int64 a1, const UNICODE_STRING *a2, char a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx

  if ( !a2 )
    return 0LL;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 16) )
    return 0LL;
  while ( 1 )
  {
    v7 = EtwpAcquireLoggerContextByLoggerId(a1, v6, 0LL);
    v8 = v7;
    if ( v7 )
      break;
LABEL_7:
    if ( ++v6 >= *(_DWORD *)(a1 + 16) )
      return 0LL;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 136), a2, 1u) )
  {
    v9 = 0LL;
LABEL_6:
    EtwpReleaseLoggerContext(v8, v9);
    goto LABEL_7;
  }
  if ( a3 )
    KeWaitForSingleObject((PVOID)(v8 + 632), Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(v8 + 320) )
  {
    LOBYTE(v9) = a3;
    goto LABEL_6;
  }
  return v8;
}

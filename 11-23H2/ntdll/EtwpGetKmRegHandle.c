/*
 * XREFs of EtwpGetKmRegHandle @ 0x180052848
 * Callers:
 *     EtwEventWriteStartScenario @ 0x1800525C0 (EtwEventWriteStartScenario.c)
 *     EtwEventWriteEndScenario @ 0x1800526C0 (EtwEventWriteEndScenario.c)
 * Callees:
 *     ProviderHandleLookup @ 0x180030550 (ProviderHandleLookup.c)
 */

__int64 __fastcall EtwpGetKmRegHandle(__int64 a1, _DWORD *a2)
{
  __int16 v3; // rbx^4
  __int64 v4; // rax

  v3 = WORD2(a1);
  if ( !a2 )
    return 87LL;
  *a2 = 0;
  v4 = ProviderHandleLookup(a1, a1);
  if ( !v4 || v3 != *(_WORD *)(v4 + 84) )
    return 6LL;
  *a2 = *(_DWORD *)(v4 + 88);
  return 0LL;
}

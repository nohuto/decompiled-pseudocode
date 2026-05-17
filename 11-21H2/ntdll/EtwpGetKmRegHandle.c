/*
 * XREFs of EtwpGetKmRegHandle @ 0x18000498C
 * Callers:
 *     EtwEventWriteStartScenario @ 0x180002EC0 (EtwEventWriteStartScenario.c)
 *     EtwEventWriteEndScenario @ 0x180004A00 (EtwEventWriteEndScenario.c)
 * Callees:
 *     ProviderHandleLookup @ 0x1800A3A68 (ProviderHandleLookup.c)
 */

__int64 __fastcall EtwpGetKmRegHandle(unsigned __int64 a1, _DWORD *a2)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx

  if ( !a2 )
    return 87LL;
  *a2 = 0;
  v5 = ProviderHandleLookup(a1, (unsigned int)a1);
  if ( !v5 )
    return 6LL;
  v6 = HIDWORD(a1);
  if ( !(_WORD)v6 || (_WORD)v6 != *(_WORD *)(v5 + 96) )
    return 6LL;
  *a2 = *(_DWORD *)(v5 + 88);
  return 0LL;
}

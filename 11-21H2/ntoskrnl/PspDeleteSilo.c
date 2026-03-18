/*
 * XREFs of PspDeleteSilo @ 0x1407F8C6C
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020A400 (PsIsServerSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x1409ABFB0 (PspDeleteServerSiloGlobals.c)
 */

char __fastcall PspDeleteSilo(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  if ( *(_DWORD *)(a1 + 216) )
    __int2c();
  result = PsIsServerSilo(a1);
  if ( result )
  {
    result = PspDeleteServerSiloGlobals(*(PVOID *)(v3 + 1464));
    *(_QWORD *)(a1 + 1464) = 0LL;
  }
  return result;
}

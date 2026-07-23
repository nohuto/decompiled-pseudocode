/*
 * XREFs of PspDeleteSilo @ 0x1409AD25C
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020C020 (PsIsServerSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x1409AD090 (PspDeleteServerSiloGlobals.c)
 */

void __fastcall PspDeleteSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_DWORD *)(a1 + 216) )
    NT_ASSERT("Silo->ActiveProcesses == 0");
  if ( PsIsServerSilo(a1) )
  {
    PspDeleteServerSiloGlobals(*(char **)(v2 + 1488));
    *(_QWORD *)(a1 + 1488) = 0LL;
  }
}

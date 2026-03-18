/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x140947AAC
 * Callers:
 *     IoRaiseHardError @ 0x140556A80 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14028C190 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x1405A38EC (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}

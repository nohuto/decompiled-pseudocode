/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x140947CAC
 * Callers:
 *     IoRaiseHardError @ 0x140557140 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14028C420 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x1405A3DDC (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}

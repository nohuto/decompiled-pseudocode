/*
 * XREFs of sub_140936BD8 @ 0x140936BD8
 * Callers:
 *     IoRaiseHardError @ 0x140557690 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_1405E004C @ 0x1405E004C (sub_1405E004C.c)
 */

__int64 __fastcall sub_140936BD8(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return sub_1405E004C(ThreadServerSilo);
}

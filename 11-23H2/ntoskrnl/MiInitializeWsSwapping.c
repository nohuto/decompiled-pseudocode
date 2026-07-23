/*
 * XREFs of MiInitializeWsSwapping @ 0x140837BF8
 * Callers:
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall MiInitializeWsSwapping(_QWORD *a1))(__int64 a1)
{
  void (__fastcall *result)(__int64); // rax

  a1[146] = 0LL;
  result = MiContractWsSwapPageFileWorker;
  a1[141] = 0LL;
  a1[143] = MiContractWsSwapPageFileWorker;
  a1[144] = a1;
  return result;
}

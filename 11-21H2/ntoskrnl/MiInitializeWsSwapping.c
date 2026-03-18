/*
 * XREFs of MiInitializeWsSwapping @ 0x14081DB00
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall MiInitializeWsSwapping(_QWORD *a1))(__int64 a1)
{
  void (__fastcall *result)(__int64); // rax

  a1[144] = 0LL;
  result = MiContractWsSwapPageFileWorker;
  a1[139] = 0LL;
  a1[141] = MiContractWsSwapPageFileWorker;
  a1[142] = a1;
  return result;
}

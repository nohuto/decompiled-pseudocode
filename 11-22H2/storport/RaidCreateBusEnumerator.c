/*
 * XREFs of RaidCreateBusEnumerator @ 0x1C003EDCC
 * Callers:
 *     StorAdapterNVMeEnumerate @ 0x1C00AB530 (StorAdapterNVMeEnumerate.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

_QWORD *__fastcall RaidCreateBusEnumerator(_QWORD *a1)
{
  _QWORD *result; // rax

  memset_0(a1, 0, 0x88uLL);
  result = a1 + 15;
  a1[16] = a1 + 15;
  a1[15] = a1 + 15;
  return result;
}

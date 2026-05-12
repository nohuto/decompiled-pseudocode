/*
 * XREFs of RaidCreateBusEnumerator @ 0x1C001593C
 * Callers:
 *     StorAdapterNVMeEnumerate @ 0x1C008607C (StorAdapterNVMeEnumerate.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 */

_QWORD *__fastcall RaidCreateBusEnumerator(_QWORD *a1)
{
  _QWORD *result; // rax

  memset(a1, 0, 0x88uLL);
  result = a1 + 15;
  a1[16] = a1 + 15;
  a1[15] = a1 + 15;
  return result;
}

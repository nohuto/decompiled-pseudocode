/*
 * XREFs of sub_140204FE0 @ 0x140204FE0
 * Callers:
 *     sub_140204954 @ 0x140204954 (sub_140204954.c)
 *     sub_140204B30 @ 0x140204B30 (sub_140204B30.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void *__fastcall sub_140204FE0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *Pool2; // rax
  void *v5; // rbx

  Pool2 = (void *)ExAllocatePool2(KeGetCurrentIrql() < 2u ? 256LL : 64LL, a1 + 64LL, 1950442835LL, a4);
  v5 = Pool2;
  if ( Pool2 )
    memset(Pool2, 0, 0x40uLL);
  return v5;
}

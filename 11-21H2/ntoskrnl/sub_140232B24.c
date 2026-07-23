/*
 * XREFs of sub_140232B24 @ 0x140232B24
 * Callers:
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *sub_140232B24()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  ++*((_QWORD *)result + 112);
  __incgsdword(0x2EDCu);
  return result;
}

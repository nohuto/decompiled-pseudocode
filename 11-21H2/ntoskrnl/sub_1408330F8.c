/*
 * XREFs of sub_1408330F8 @ 0x1408330F8
 * Callers:
 *     sub_1403C7984 @ 0x1403C7984 (sub_1403C7984.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *sub_1408330F8()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  --*((_WORD *)result + 242);
  return result;
}

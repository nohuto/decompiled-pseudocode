/*
 * XREFs of sub_1402A36B0 @ 0x1402A36B0
 * Callers:
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *sub_1402A36B0()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  ++*((_QWORD *)result + 113);
  __incgsdword(0x2EE0u);
  return result;
}

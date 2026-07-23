/*
 * XREFs of sub_1402F672C @ 0x1402F672C
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_1407ADB90 @ 0x1407ADB90 (sub_1407ADB90.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *sub_1402F672C()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  ++*((_QWORD *)result + 114);
  __incgsdword(0x2EE4u);
  return result;
}

/*
 * XREFs of sub_14056EC2C @ 0x14056EC2C
 * Callers:
 *     sub_14056ECDC @ 0x14056ECDC (sub_14056ECDC.c)
 *     sub_14056EE94 @ 0x14056EE94 (sub_14056EE94.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall sub_14056EC2C(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  return KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
}

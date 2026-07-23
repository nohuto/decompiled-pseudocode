/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x14063D2C0
 * Callers:
 *     sub_140609510 @ 0x140609510 (sub_140609510.c)
 * Callees:
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

char __fastcall ExReleaseResourceAndLeavePriorityRegion(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  ExReleaseResourceLite(a1);
  CurrentThread = KeGetCurrentThread();
  sub_1402ACD80((__int64)CurrentThread, 1, 0, 0LL);
  return sub_1402F9540((__int64)CurrentThread);
}

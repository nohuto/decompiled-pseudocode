/*
 * XREFs of sub_1403DD920 @ 0x1403DD920
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueue @ 0x14023FFE0 (KeRemoveQueue.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall __noreturn sub_1403DD920(PVOID StartContext)
{
  __int64 v1; // rdi
  struct _KQUEUE *v2; // rdi
  PLIST_ENTRY BugCheckParameter4; // rbx
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // cl

  v1 = (unsigned int)StartContext;
  KeSetPriorityThread(KeGetCurrentThread(), (_DWORD)StartContext + 16);
  v2 = (struct _KQUEUE *)((char *)&unk_140C489A0 + 64 * v1);
  do
  {
    BugCheckParameter4 = KeRemoveQueue(v2, 0, 0LL);
    sub_14042A5E0(BugCheckParameter4[1].Blink, v4);
  }
  while ( !KeGetCurrentIrql() );
  CurrentIrql = KeGetCurrentIrql();
  KeBugCheckEx(
    0xC8u,
    ((unsigned __int64)CurrentIrql << 16) | 2,
    (ULONG_PTR)BugCheckParameter4[1].Flink,
    (ULONG_PTR)BugCheckParameter4[1].Blink,
    (ULONG_PTR)BugCheckParameter4);
}

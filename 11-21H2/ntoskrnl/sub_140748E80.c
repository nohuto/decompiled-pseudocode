/*
 * XREFs of sub_140748E80 @ 0x140748E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025CA98 @ 0x14025CA98 (sub_14025CA98.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 */

char __fastcall sub_140748E80(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx

  sub_14025CA98(a1);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_BYTE *)(a1 + 488) )
  {
    sub_1402D2774(&stru_14000E328, (unsigned __int16 *)(a1 + 16));
    v3 = *(void **)(a1 + 72);
    if ( v3 )
    {
      ZwClose(v3);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    *(_WORD *)(a1 + 488) = 0;
    sub_1402D2774(&stru_14000E338, (unsigned __int16 *)(a1 + 16));
    *(_QWORD *)(a1 + 440) = 0LL;
    *(_QWORD *)(a1 + 456) = sub_1402D1E10;
    *(_QWORD *)(a1 + 464) = a1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 440), DelayedWorkQueue);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
